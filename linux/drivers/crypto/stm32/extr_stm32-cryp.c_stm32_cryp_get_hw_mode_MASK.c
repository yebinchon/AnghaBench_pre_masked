
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_cryp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct stm32_cryp*) ;
 scalar_t__ FUNC_2 (struct stm32_cryp*) ;
 scalar_t__ FUNC_3 (struct stm32_cryp*) ;
 scalar_t__ FUNC_4 (struct stm32_cryp*) ;
 scalar_t__ FUNC_5 (struct stm32_cryp*) ;
 scalar_t__ FUNC_6 (struct stm32_cryp*) ;
 scalar_t__ FUNC_7 (struct stm32_cryp*) ;
 scalar_t__ FUNC_8 (struct stm32_cryp*) ;

__attribute__((used)) static u32 FUNC_9(struct stm32_cryp *VAR_10)
{
 if (FUNC_1(VAR_10) && FUNC_6(VAR_10))
  return VAR_3;

 if (FUNC_1(VAR_10) && FUNC_2(VAR_10))
  return VAR_0;

 if (FUNC_1(VAR_10) && FUNC_4(VAR_10))
  return VAR_2;

 if (FUNC_1(VAR_10) && FUNC_7(VAR_10))
  return VAR_4;

 if (FUNC_1(VAR_10) && FUNC_3(VAR_10))
  return VAR_1;

 if (FUNC_5(VAR_10) && FUNC_6(VAR_10))
  return VAR_7;

 if (FUNC_5(VAR_10) && FUNC_2(VAR_10))
  return VAR_6;

 if (FUNC_8(VAR_10) && FUNC_6(VAR_10))
  return VAR_9;

 if (FUNC_8(VAR_10) && FUNC_2(VAR_10))
  return VAR_8;

 FUNC_0(VAR_10->dev, "Unknown mode\n");
 return VAR_5;
}
