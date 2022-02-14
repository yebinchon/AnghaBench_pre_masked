
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





 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static __inline uint32_t
FUNC_0(vm_paddr_t VAR_9, vm_memattr_t VAR_10)
{
 uint32_t VAR_11;
 int VAR_12;

 if (VAR_10 != VAR_4) {
  switch (VAR_10) {
  case 131:
   return (VAR_1 | VAR_0);
  case 129:
  case 130:
  case 132:
   return (VAR_1);
  case 128:
   return (VAR_3 | VAR_2);
  case 133:
   return (VAR_2);
  }
 }





 VAR_11 = VAR_5;
 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  if ((VAR_9 >= VAR_7[VAR_12].mr_start) &&
      (VAR_9 < (VAR_7[VAR_12].mr_start +
       VAR_7[VAR_12].mr_size))) {
   VAR_11 = VAR_6;
   break;
  }
 }

 return (VAR_11);
}
