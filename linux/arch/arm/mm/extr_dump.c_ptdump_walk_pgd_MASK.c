
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct ptdump_info {int base_addr; int mm; int markers; } ;
struct pg_state {int check_wx; int marker; struct seq_file* seq; } ;


 int FUNC_0 (struct pg_state*,int ,int ,int ,int *) ;
 int FUNC_1 (struct pg_state*,int ,int ) ;

void FUNC_2(struct seq_file *VAR_0, struct ptdump_info *VAR_1)
{
 struct pg_state VAR_2 = {
  .seq = VAR_0,
  .marker = VAR_1->markers,
  .check_wx = 0,
 };

 FUNC_1(&VAR_2, VAR_1->mm, VAR_1->base_addr);
 FUNC_0(&VAR_2, 0, 0, 0, ((void*)0));
}
