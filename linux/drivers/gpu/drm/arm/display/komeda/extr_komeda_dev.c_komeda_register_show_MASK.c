
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct komeda_dev* private; } ;
struct komeda_dev {int n_pipelines; int * pipelines; TYPE_1__* funcs; } ;
struct TYPE_2__ {int (* dump_register ) (struct komeda_dev*,struct seq_file*) ;} ;


 int FUNC_0 (int ,struct seq_file*) ;
 int FUNC_1 (struct komeda_dev*,struct seq_file*) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_0, void *VAR_1)
{
 struct komeda_dev *VAR_2 = VAR_0->private;
 int VAR_3;

 if (VAR_2->funcs->dump_register)
  VAR_2->funcs->dump_register(VAR_2, VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2->n_pipelines; VAR_3++)
  FUNC_0(VAR_2->pipelines[VAR_3], VAR_0);

 return 0;
}
