
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ocores_i2c {int nmsgs; scalar_t__ state; int wait; struct i2c_msg* msg; scalar_t__ pos; } ;
struct i2c_msg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (struct i2c_msg*) ;
 int FUNC_1 (struct ocores_i2c*,int ) ;
 int FUNC_2 (struct ocores_i2c*,int ,int) ;
 int FUNC_3 (struct ocores_i2c*) ;
 int FUNC_4 (struct ocores_i2c*) ;
 int FUNC_5 (int ,int,int ) ;

__attribute__((used)) static int FUNC_6(struct ocores_i2c *VAR_11,
       struct i2c_msg *VAR_12, int VAR_13,
       bool VAR_14)
{
 int VAR_15;
 u8 VAR_16;

 VAR_16 = FUNC_1(VAR_11, VAR_5);
 if (VAR_14)
  FUNC_2(VAR_11, VAR_5, VAR_16 & ~VAR_6);
 else
  FUNC_2(VAR_11, VAR_5, VAR_16 | VAR_6);

 VAR_11->msg = VAR_12;
 VAR_11->pos = 0;
 VAR_11->nmsgs = VAR_13;
 VAR_11->state = VAR_10;

 FUNC_2(VAR_11, VAR_7, FUNC_0(VAR_11->msg));
 FUNC_2(VAR_11, VAR_3, VAR_4);

 if (VAR_14) {
  FUNC_3(VAR_11);
 } else {
  VAR_15 = FUNC_5(VAR_11->wait,
      (VAR_11->state == VAR_9) ||
      (VAR_11->state == VAR_8), VAR_2);
  if (VAR_15 == 0) {
   FUNC_4(VAR_11);
   return -VAR_1;
  }
 }

 return (VAR_11->state == VAR_8) ? VAR_13 : -VAR_0;
}
