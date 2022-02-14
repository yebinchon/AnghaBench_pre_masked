
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct pg_state*,unsigned long,int,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pg_state *VAR_2, pmd_t *VAR_3, unsigned long VAR_4)
{
 pte_t *VAR_5 = FUNC_1(VAR_3, 0);
 unsigned long VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_5++) {
  VAR_6 = VAR_4 + VAR_7 * VAR_0;
  FUNC_0(VAR_2, VAR_6, 4, FUNC_2(*VAR_5));

 }
}
