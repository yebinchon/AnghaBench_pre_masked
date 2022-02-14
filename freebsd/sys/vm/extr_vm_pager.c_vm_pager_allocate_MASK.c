
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_prot_t ;
typedef int vm_ooffset_t ;
typedef int * vm_object_t ;
struct ucred {int dummy; } ;
struct pagerops {int * (* pgo_alloc ) (void*,int ,int ,int ,struct ucred*) ;} ;
typedef size_t objtype_t ;


 struct pagerops** VAR_0 ;
 int * FUNC_0 (void*,int ,int ,int ,struct ucred*) ;

vm_object_t
FUNC_1(objtype_t VAR_1, void *VAR_2, vm_ooffset_t VAR_3,
    vm_prot_t VAR_4, vm_ooffset_t VAR_5, struct ucred *VAR_6)
{
 vm_object_t VAR_7;
 struct pagerops *VAR_8;

 VAR_8 = VAR_0[VAR_1];
 if (VAR_8)
  VAR_7 = (*VAR_8->pgo_alloc)(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else
  VAR_7 = ((void*)0);
 return (VAR_7);
}
