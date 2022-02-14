
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {unsigned long current_address; } ;
typedef int pgd_t ;
typedef int p4d_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int FUNC_1 (struct seq_file*,struct pg_state*) ;
 int FUNC_2 (struct seq_file*,struct pg_state*,int ,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct seq_file *VAR_6, struct pg_state *VAR_7,
      pgd_t *VAR_8, unsigned long VAR_9)
{
 p4d_t *VAR_10;
 int VAR_11;
 VAR_10 = FUNC_4(VAR_8, VAR_9);
 for (VAR_11 = 0; VAR_11 < VAR_2 && VAR_9 < VAR_5; VAR_11++, VAR_10++) {
  VAR_7->current_address = VAR_9;
  if (!FUNC_3(*VAR_10))
   FUNC_6(VAR_6, VAR_7, VAR_10, VAR_9);
  else
   FUNC_2(VAR_6, VAR_7, VAR_3, 2);
  VAR_9 += VAR_0;
 }
}
