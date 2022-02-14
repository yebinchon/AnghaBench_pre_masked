
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int flags; int buf; int addr; int len; } ;
struct ec_params_i2c_passthru_msg {int len; int addr_flags; } ;
struct ec_params_i2c_passthru {int num_msgs; struct ec_params_i2c_passthru_msg* msg; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_4, const struct i2c_msg VAR_5[],
        int VAR_6, u16 VAR_7)
{
 struct ec_params_i2c_passthru *VAR_8;
 u8 *VAR_9;
 int VAR_10;

 VAR_9 = VAR_4 + sizeof(struct ec_params_i2c_passthru) +
     VAR_6 * sizeof(struct ec_params_i2c_passthru_msg);

 VAR_8 = (struct ec_params_i2c_passthru *)VAR_4;
 VAR_8->port = VAR_7;
 VAR_8->num_msgs = VAR_6;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  const struct i2c_msg *VAR_11 = &VAR_5[VAR_10];
  struct ec_params_i2c_passthru_msg *VAR_12 = &VAR_8->msg[VAR_10];

  VAR_12->len = VAR_11->len;
  VAR_12->addr_flags = VAR_11->addr;

  if (VAR_11->flags & VAR_3)
   return -VAR_1;

  if (VAR_11->flags & VAR_2) {
   VAR_12->addr_flags |= VAR_0;
  } else {
   FUNC_0(VAR_9, VAR_11->buf, VAR_12->len);
   VAR_9 += VAR_12->len;
  }
 }

 return 0;
}
