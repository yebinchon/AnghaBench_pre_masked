
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_cryp {scalar_t__ total_in; scalar_t__ authsize; TYPE_1__* caps; int dev; } ;
struct TYPE_2__ {scalar_t__ padding_wa; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct stm32_cryp*) ;
 scalar_t__ FUNC_2 (struct stm32_cryp*) ;
 scalar_t__ FUNC_3 (struct stm32_cryp*) ;
 scalar_t__ FUNC_4 (struct stm32_cryp*) ;
 int FUNC_5 (struct stm32_cryp*) ;
 scalar_t__ FUNC_6 (struct stm32_cryp*) ;
 int FUNC_7 (struct stm32_cryp*) ;
 int FUNC_8 (struct stm32_cryp*) ;
 void FUNC_9 (struct stm32_cryp*) ;
 void FUNC_10 (struct stm32_cryp*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct stm32_cryp *VAR_3)
{
 if (FUNC_11(!VAR_3->total_in)) {
  FUNC_0(VAR_3->dev, "No more data to process\n");
  return;
 }

 if (FUNC_11(VAR_3->total_in < VAR_0 &&
       (FUNC_6(VAR_3) == VAR_2) &&
       FUNC_4(VAR_3))) {

  if (VAR_3->caps->padding_wa)

   return FUNC_10(VAR_3);


  FUNC_7(VAR_3);
 }

 if (FUNC_11((VAR_3->total_in - VAR_3->authsize < VAR_0) &&
       (FUNC_6(VAR_3) == VAR_1) &&
       FUNC_3(VAR_3))) {

  if (VAR_3->caps->padding_wa)

   return FUNC_9(VAR_3);


  FUNC_7(VAR_3);
 }

 if (FUNC_1(VAR_3) && FUNC_2(VAR_3))
  FUNC_5(VAR_3);

 FUNC_8(VAR_3);
}
