
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i2c_msg {int flags; scalar_t__ addr; int len; } ;
struct i2c_adapter_quirks {int max_num_msgs; int flags; int max_comb_1st_msg_len; int max_comb_2nd_msg_len; int max_read_len; int max_write_len; } ;
struct i2c_adapter {struct i2c_adapter_quirks* quirks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,char*) ;
 scalar_t__ FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_7, struct i2c_msg *VAR_8, int VAR_9)
{
 const struct i2c_adapter_quirks *VAR_10 = VAR_7->quirks;
 int VAR_11 = VAR_10->max_num_msgs, VAR_12;
 bool VAR_13 = 1;

 if (VAR_10->flags & VAR_0) {
  VAR_11 = 2;


  if (VAR_9 == 2) {
   if (VAR_10->flags & VAR_3 && VAR_8[0].flags & VAR_6)
    return FUNC_0(VAR_7, &VAR_8[0], "1st comb msg must be write");

   if (VAR_10->flags & VAR_1 && !(VAR_8[1].flags & VAR_6))
    return FUNC_0(VAR_7, &VAR_8[1], "2nd comb msg must be read");

   if (VAR_10->flags & VAR_2 && VAR_8[0].addr != VAR_8[1].addr)
    return FUNC_0(VAR_7, &VAR_8[0], "comb msg only to same addr");

   if (FUNC_1(VAR_8[0].len, VAR_10->max_comb_1st_msg_len))
    return FUNC_0(VAR_7, &VAR_8[0], "msg too long");

   if (FUNC_1(VAR_8[1].len, VAR_10->max_comb_2nd_msg_len))
    return FUNC_0(VAR_7, &VAR_8[1], "msg too long");

   VAR_13 = 0;
  }
 }

 if (FUNC_1(VAR_9, VAR_11))
  return FUNC_0(VAR_7, &VAR_8[0], "too many messages");

 for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++) {
  u16 VAR_14 = VAR_8[VAR_12].len;

  if (VAR_8[VAR_12].flags & VAR_6) {
   if (VAR_13 && FUNC_1(VAR_14, VAR_10->max_read_len))
    return FUNC_0(VAR_7, &VAR_8[VAR_12], "msg too long");

   if (VAR_10->flags & VAR_4 && VAR_14 == 0)
    return FUNC_0(VAR_7, &VAR_8[VAR_12], "no zero length");
  } else {
   if (VAR_13 && FUNC_1(VAR_14, VAR_10->max_write_len))
    return FUNC_0(VAR_7, &VAR_8[VAR_12], "msg too long");

   if (VAR_10->flags & VAR_5 && VAR_14 == 0)
    return FUNC_0(VAR_7, &VAR_8[VAR_12], "no zero length");
  }
 }

 return 0;
}
