
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct list_head {int dummy; } ;
typedef enum ttm_caching_state { ____Placeholder_ttm_caching_state } ttm_caching_state ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct list_head *VAR_0,
  int VAR_1, enum ttm_caching_state VAR_2,
  struct page **VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
  FUNC_1(&VAR_3[VAR_5]->lru);
  FUNC_0(VAR_3[VAR_5]);
 }
}
