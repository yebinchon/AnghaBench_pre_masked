
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
struct tte {int dummy; } ;
typedef int pmap_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,struct tte*,scalar_t__) ;
 int FUNC_3 (int ,int *,scalar_t__,scalar_t__,int (*) (int ,int *,struct tte*,scalar_t__)) ;
 struct tte* FUNC_4 (int ,scalar_t__) ;

void
FUNC_5(pmap_t VAR_2, vm_offset_t VAR_3, vm_offset_t VAR_4)
{
 vm_offset_t VAR_5;
 struct tte *VAR_6;

 FUNC_0(VAR_2);
 if (VAR_4 - VAR_3 > VAR_1)
  FUNC_3(VAR_2, ((void*)0), VAR_3, VAR_4, FUNC_2);
 else {
  for (VAR_5 = VAR_3; VAR_5 < VAR_4; VAR_5 += VAR_0)
   if ((VAR_6 = FUNC_4(VAR_2, VAR_5)) != ((void*)0))
    FUNC_2(VAR_2, ((void*)0), VAR_6, VAR_5);
 }
 FUNC_1(VAR_2);
}
