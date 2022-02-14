
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
struct slb {int slbv; } ;
typedef scalar_t__ pmap_t ;


 uintptr_t VAR_0 ;
 int FUNC_0 (uintptr_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__,uintptr_t,int ) ;
 scalar_t__ VAR_3 ;
 struct slb* FUNC_2 (scalar_t__,scalar_t__) ;

uint64_t
FUNC_3(pmap_t VAR_4, vm_offset_t VAR_5)
{
 struct slb *VAR_6;


 if (VAR_4 == VAR_3)
  return (FUNC_0((uintptr_t)VAR_5 >> VAR_0));






 VAR_6 = FUNC_2(VAR_4, VAR_5);

 if (VAR_6 == ((void*)0))
  return (FUNC_1(VAR_4,
      (uintptr_t)VAR_5 >> VAR_0, 0));

 return ((VAR_6->slbv & VAR_1) >> VAR_2);
}
