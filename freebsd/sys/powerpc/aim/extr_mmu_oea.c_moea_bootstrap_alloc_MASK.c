
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int u_int ;


 int FUNC_0 (char*) ;
 scalar_t__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

__attribute__((used)) static vm_offset_t
FUNC_3(vm_size_t VAR_2, u_int VAR_3)
{
 vm_offset_t VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_2 = FUNC_1(VAR_2);
 for (VAR_6 = 0; VAR_0[VAR_6 + 1] != 0; VAR_6 += 2) {
  if (VAR_3 != 0)
   VAR_4 = FUNC_2(VAR_0[VAR_6], VAR_3);
  else
   VAR_4 = VAR_0[VAR_6];
  VAR_5 = VAR_4 + VAR_2;

  if (VAR_4 < VAR_0[VAR_6] || VAR_5 > VAR_0[VAR_6 + 1])
   continue;

  if (VAR_4 == VAR_0[VAR_6]) {
   VAR_0[VAR_6] += VAR_2;
  } else if (VAR_5 == VAR_0[VAR_6 + 1]) {
   VAR_0[VAR_6 + 1] -= VAR_2;
  } else {
   for (VAR_7 = VAR_1 * 2; VAR_7 > VAR_6; VAR_7 -= 2) {
    VAR_0[VAR_7] = VAR_0[VAR_7 - 2];
    VAR_0[VAR_7 + 1] = VAR_0[VAR_7 - 1];
   }

   VAR_0[VAR_6 + 3] = VAR_0[VAR_6 + 1];
   VAR_0[VAR_6 + 1] = VAR_4;
   VAR_0[VAR_6 + 2] = VAR_5;
   VAR_1++;
  }

  return (VAR_4);
 }
 FUNC_0("moea_bootstrap_alloc: could not allocate memory");
}
