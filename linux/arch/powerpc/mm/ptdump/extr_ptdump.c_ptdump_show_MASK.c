
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pg_state {int start_address; int marker; struct seq_file* seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pg_state*,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pg_state*) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_3, void *VAR_4)
{
 struct pg_state VAR_5 = {
  .seq = VAR_3,
  .marker = VAR_2,
  .start_address = VAR_1,
 };







 FUNC_2(&VAR_5);
 FUNC_0(&VAR_5, 0, 0, 0);
 return 0;
}
