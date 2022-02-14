
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {struct binder_transaction_log* private; } ;
struct binder_transaction_log {int * entry; scalar_t__ full; int cur; } ;


 unsigned int FUNC_0 (int *) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (struct seq_file*,int *) ;

int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct binder_transaction_log *VAR_2 = VAR_0->private;
 unsigned int VAR_3 = FUNC_1(&VAR_2->cur);
 unsigned int VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 VAR_4 = VAR_3 + 1;
 VAR_5 = VAR_4 < FUNC_0(VAR_2->entry) && !VAR_2->full ?
  0 : VAR_4 % FUNC_0(VAR_2->entry);
 if (VAR_4 > FUNC_0(VAR_2->entry) || VAR_2->full)
  VAR_4 = FUNC_0(VAR_2->entry);
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  unsigned int VAR_7 = VAR_5++ % FUNC_0(VAR_2->entry);

  FUNC_2(VAR_0, &VAR_2->entry[VAR_7]);
 }
 return 0;
}
