
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_i2c_private {struct i2c_msg* msg; int clk; int iobase; scalar_t__ irq; } ;
struct i2c_msg {int flags; int addr; int * buf; int len; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct xlr_i2c_private* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (struct xlr_i2c_private*,int ,int *,int ) ;
 int FUNC_4 (struct xlr_i2c_private*,int ,int *,int ) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct i2c_adapter *VAR_2,
 struct i2c_msg *VAR_3, int VAR_4)
{
 struct i2c_msg *VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 struct xlr_i2c_private *VAR_8 = FUNC_2(VAR_2);

 VAR_7 = FUNC_1(VAR_8->clk);
 if (VAR_7)
  return VAR_7;

 if (VAR_8->irq)
  FUNC_5(VAR_8->iobase, VAR_1, 0xf);


 for (VAR_6 = 0; VAR_7 == 0 && VAR_6 < VAR_4; VAR_6++) {
  VAR_5 = &VAR_3[VAR_6];
  VAR_8->msg = VAR_5;
  if (VAR_5->flags & VAR_0)
   VAR_7 = FUNC_3(VAR_8, VAR_5->len, &VAR_5->buf[0],
     VAR_5->addr);
  else
   VAR_7 = FUNC_4(VAR_8, VAR_5->len, &VAR_5->buf[0],
     VAR_5->addr);
 }

 if (VAR_8->irq)
  FUNC_5(VAR_8->iobase, VAR_1, 0);

 FUNC_0(VAR_8->clk);
 VAR_8->msg = ((void*)0);

 return (VAR_7 != 0) ? VAR_7 : VAR_4;
}
