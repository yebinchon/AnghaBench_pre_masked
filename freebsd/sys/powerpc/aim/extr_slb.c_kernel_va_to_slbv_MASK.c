
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;


 uintptr_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (uintptr_t) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int ,int ) ;

uint64_t
FUNC_3(vm_offset_t VAR_6)
{
 uint64_t VAR_7;


 VAR_7 = (FUNC_1((uintptr_t)VAR_6 >> VAR_0)) << VAR_4;




 if (VAR_5 && VAR_6 > VAR_1 && VAR_6 < VAR_2) {





  if (FUNC_2(FUNC_0(VAR_6), 0) == 0)
   VAR_7 |= VAR_3;
 }

 return (VAR_7);
}
