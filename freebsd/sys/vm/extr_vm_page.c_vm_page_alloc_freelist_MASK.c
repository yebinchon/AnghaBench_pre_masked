
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * vm_page_t ;
struct vm_domainset_iter {int dummy; } ;


 scalar_t__ FUNC_0 (struct vm_domainset_iter*,int *,int*) ;
 int FUNC_1 (struct vm_domainset_iter*,int *,int ,int*,int*) ;
 int * FUNC_2 (int,int,int) ;

vm_page_t
FUNC_3(int VAR_0, int VAR_1)
{
 struct vm_domainset_iter VAR_2;
 vm_page_t VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2, ((void*)0), 0, &VAR_4, &VAR_1);
 do {
  VAR_3 = FUNC_2(VAR_4, VAR_0, VAR_1);
  if (VAR_3 != ((void*)0))
   break;
 } while (FUNC_0(&VAR_2, ((void*)0), &VAR_4) == 0);

 return (VAR_3);
}
