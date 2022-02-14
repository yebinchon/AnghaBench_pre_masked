
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
typedef int pud_t ;
typedef int pgd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pg_state*,unsigned long,int,int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (int *,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct pg_state*,int *,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_10(struct pg_state *VAR_0, pgd_t *VAR_1, unsigned long VAR_2,
       unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5 = VAR_2;
 pud_t *VAR_6 = FUNC_6(VAR_1, VAR_2);

 do {
  pud_t VAR_7 = FUNC_1(*VAR_6);
  VAR_4 = FUNC_3(VAR_5, VAR_3);

  if (FUNC_5(VAR_7) || FUNC_7(VAR_7)) {
   FUNC_2(VAR_0, VAR_5, 2, FUNC_8(VAR_7));
  } else {
   FUNC_0(FUNC_4(VAR_7));
   FUNC_9(VAR_0, VAR_6, VAR_5, VAR_4);
  }
 } while (VAR_6++, VAR_5 = VAR_4, VAR_5 != VAR_3);
}
