
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef int vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct ucred {int dummy; } ;
struct TYPE_8__ {scalar_t__ size; void* handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (int *,void*) ;

__attribute__((used)) static vm_object_t
FUNC_8(void *VAR_6, vm_ooffset_t VAR_7, vm_prot_t VAR_8,
    vm_ooffset_t VAR_9, struct ucred *VAR_10)
{
 vm_object_t VAR_11, VAR_12;
 vm_pindex_t VAR_13;




 if (VAR_9 & VAR_2)
  return (((void*)0));

 VAR_13 = FUNC_0(VAR_9 + VAR_2 + VAR_7);

 if (VAR_6 != ((void*)0)) {
  FUNC_2(&VAR_4);



  VAR_12 = ((void*)0);
  VAR_11 = FUNC_7(&VAR_5, VAR_6);
  if (VAR_11 == ((void*)0)) {



   FUNC_3(&VAR_4);
   VAR_12 = FUNC_4(VAR_0, VAR_13);
   FUNC_2(&VAR_4);
   VAR_11 = FUNC_7(&VAR_5,
       VAR_6);
   if (VAR_11 != ((void*)0)) {




    if (VAR_13 > VAR_11->size)
     VAR_11->size = VAR_13;
   } else {
    VAR_11 = VAR_12;
    VAR_12 = ((void*)0);
    VAR_11->handle = VAR_6;
    FUNC_6(VAR_11, VAR_1);
    FUNC_1(&VAR_5,
        VAR_11, VAR_3);
   }
  } else {
   if (VAR_13 > VAR_11->size)
    VAR_11->size = VAR_13;
  }
  FUNC_3(&VAR_4);
  FUNC_5(VAR_12);
 } else {
  VAR_11 = FUNC_4(VAR_0, VAR_13);
  FUNC_6(VAR_11, VAR_1);
 }

 return (VAR_11);
}
