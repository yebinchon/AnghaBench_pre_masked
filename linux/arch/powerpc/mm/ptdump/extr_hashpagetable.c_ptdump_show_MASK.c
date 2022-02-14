
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {int marker; int start_address; struct seq_file* seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pg_state*) ;
 int FUNC_1 (struct pg_state*) ;
 int FUNC_2 (struct pg_state*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_2, void *VAR_3)
{
 struct pg_state VAR_4 = {
  .seq = VAR_2,
  .start_address = VAR_0,
  .marker = VAR_1,
 };




 FUNC_0(&VAR_4);
 FUNC_1(&VAR_4);
 FUNC_2(&VAR_4);
 return 0;
}
