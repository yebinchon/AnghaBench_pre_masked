
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int flags; int len; int buf; } ;
struct ec_response_i2c_passthru {int i2c_status; int num_msgs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int const*,int ) ;

__attribute__((used)) static int FUNC_1(const u8 *VAR_8, struct i2c_msg VAR_9[],
     int *VAR_10)
{
 const struct ec_response_i2c_passthru *VAR_11;
 const u8 *VAR_12;
 int VAR_13;

 VAR_12 = VAR_8 + sizeof(struct ec_response_i2c_passthru);

 VAR_11 = (const struct ec_response_i2c_passthru *)VAR_8;
 if (VAR_11->i2c_status & VAR_2)
  return -VAR_6;
 else if (VAR_11->i2c_status & VAR_1)
  return -VAR_4;
 else if (VAR_11->i2c_status & VAR_0)
  return -VAR_3;


 if (VAR_11->num_msgs > *VAR_10)
  return -VAR_5;
 *VAR_10 = VAR_11->num_msgs;

 for (VAR_13 = 0; VAR_13 < *VAR_10; VAR_13++) {
  struct i2c_msg *VAR_14 = &VAR_9[VAR_13];

  if (VAR_9[VAR_13].flags & VAR_7) {
   FUNC_0(VAR_14->buf, VAR_12, VAR_14->len);
   VAR_12 += VAR_14->len;
  }
 }

 return 0;
}
