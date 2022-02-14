
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pg_state*,unsigned long,int,int ) ;
 int * FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct pg_state *VAR_1, pmd_t *VAR_2, unsigned long VAR_3,
       unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_3;
 pte_t *VAR_6 = FUNC_2(VAR_2, VAR_3);

 do {
  FUNC_1(VAR_1, VAR_5, 4, FUNC_0(FUNC_3(*VAR_6)));
 } while (VAR_6++, VAR_5 += VAR_0, VAR_5 != VAR_4);
}
