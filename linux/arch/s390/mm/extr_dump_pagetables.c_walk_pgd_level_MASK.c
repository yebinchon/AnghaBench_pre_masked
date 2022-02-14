
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {unsigned long current_address; } ;
typedef int st ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct pg_state*,int ,int) ;
 int FUNC_2 (struct seq_file*,struct pg_state*,int ,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (unsigned long) ;
 int FUNC_5 (struct seq_file*,struct pg_state*,int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct seq_file *VAR_4)
{
 unsigned long VAR_5 = 0;
 struct pg_state VAR_6;
 pgd_t *VAR_7;
 int VAR_8;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 for (VAR_8 = 0; VAR_8 < VAR_1 && VAR_5 < VAR_3; VAR_8++) {
  VAR_6.current_address = VAR_5;
  VAR_7 = FUNC_4(VAR_5);
  if (!FUNC_3(*VAR_7))
   FUNC_5(VAR_4, &VAR_6, VAR_7, VAR_5);
  else
   FUNC_2(VAR_4, &VAR_6, VAR_2, 1);
  VAR_5 += VAR_0;
  FUNC_0();
 }

 VAR_6.current_address = VAR_3;
 FUNC_2(VAR_4, &VAR_6, 0, 0);
}
