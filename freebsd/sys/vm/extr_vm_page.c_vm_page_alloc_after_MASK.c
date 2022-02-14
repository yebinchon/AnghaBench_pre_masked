
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_pindex_t ;
typedef int * vm_page_t ;
typedef int vm_object_t ;
struct vm_domainset_iter {int dummy; } ;


 scalar_t__ FUNC_0 (struct vm_domainset_iter*,int ,int*) ;
 int FUNC_1 (struct vm_domainset_iter*,int ,int ,int*,int*) ;
 int * FUNC_2 (int ,int ,int,int,int *) ;

vm_page_t
FUNC_3(vm_object_t VAR_0, vm_pindex_t VAR_1,
    int VAR_2, vm_page_t VAR_3)
{
 struct vm_domainset_iter VAR_4;
 vm_page_t VAR_5;
 int VAR_6;

 FUNC_1(&VAR_4, VAR_0, VAR_1, &VAR_6, &VAR_2);
 do {
  VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_6, VAR_2,
      VAR_3);
  if (VAR_5 != ((void*)0))
   break;
 } while (FUNC_0(&VAR_4, VAR_0, &VAR_6) == 0);

 return (VAR_5);
}
