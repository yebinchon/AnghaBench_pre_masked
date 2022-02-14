
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct kernfs_open_file* private; } ;
struct rftype {int (* seq_show ) (struct kernfs_open_file*,struct seq_file*,void*) ;} ;
struct kernfs_open_file {TYPE_1__* kn; } ;
struct TYPE_2__ {struct rftype* priv; } ;


 int FUNC_0 (struct kernfs_open_file*,struct seq_file*,void*) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct kernfs_open_file *VAR_2 = VAR_0->private;
 struct rftype *VAR_3 = VAR_2->kn->priv;

 if (VAR_3->seq_show)
  return VAR_3->seq_show(VAR_2, VAR_0, VAR_1);
 return 0;
}
