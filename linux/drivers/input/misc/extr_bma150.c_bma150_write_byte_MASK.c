
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {scalar_t__ irq; } ;
typedef int s32 ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0, u8 VAR_1, u8 VAR_2)
{
 s32 VAR_3;


 if (VAR_0->irq)
  FUNC_0(VAR_0->irq);

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);

 if (VAR_0->irq)
  FUNC_1(VAR_0->irq);

 return VAR_3;
}
