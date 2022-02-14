
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
typedef int pgd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (unsigned long) ;
 int FUNC_2 (struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct pg_state *VAR_3)
{
 pgd_t *VAR_4 = FUNC_1(0UL);
 unsigned int VAR_5;
 unsigned long VAR_6;





 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++, VAR_4++) {
  VAR_6 = VAR_0 + VAR_5 * VAR_1;
  if (!FUNC_0(*VAR_4))

   FUNC_2(VAR_3, VAR_4, VAR_6);
 }
}
