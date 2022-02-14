
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_rht_map_elem {unsigned int ctr; unsigned int mask; struct sdma_engine** sde; } ;
struct sdma_engine {int dummy; } ;


 int FUNC_0 (struct sdma_engine**,struct sdma_engine**,unsigned int) ;
 unsigned int FUNC_1 (int) ;
 int FUNC_2 (struct sdma_rht_map_elem*) ;

__attribute__((used)) static void FUNC_3(struct sdma_rht_map_elem *VAR_0,
     struct sdma_engine *VAR_1)
{
 unsigned int VAR_2, VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_0->ctr; VAR_2++) {
  if (VAR_0->sde[VAR_2] == VAR_1) {
   FUNC_0(&VAR_0->sde[VAR_2], &VAR_0->sde[VAR_2 + 1],
    (VAR_0->ctr - VAR_2 - 1) * sizeof(VAR_0->sde[0]));
   VAR_0->ctr--;
   VAR_3 = FUNC_1(VAR_0->ctr ? : 1);
   VAR_0->mask = VAR_3 - 1;
   FUNC_2(VAR_0);
   break;
  }
 }
}
