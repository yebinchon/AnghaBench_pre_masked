
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {unsigned long start_address; } ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct pg_state*,unsigned long,int,int ) ;
 unsigned int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct pg_state *VAR_3)
{
 unsigned int VAR_4;
 unsigned long VAR_5 = VAR_3->start_address & VAR_0;
 pgd_t *VAR_6 = FUNC_4(VAR_5);





 for (VAR_4 = FUNC_1(VAR_5); VAR_4 < VAR_2; VAR_4++, VAR_6++, VAR_5 += VAR_1) {
  if (!FUNC_3(*VAR_6) && !FUNC_2(*VAR_6))

   FUNC_6(VAR_3, VAR_6, VAR_5);
  else
   FUNC_0(VAR_3, VAR_5, 1, FUNC_5(*VAR_6));
 }
}
