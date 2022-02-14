
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_page_pool {int nfrees; int npages; } ;



__attribute__((used)) static void FUNC_0(struct ttm_page_pool *VAR_0,
  unsigned VAR_1)
{
 VAR_0->npages -= VAR_1;
 VAR_0->nfrees += VAR_1;
}
