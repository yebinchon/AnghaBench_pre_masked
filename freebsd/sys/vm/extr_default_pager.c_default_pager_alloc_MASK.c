
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_ooffset_t ;
typedef TYPE_1__* vm_object_t ;
struct ucred {int dummy; } ;
struct TYPE_4__ {scalar_t__ charge; struct ucred* cred; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ucred*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,struct ucred*) ;
 TYPE_1__* FUNC_5 (int ,int ) ;

__attribute__((used)) static vm_object_t
FUNC_6(void *VAR_1, vm_ooffset_t VAR_2, vm_prot_t VAR_3,
    vm_ooffset_t VAR_4, struct ucred *VAR_5)
{
 vm_object_t VAR_6;

 if (VAR_1 != ((void*)0))
  FUNC_2("default_pager_alloc: handle specified");
 if (VAR_5 != ((void*)0)) {
  if (!FUNC_4(VAR_2, VAR_5))
   return (((void*)0));
  FUNC_1(VAR_5);
 }
 VAR_6 = FUNC_5(VAR_0,
     FUNC_0(FUNC_3(VAR_4 + VAR_2)));
 if (VAR_5 != ((void*)0)) {
  VAR_6->cred = VAR_5;
  VAR_6->charge = VAR_2;
 }
 return (VAR_6);
}
