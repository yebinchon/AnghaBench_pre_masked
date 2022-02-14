
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct page **VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;
 if (!VAR_0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (!VAR_0[VAR_2]) {
   FUNC_1("bm_free_pages tried to free a NULL pointer; i=%lu n=%lu\n",
     VAR_2, VAR_1);
   continue;
  }
  FUNC_0(VAR_0[VAR_2]);
  VAR_0[VAR_2] = ((void*)0);
 }
}
