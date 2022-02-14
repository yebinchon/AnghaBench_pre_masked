
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union aegis_block {int dummy; } aegis_block ;
struct aegis_state {int * blocks; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct aegis_state*) ;
 int FUNC_2 (struct aegis_state*,union aegis_block const*) ;
 int FUNC_3 (int *,union aegis_block const*) ;

__attribute__((used)) static void FUNC_4(struct aegis_state *VAR_0,
         const union aegis_block *VAR_1)
{
 if (FUNC_0()) {
  FUNC_2(VAR_0, VAR_1);
  return;
 }

 FUNC_1(VAR_0);
 FUNC_3(&VAR_0->blocks[0], VAR_1);
}
