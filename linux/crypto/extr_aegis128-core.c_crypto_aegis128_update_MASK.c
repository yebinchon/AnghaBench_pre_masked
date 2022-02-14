
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union aegis_block {int dummy; } aegis_block ;
struct aegis_state {union aegis_block* blocks; } ;


 int VAR_0 ;
 int FUNC_0 (union aegis_block*,union aegis_block*,union aegis_block*) ;

__attribute__((used)) static void FUNC_1(struct aegis_state *VAR_1)
{
 union aegis_block VAR_2;
 unsigned int VAR_3;

 VAR_2 = VAR_1->blocks[VAR_0 - 1];
 for (VAR_3 = VAR_0 - 1; VAR_3 > 0; VAR_3--)
  FUNC_0(&VAR_1->blocks[VAR_3], &VAR_1->blocks[VAR_3 - 1],
        &VAR_1->blocks[VAR_3]);
 FUNC_0(&VAR_1->blocks[0], &VAR_2, &VAR_1->blocks[0]);
}
