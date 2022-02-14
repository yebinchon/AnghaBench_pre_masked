
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct xlr_i2c_private {int iobase; int pos; struct i2c_msg* msg; } ;
struct i2c_msg {int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct xlr_i2c_private *VAR_2, u32 VAR_3)
{
 struct i2c_msg *VAR_4 = VAR_2->msg;

 if (VAR_3 & VAR_1)
  VAR_4->buf[VAR_2->pos++] =
   FUNC_0(VAR_2->iobase, VAR_0);
}
