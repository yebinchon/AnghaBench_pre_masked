
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pagerops {int (* pgo_init ) () ;} ;


 size_t FUNC_0 (struct pagerops**) ;
 struct pagerops** VAR_0 ;
 int FUNC_1 () ;

void
FUNC_2(void)
{
 struct pagerops **VAR_1;




 for (VAR_1 = VAR_0; VAR_1 < &VAR_0[FUNC_0(VAR_0)]; VAR_1++)
  if ((*VAR_1)->pgo_init != ((void*)0))
   (*(*VAR_1)->pgo_init)();
}
