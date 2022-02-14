
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_page_t ;
struct vm_pgcache {int domain; } ;
struct vm_domain {int dummy; } ;


 struct vm_domain* FUNC_0 (int ) ;
 int FUNC_1 (struct vm_domain*) ;
 int FUNC_2 (struct vm_domain*) ;
 int FUNC_3 (struct vm_domain*,int) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0, void **VAR_1, int VAR_2)
{
 struct vm_domain *VAR_3;
 struct vm_pgcache *VAR_4;
 vm_page_t VAR_5;
 int VAR_6;

 VAR_4 = VAR_0;
 VAR_3 = FUNC_0(VAR_4->domain);
 FUNC_1(VAR_3);
 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  VAR_5 = (vm_page_t)VAR_1[VAR_6];
  FUNC_4(VAR_5, 0);
 }
 FUNC_2(VAR_3);
 FUNC_3(VAR_3, VAR_2);
}
