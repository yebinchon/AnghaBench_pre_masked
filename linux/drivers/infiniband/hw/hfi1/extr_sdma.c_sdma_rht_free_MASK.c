
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_rht_node {struct sdma_rht_node** map; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdma_rht_node*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, void *VAR_2)
{
 struct sdma_rht_node *VAR_3 = VAR_1;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_0(VAR_3->map[VAR_4]);

 FUNC_0(VAR_3);
}
