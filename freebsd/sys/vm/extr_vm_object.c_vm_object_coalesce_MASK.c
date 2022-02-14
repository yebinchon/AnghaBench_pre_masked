
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_pindex_t ;
typedef int vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
typedef int uintmax_t ;
typedef int boolean_t ;
struct TYPE_8__ {scalar_t__ type; int flags; int ref_count; scalar_t__ size; scalar_t__ charge; int * cred; int * backing_object; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,scalar_t__,scalar_t__,int ) ;

boolean_t
FUNC_9(vm_object_t VAR_7, vm_ooffset_t VAR_8,
    vm_size_t VAR_9, vm_size_t VAR_10, boolean_t VAR_11)
{
 vm_pindex_t VAR_12;

 if (VAR_7 == ((void*)0))
  return (VAR_6);
 FUNC_2(VAR_7);
 if ((VAR_7->type != VAR_1 &&
     VAR_7->type != VAR_2) ||
     (VAR_7->flags & VAR_3) != 0) {
  FUNC_3(VAR_7);
  return (VAR_0);
 }




 FUNC_7(VAR_7);






 if (VAR_7->backing_object != ((void*)0)) {
  FUNC_3(VAR_7);
  return (VAR_0);
 }

 VAR_9 >>= VAR_5;
 VAR_10 >>= VAR_5;
 VAR_12 = FUNC_1(VAR_8) + VAR_9;

 if (VAR_7->ref_count > 1 &&
     VAR_7->size != VAR_12 &&
     (VAR_7->flags & VAR_4) == 0) {
  FUNC_3(VAR_7);
  return (VAR_0);
 }




 if (VAR_7->cred != ((void*)0)) {
  if (!VAR_11 && !FUNC_6(FUNC_4(VAR_10),
      VAR_7->cred)) {
   FUNC_3(VAR_7);
   return (VAR_0);
  }
  VAR_7->charge += FUNC_4(VAR_10);
 }





 if (VAR_12 < VAR_7->size) {
  FUNC_8(VAR_7, VAR_12, VAR_12 +
      VAR_10, 0);
  if (VAR_7->type == VAR_2)
   FUNC_5(VAR_7,
          VAR_12, VAR_10);
 }




 if (VAR_12 + VAR_10 > VAR_7->size)
  VAR_7->size = VAR_12 + VAR_10;

 FUNC_3(VAR_7);
 return (VAR_6);
}
