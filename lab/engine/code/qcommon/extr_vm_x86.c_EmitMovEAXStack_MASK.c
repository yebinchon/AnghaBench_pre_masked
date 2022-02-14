
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* instructionPointers; } ;
typedef TYPE_1__ vm_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

__attribute__((used)) static void FUNC_2(vm_t *VAR_16, int VAR_17)
{
 if(!VAR_13)
 {
  if(VAR_1 == VAR_0)
  {
   VAR_11 -= 3;
   VAR_16->instructionPointers[VAR_12 - 1] = VAR_11;
  }
  else if(VAR_15 == VAR_2 && VAR_10[VAR_11-7] == 0xC7 && VAR_10[VAR_11-6] == 0x04 && VAR_10[VAR_11 - 5] == 0x9F)
  {
   VAR_11 -= 7;
   VAR_16->instructionPointers[VAR_12 - 1] = VAR_11;
   FUNC_1("B8");

   if(VAR_17)
    FUNC_0(VAR_14 & VAR_17);
   else
    FUNC_0(VAR_14);

   return;
  }
  else if(VAR_15 != VAR_3 && VAR_15 != VAR_4 && VAR_15 != VAR_5 && VAR_15 != VAR_6 &&
   VAR_15 != VAR_9 && VAR_15 != VAR_8 && VAR_15 != VAR_7)
  {
   FUNC_1("8B 04 9F");
  }
 }
 else
  FUNC_1("8B 04 9F");

 if(VAR_17)
 {
  FUNC_1("25");
  FUNC_0(VAR_17);
 }
}
