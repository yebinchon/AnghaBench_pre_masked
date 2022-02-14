
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {unsigned long current_address; } ;
typedef int pte_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_0 (struct seq_file*,struct pg_state*,unsigned int,int) ;
 int * FUNC_1 (int *,unsigned long) ;
 unsigned int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_6, struct pg_state *VAR_7,
      pmd_t *VAR_8, unsigned long VAR_9)
{
 unsigned int VAR_10;
 pte_t *VAR_11;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_1 && VAR_9 < VAR_5; VAR_12++) {
  VAR_7->current_address = VAR_9;
  VAR_11 = FUNC_1(VAR_8, VAR_9);
  VAR_10 = FUNC_2(*VAR_11) &
   (VAR_4 | VAR_2 | VAR_3);
  FUNC_0(VAR_6, VAR_7, VAR_10, 4);
  VAR_9 += VAR_0;
 }
}
