
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int irq_trigger_t ;
typedef scalar_t__ irq_signal_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (unsigned int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;


 int VAR_14 ;
 int FUNC_1 (int ,int) ;
 int VAR_15 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ,int *,int ) ;

void FUNC_5(unsigned int VAR_20, irq_trigger_t VAR_21,
       irq_signal_t VAR_22)
{
 u16 VAR_23;

 if (VAR_20 < VAR_9) {
  VAR_23 = 1 << VAR_20;
  if (VAR_21 != VAR_14) {
   FUNC_2(VAR_7, VAR_23);
   if (VAR_22 == VAR_13)
    FUNC_2(VAR_3, VAR_23);
   else
    FUNC_1(VAR_3, VAR_23);
   if (VAR_15 & VAR_12) {
    switch (VAR_21) {
    case 129:
     FUNC_2(VAR_1, VAR_23);
     FUNC_1(VAR_11, VAR_23);
     break;
    case 128:
     FUNC_1(VAR_1, VAR_23);
     FUNC_2(VAR_11, VAR_23);
     break;
    default:
     FUNC_2(VAR_1, VAR_23);
     FUNC_2(VAR_11, VAR_23);
     break;
    }
   }
   FUNC_4(FUNC_0(VAR_20),
       &VAR_17,
       VAR_18);
  } else {
   FUNC_1(VAR_7, VAR_23);
   FUNC_1(VAR_3, VAR_23);
   FUNC_4(FUNC_0(VAR_20),
       &VAR_17,
       VAR_19);
  }
  FUNC_3(VAR_5, VAR_23);
 } else if (VAR_20 < VAR_8) {
  VAR_23 = 1 << (VAR_20 - VAR_9);
  if (VAR_21 != VAR_14) {
   FUNC_2(VAR_6, VAR_23);
   if (VAR_22 == VAR_13)
    FUNC_2(VAR_2, VAR_23);
   else
    FUNC_1(VAR_2, VAR_23);
   if (VAR_15 & VAR_12) {
    switch (VAR_21) {
    case 129:
     FUNC_2(VAR_0, VAR_23);
     FUNC_1(VAR_10, VAR_23);
     break;
    case 128:
     FUNC_1(VAR_0, VAR_23);
     FUNC_2(VAR_10, VAR_23);
     break;
    default:
     FUNC_2(VAR_0, VAR_23);
     FUNC_2(VAR_10, VAR_23);
     break;
    }
   }
   FUNC_4(FUNC_0(VAR_20),
       &VAR_16,
       VAR_18);
  } else {
   FUNC_1(VAR_6, VAR_23);
   FUNC_1(VAR_2, VAR_23);
   FUNC_4(FUNC_0(VAR_20),
       &VAR_16,
       VAR_19);
  }
  FUNC_3(VAR_4, VAR_23);
 }
}
