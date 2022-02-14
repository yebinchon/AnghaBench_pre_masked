
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ start; } ;
typedef TYPE_1__ atom_exec_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int,int*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(atom_exec_context *VAR_3, int *VAR_4, int VAR_5)
{
 uint8_t VAR_6 = FUNC_2((*VAR_4)++);
 uint32_t VAR_7, VAR_8, VAR_9;
 FUNC_0("   switch: ");
 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_4);
 while (FUNC_1(*VAR_4) != VAR_1)
  if (FUNC_2(*VAR_4) == VAR_2) {
   (*VAR_4)++;
   FUNC_0("   case: ");
   VAR_8 =
       FUNC_3(VAR_3, (VAR_6 & 0x38) | VAR_0,
      VAR_4);
   VAR_9 = FUNC_1(*VAR_4);
   if (VAR_8 == VAR_7) {
    FUNC_0("   target: %04X\n", VAR_9);
    *VAR_4 = VAR_3->start + VAR_9;
    return;
   }
   (*VAR_4) += 2;
  } else {
   FUNC_4("Bad case\n");
   return;
  }
 (*VAR_4) += 2;
}
