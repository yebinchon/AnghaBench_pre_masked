
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {int current_address; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgprotval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (struct seq_file*,struct pg_state*,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_2, struct pg_state *VAR_3, pmd_t VAR_4,
      pgprotval_t VAR_5, unsigned long VAR_6)
{
 int VAR_7;
 pte_t *VAR_8;
 pgprotval_t VAR_9, VAR_10;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_3->current_address = FUNC_2(VAR_6 + VAR_7 * VAR_0);
  VAR_8 = FUNC_5(&VAR_4, VAR_3->current_address);
  VAR_9 = FUNC_4(*VAR_8);
  VAR_10 = FUNC_1(VAR_5, VAR_9);
  FUNC_3(VAR_2, VAR_3, FUNC_0(VAR_9), VAR_10, 5);
  FUNC_6(VAR_8);
 }
}
