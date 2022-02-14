
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct pg_state*,unsigned long,int,int ,int *) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct pg_state *VAR_2, struct mm_struct *VAR_3,
   unsigned long VAR_4)
{
 pgd_t *VAR_5 = FUNC_2(VAR_3, 0UL);
 unsigned VAR_6;
 unsigned long VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++, VAR_5++) {
  VAR_7 = VAR_4 + VAR_6 * VAR_0;
  if (!FUNC_1(*VAR_5)) {
   FUNC_4(VAR_2, VAR_5, VAR_7);
  } else {
   FUNC_0(VAR_2, VAR_7, 1, FUNC_3(*VAR_5), ((void*)0));
  }
 }
}
