
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_rht_map_elem {int ctr; int * sde; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct sdma_rht_map_elem *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->ctr ? : 1) - VAR_0->ctr; VAR_1++)
  VAR_0->sde[VAR_0->ctr + VAR_1] = VAR_0->sde[VAR_1];
}
