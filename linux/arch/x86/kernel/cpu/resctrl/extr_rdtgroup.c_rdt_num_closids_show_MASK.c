
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct rdt_resource {int num_closid; } ;
struct kernfs_open_file {TYPE_2__* kn; } ;
struct TYPE_4__ {TYPE_1__* parent; } ;
struct TYPE_3__ {struct rdt_resource* priv; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct kernfs_open_file *VAR_0,
    struct seq_file *VAR_1, void *VAR_2)
{
 struct rdt_resource *VAR_3 = VAR_0->kn->parent->priv;

 FUNC_0(VAR_1, "%d\n", VAR_3->num_closid);
 return 0;
}
