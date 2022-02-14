
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct mtx {int dummy; } ;


 int FUNC_0 (struct mtx*) ;
 int FUNC_1 (struct mtx*) ;
 struct mtx* FUNC_2 (int ) ;

void
FUNC_3(vm_page_t VAR_0, struct mtx **VAR_1)
{
 struct mtx *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (*VAR_1 == VAR_2)
  return;
 if (*VAR_1 != ((void*)0))
  FUNC_1(*VAR_1);
 *VAR_1 = VAR_2;
 FUNC_0(VAR_2);
}
