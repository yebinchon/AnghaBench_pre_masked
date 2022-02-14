
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_paddr_t ;
typedef int vm_memattr_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ mr_start; scalar_t__ mr_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int VAR_4 ;





 TYPE_1__* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static __inline uint32_t
FUNC_0(vm_paddr_t VAR_7, vm_memattr_t VAR_8)
{
 uint32_t VAR_9;
 int VAR_10;

 if (VAR_8 != VAR_4) {
  switch (VAR_8) {
  case 131:
   return (VAR_1 | VAR_0);
  case 133:
   return (VAR_2);
  case 129:
  case 130:
  case 132:
   return (VAR_1);
  case 128:
   return (VAR_3 | VAR_2);
  }
 }





 VAR_9 = VAR_1 | VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  if ((VAR_7 >= VAR_5[VAR_10].mr_start) &&
      (VAR_7 < (VAR_5[VAR_10].mr_start + VAR_5[VAR_10].mr_size))) {
   VAR_9 = VAR_2;
   break;
  }
 }

 return VAR_9;
}
