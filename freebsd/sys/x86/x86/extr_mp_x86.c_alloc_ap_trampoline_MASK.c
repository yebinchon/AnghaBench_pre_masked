
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

void
FUNC_5(vm_paddr_t *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6;
 bool VAR_7;

 VAR_7 = 0;
 for (VAR_6 = *VAR_5; VAR_6 <= *VAR_5; VAR_6 -= 2) {





  if (VAR_4[VAR_6] >= FUNC_0(1) ||
      (FUNC_4(VAR_4[VAR_6 + 1]) - FUNC_3(VAR_4[VAR_6])) <
      FUNC_3(VAR_1))
   continue;

  VAR_7 = 1;




  if (VAR_4[VAR_6 + 1] < FUNC_0(1)) {
   VAR_2 = FUNC_4(VAR_4[VAR_6 + 1]);
   if ((VAR_4[VAR_6 + 1] - VAR_2) < VAR_1)
    VAR_2 -= FUNC_3(VAR_1);
   VAR_4[VAR_6 + 1] = VAR_2;
  } else {
   VAR_2 = FUNC_3(VAR_4[VAR_6]);
   VAR_4[VAR_6] = VAR_2 + FUNC_3(VAR_1);
  }
  if (VAR_4[VAR_6] == VAR_4[VAR_6 + 1] && *VAR_5 != 0) {
   FUNC_1(&VAR_4[VAR_6], &VAR_4[VAR_6 + 2],
       sizeof(*VAR_4) * (*VAR_5 - VAR_6 + 2));
   *VAR_5 -= 2;
  }
  break;
 }

 if (!VAR_7) {
  VAR_2 = VAR_0 * 1024 - VAR_1;
  if (VAR_3)
   FUNC_2(
"Cannot find enough space for the boot trampoline, placing it at %#x",
       VAR_2);
 }
}
