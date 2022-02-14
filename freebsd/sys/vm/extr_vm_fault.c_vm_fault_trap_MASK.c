
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_offset_t ;
typedef scalar_t__ vm_map_t ;
struct TYPE_2__ {int p_osrel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;





 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 () ;
 int VAR_11 ;
 TYPE_1__* VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_15 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int ,int ,int,int *) ;

int
FUNC_8(vm_map_t VAR_16, vm_offset_t VAR_17, vm_prot_t VAR_18,
    int VAR_19, int *VAR_20, int *VAR_21)
{
 int VAR_22;

 FUNC_2(VAR_20 == ((void*)0) || VAR_21 != ((void*)0));




 VAR_22 = FUNC_7(VAR_16, FUNC_6(VAR_17), VAR_18, VAR_19,
     ((void*)0));
 FUNC_0(VAR_22 == VAR_2 || VAR_22 == 132 ||
     VAR_22 == 131 ||
     VAR_22 == 128 ||
     VAR_22 == 129 ||
     VAR_22 == 130,
     ("Unexpected Mach error %d from vm_fault()", VAR_22));




 if (VAR_22 != VAR_2 && VAR_20 != ((void*)0)) {
  switch (VAR_22) {
  case 132:
  case 131:
   *VAR_20 = VAR_9;
   *VAR_21 = VAR_7;
   break;
  case 128:
   *VAR_20 = VAR_8;
   *VAR_21 = VAR_1;
   break;
  case 130:
   *VAR_20 = VAR_8;
   *VAR_21 = VAR_0;
   break;
  case 129:
   if (VAR_15 == 0) {





    if (FUNC_3() == VAR_10 &&
        VAR_12->p_osrel >= VAR_5) {
     *VAR_20 = VAR_9;
     *VAR_21 = VAR_6;
    } else {
     *VAR_20 = VAR_8;
     *VAR_21 = VAR_11;
    }
   } else if (VAR_15 == 1) {

    *VAR_20 = VAR_8;
    *VAR_21 = VAR_11;
   } else {

    *VAR_20 = VAR_9;
    *VAR_21 = VAR_6;
   }
   break;
  default:
   FUNC_0(0, ("Unexpected Mach error %d from vm_fault()",
       VAR_22));
   break;
  }
 }
 return (VAR_22);
}
