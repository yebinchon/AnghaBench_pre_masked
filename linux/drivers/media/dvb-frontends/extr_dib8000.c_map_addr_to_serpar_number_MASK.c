
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int* buf; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct i2c_msg *VAR_1)
{
 if (VAR_1->buf[0] <= 15)
  VAR_1->buf[0] -= 1;
 else if (VAR_1->buf[0] == 17)
  VAR_1->buf[0] = 15;
 else if (VAR_1->buf[0] == 16)
  VAR_1->buf[0] = 17;
 else if (VAR_1->buf[0] == 19)
  VAR_1->buf[0] = 16;
 else if (VAR_1->buf[0] >= 21 && VAR_1->buf[0] <= 25)
  VAR_1->buf[0] -= 3;
 else if (VAR_1->buf[0] == 28)
  VAR_1->buf[0] = 23;
 else if (VAR_1->buf[0] == 99)
  VAR_1->buf[0] = 99;
 else
  return -VAR_0;
 return 0;
}
