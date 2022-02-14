
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iqs5xx_private {scalar_t__ bl_status; int lock; } ;
struct i2c_client {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct iqs5xx_private* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3, u8 VAR_4)
{
 struct iqs5xx_private *VAR_5 = FUNC_2(VAR_3);
 int VAR_6, VAR_7;

 if (VAR_5->bl_status == VAR_0)
  return 0;

 FUNC_4(&VAR_5->lock);






 FUNC_0(VAR_3->irq);

 VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_4);
 VAR_7 = FUNC_3(VAR_3, VAR_1, 0);

 FUNC_6(50, 100);
 FUNC_1(VAR_3->irq);

 FUNC_5(&VAR_5->lock);

 if (VAR_6)
  return VAR_6;

 return VAR_7;
}
