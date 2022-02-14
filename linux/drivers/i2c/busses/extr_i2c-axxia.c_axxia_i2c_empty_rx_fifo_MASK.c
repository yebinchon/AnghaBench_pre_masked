
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; int* buf; } ;
struct axxia_i2c_dev {int msg_xfrd_r; scalar_t__ base; int msg_complete; int msg_err; struct i2c_msg* msg_r; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct axxia_i2c_dev*,int ) ;
 scalar_t__ FUNC_2 (struct i2c_msg*) ;
 int FUNC_3 (size_t,int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct axxia_i2c_dev *VAR_6)
{
 struct i2c_msg *VAR_7 = VAR_6->msg_r;
 size_t VAR_8 = FUNC_4(VAR_6->base + VAR_3);
 int VAR_9 = FUNC_3(VAR_8, VAR_7->len - VAR_6->msg_xfrd_r);

 while (VAR_9-- > 0) {
  int VAR_10 = FUNC_4(VAR_6->base + VAR_2);

  if (VAR_6->msg_xfrd_r == 0 && FUNC_2(VAR_7)) {



   if (VAR_10 <= 0 || VAR_10 > VAR_1) {
    VAR_6->msg_err = -VAR_0;
    FUNC_1(VAR_6, ~VAR_5);
    FUNC_0(&VAR_6->msg_complete);
    break;
   }
   VAR_7->len = 1 + VAR_10;
   FUNC_5(VAR_7->len, VAR_6->base + VAR_4);
  }
  VAR_7->buf[VAR_6->msg_xfrd_r++] = VAR_10;
 }

 return 0;
}
