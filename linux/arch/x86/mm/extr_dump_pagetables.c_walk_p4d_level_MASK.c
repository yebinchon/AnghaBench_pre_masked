
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {int current_address; } ;
typedef int pgprotval_t ;
typedef int pgd_t ;
typedef int p4d_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct seq_file*,struct pg_state*,int *) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (struct seq_file*,struct pg_state*,int ,int ,int) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 void FUNC_12 (struct seq_file*,struct pg_state*,int ,int ,unsigned long) ;

__attribute__((used)) static void FUNC_13(struct seq_file *VAR_2, struct pg_state *VAR_3, pgd_t VAR_4,
      pgprotval_t VAR_5, unsigned long VAR_6)
{
 int VAR_7;
 p4d_t *VAR_8, *VAR_9;
 pgprotval_t VAR_10, VAR_11;

 if (VAR_1 == 1)
  return FUNC_12(VAR_2, VAR_3, FUNC_0(FUNC_11(VAR_4)), VAR_5, VAR_6);

 VAR_9 = VAR_8 = (p4d_t *)FUNC_10(VAR_4);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_3->current_address = FUNC_4(VAR_6 + VAR_7 * VAR_0);
  if (!FUNC_8(*VAR_8)) {
   VAR_10 = FUNC_6(*VAR_8);
   VAR_11 = FUNC_2(VAR_5, VAR_10);
   if (FUNC_7(*VAR_8) || !FUNC_9(*VAR_8)) {
    FUNC_5(VAR_2, VAR_3, FUNC_1(VAR_10), VAR_11, 2);
   } else if (!FUNC_3(VAR_2, VAR_3, VAR_9)) {
    FUNC_12(VAR_2, VAR_3, *VAR_8, VAR_11,
            VAR_6 + VAR_7 * VAR_0);
   }
  } else
   FUNC_5(VAR_2, VAR_3, FUNC_1(0), 0, 2);

  VAR_8++;
 }
}
