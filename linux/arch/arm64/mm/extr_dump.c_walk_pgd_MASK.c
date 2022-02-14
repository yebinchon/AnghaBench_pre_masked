
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_state {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pgd_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_2 (struct pg_state*,unsigned long,int,int ) ;
 unsigned long FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int * FUNC_6 (struct mm_struct*,unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct pg_state*,int *,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct pg_state *VAR_1, struct mm_struct *VAR_2,
       unsigned long VAR_3)
{
 unsigned long VAR_4 = (VAR_3 < VAR_0) ? VAR_0 : 0;
 unsigned long VAR_5, VAR_6 = VAR_3;
 pgd_t *VAR_7 = FUNC_6(VAR_2, VAR_3);

 do {
  pgd_t VAR_8 = FUNC_1(*VAR_7);
  VAR_5 = FUNC_3(VAR_6, VAR_4);

  if (FUNC_5(VAR_8)) {
   FUNC_2(VAR_1, VAR_6, 1, FUNC_7(VAR_8));
  } else {
   FUNC_0(FUNC_4(VAR_8));
   FUNC_8(VAR_1, VAR_7, VAR_6, VAR_5);
  }
 } while (VAR_7++, VAR_6 = VAR_5, VAR_6 != VAR_4);
}
