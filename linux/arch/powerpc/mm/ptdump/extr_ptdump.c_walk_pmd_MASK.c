
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct pg_state*,unsigned long,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct pg_state *VAR_2, pud_t *VAR_3, unsigned long VAR_4)
{
 pmd_t *VAR_5 = FUNC_3(VAR_3, 0);
 unsigned long VAR_6;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++, VAR_5++) {
  VAR_6 = VAR_4 + VAR_7 * VAR_0;
  if (!FUNC_2(*VAR_5) && !FUNC_1(*VAR_5))

   FUNC_5(VAR_2, VAR_5, VAR_6);
  else
   FUNC_0(VAR_2, VAR_6, 3, FUNC_4(*VAR_5));
 }
}
