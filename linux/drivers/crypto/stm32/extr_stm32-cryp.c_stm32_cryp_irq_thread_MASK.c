
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct stm32_cryp {int irq_status; int gcm_ctr; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct stm32_cryp*) ;
 scalar_t__ FUNC_1 (struct stm32_cryp*) ;
 int FUNC_2 (struct stm32_cryp*,int ) ;
 int FUNC_3 (struct stm32_cryp*) ;
 int FUNC_4 (struct stm32_cryp*) ;
 int FUNC_5 (struct stm32_cryp*) ;
 int FUNC_6 (struct stm32_cryp*) ;
 int FUNC_7 (struct stm32_cryp*,int ) ;
 int FUNC_8 (struct stm32_cryp*,int ,int ) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static irqreturn_t FUNC_10(int VAR_7, void *VAR_8)
{
 struct stm32_cryp *VAR_9 = VAR_8;
 u32 VAR_10;

 if (VAR_9->irq_status & VAR_6)

  if (FUNC_9(FUNC_3(VAR_9))) {

   FUNC_8(VAR_9, VAR_1, 0);
   FUNC_2(VAR_9, 0);
   return VAR_4;
  }

 if (VAR_9->irq_status & VAR_5) {
  if (FUNC_1(VAR_9)) {
   VAR_10 = FUNC_7(VAR_9, VAR_0) & VAR_3;
   if (FUNC_9(VAR_10 == VAR_2))

    FUNC_6(VAR_9);
   else

    FUNC_5(VAR_9);
   VAR_9->gcm_ctr++;
  } else if (FUNC_0(VAR_9)) {
   VAR_10 = FUNC_7(VAR_9, VAR_0) & VAR_3;
   if (FUNC_9(VAR_10 == VAR_2))

    FUNC_4(VAR_9);
   else

    FUNC_5(VAR_9);
  } else {

   FUNC_5(VAR_9);
  }
 }

 return VAR_4;
}
