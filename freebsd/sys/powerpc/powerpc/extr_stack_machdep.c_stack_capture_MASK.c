
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct stack {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct stack*,scalar_t__) ;
 int FUNC_1 (struct stack*) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct stack *VAR_4, vm_offset_t VAR_5)
{
 vm_offset_t VAR_6;

 FUNC_1(VAR_4);
 if (VAR_5 < VAR_1)
  return;
 while (1) {
  VAR_5 = *(vm_offset_t *)VAR_5;
  if (VAR_5 < VAR_1)
   break;




  VAR_6 = *(vm_offset_t *)(VAR_5 + 4) - 4;

  if ((VAR_6 & 3) || (VAR_6 < 0x100))
   break;







  if (VAR_6 + VAR_0 == (vm_offset_t) &VAR_3 ||
      VAR_6 + VAR_0 == (vm_offset_t) &VAR_2)
   break;

  if (FUNC_0(VAR_4, VAR_6) == -1)
   break;
 }
}
