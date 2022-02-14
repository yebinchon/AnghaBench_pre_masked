
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {unsigned long current_address; } ;
typedef int pud_t ;
typedef int pmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_1 (struct seq_file*,struct pg_state*) ;
 int FUNC_2 (struct seq_file*,struct pg_state*,unsigned int,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct seq_file*,struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(struct seq_file *VAR_8, struct pg_state *VAR_9,
      pud_t *VAR_10, unsigned long VAR_11)
{
 unsigned int VAR_12;
 pmd_t *VAR_13;
 int VAR_14;
 VAR_13 = FUNC_5(VAR_10, VAR_11);
 for (VAR_14 = 0; VAR_14 < VAR_2 && VAR_11 < VAR_7; VAR_14++, VAR_13++) {
  VAR_9->current_address = VAR_11;
  if (!FUNC_4(*VAR_13)) {
   if (FUNC_3(*VAR_13)) {
    VAR_12 = FUNC_6(*VAR_13) &
     (VAR_5 |
      VAR_4);
    FUNC_2(VAR_8, VAR_9, VAR_12, 3);
   } else
    FUNC_8(VAR_8, VAR_9, VAR_13, VAR_11);
  } else
   FUNC_2(VAR_8, VAR_9, VAR_3, 3);
  VAR_11 += VAR_1;
 }
}
