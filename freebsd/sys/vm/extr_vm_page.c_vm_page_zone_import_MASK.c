
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct vm_pgcache {int pool; int domain; } ;
struct vm_domain {int vmd_domain; } ;


 int VAR_0 ;
 struct vm_domain* FUNC_0 (int ) ;
 int FUNC_1 (struct vm_domain*,int ,int) ;
 int FUNC_2 (struct vm_domain*) ;
 int FUNC_3 (struct vm_domain*) ;
 int FUNC_4 (struct vm_domain*,int) ;
 int FUNC_5 (int,int ,int,int *) ;

__attribute__((used)) static int
FUNC_6(void *VAR_1, void **VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
 struct vm_domain *VAR_6;
 struct vm_pgcache *VAR_7;
 int VAR_8;

 VAR_7 = VAR_1;
 VAR_6 = FUNC_0(VAR_7->domain);

 if (VAR_3 == 1 || !FUNC_1(VAR_6, VAR_0, VAR_3))
  return (0);
 VAR_4 = VAR_6->vmd_domain;
 FUNC_2(VAR_6);
 VAR_8 = FUNC_5(VAR_4, VAR_7->pool, VAR_3,
     (vm_page_t *)VAR_2);
 FUNC_3(VAR_6);
 if (VAR_3 != VAR_8)
  FUNC_4(VAR_6, VAR_3 - VAR_8);

 return (VAR_8);
}
