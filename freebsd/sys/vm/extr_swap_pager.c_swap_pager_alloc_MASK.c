
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct ucred {int dummy; } ;
struct TYPE_6__ {void* handle; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (void*,struct ucred*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int ,void*) ;

__attribute__((used)) static vm_object_t
FUNC_6(void *VAR_2, vm_ooffset_t VAR_3, vm_prot_t VAR_4,
    vm_ooffset_t VAR_5, struct ucred *VAR_6)
{
 vm_object_t VAR_7;

 if (VAR_2 != ((void*)0)) {






  FUNC_3(&VAR_1);
  VAR_7 = FUNC_5(FUNC_0(VAR_2), VAR_2);
  if (VAR_7 == ((void*)0)) {
   VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_3,
       VAR_5);
   if (VAR_7 != ((void*)0)) {
    FUNC_1(FUNC_0(VAR_7->handle),
        VAR_7, VAR_0);
   }
  }
  FUNC_4(&VAR_1);
 } else {
  VAR_7 = FUNC_2(VAR_2, VAR_6, VAR_3, VAR_5);
 }
 return (VAR_7);
}
