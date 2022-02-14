
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
typedef int pud_t ;
typedef int pgd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct pg_state *VAR_2, pgd_t *VAR_3, unsigned long VAR_4)
{
 pud_t *VAR_5 = FUNC_1(VAR_3, 0);
 unsigned long VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++, VAR_5++) {
  VAR_6 = VAR_4 + VAR_7 * VAR_1;
  if (!FUNC_0(*VAR_5))

   FUNC_2(VAR_2, VAR_5, VAR_6);
 }
}
