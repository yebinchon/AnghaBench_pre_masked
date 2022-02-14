
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
struct tte {int dummy; } ;
typedef scalar_t__ pmap_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__,struct tte*,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int (*) (scalar_t__,scalar_t__,struct tte*,scalar_t__)) ;
 struct tte* FUNC_8 (scalar_t__,scalar_t__) ;
 int VAR_2 ;

void
FUNC_9(pmap_t VAR_3, pmap_t VAR_4, vm_offset_t VAR_5,
    vm_size_t VAR_6, vm_offset_t VAR_7)
{
 struct tte *VAR_8;
 vm_offset_t VAR_9;

 if (VAR_5 != VAR_7)
  return;
 FUNC_3(&VAR_2);
 if (VAR_3 < VAR_4) {
  FUNC_0(VAR_3);
  FUNC_0(VAR_4);
 } else {
  FUNC_0(VAR_4);
  FUNC_0(VAR_3);
 }
 if (VAR_6 > VAR_1) {
  FUNC_7(VAR_4, VAR_3, VAR_7, VAR_7 + VAR_6,
      FUNC_2);
  FUNC_5(VAR_3);
 } else {
  for (VAR_9 = VAR_7; VAR_9 < VAR_7 + VAR_6; VAR_9 += VAR_0)
   if ((VAR_8 = FUNC_8(VAR_4, VAR_9)) != ((void*)0))
    FUNC_2(VAR_4, VAR_3, VAR_8, VAR_9);
  FUNC_6(VAR_3, VAR_7, VAR_7 + VAR_6 - 1);
 }
 FUNC_4(&VAR_2);
 FUNC_1(VAR_4);
 FUNC_1(VAR_3);
}
