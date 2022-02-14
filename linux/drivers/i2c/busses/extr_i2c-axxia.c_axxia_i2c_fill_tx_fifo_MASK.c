
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int len; int * buf; } ;
struct axxia_i2c_dev {int msg_xfrd; scalar_t__ base; struct i2c_msg* msg; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (size_t,int) ;
 size_t FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct axxia_i2c_dev *VAR_3)
{
 struct i2c_msg *VAR_4 = VAR_3->msg;
 size_t VAR_5 = VAR_0 - FUNC_1(VAR_3->base + VAR_2);
 int VAR_6 = FUNC_0(VAR_5, VAR_4->len - VAR_3->msg_xfrd);
 int VAR_7 = VAR_4->len - VAR_3->msg_xfrd - VAR_6;

 while (VAR_6-- > 0)
  FUNC_2(VAR_4->buf[VAR_3->msg_xfrd++], VAR_3->base + VAR_1);

 return VAR_7;
}
