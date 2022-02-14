
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum intr_polarity { ____Placeholder_intr_polarity } intr_polarity ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_2__ {int SciInterrupt; } ;





 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static enum intr_polarity
FUNC_1(UINT16 VAR_4, UINT8 VAR_5)
{

 switch (VAR_4 & VAR_0) {
 default:
  FUNC_0("WARNING: Bogus Interrupt Polarity. Assume CONFORMS\n");

 case 128:
  if (VAR_5 == VAR_1.SciInterrupt)
   return (VAR_3);
  else
   return (VAR_2);
 case 130:
  return (VAR_2);
 case 129:
  return (VAR_3);
 }
}
