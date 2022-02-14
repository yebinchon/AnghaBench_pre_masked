
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct TYPE_6__ {int bw_gran; } ;
struct rdt_resource {TYPE_3__ membw; } ;
struct kernfs_open_file {TYPE_2__* kn; } ;
struct TYPE_5__ {TYPE_1__* parent; } ;
struct TYPE_4__ {struct rdt_resource* priv; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct kernfs_open_file *VAR_0,
        struct seq_file *VAR_1, void *VAR_2)
{
 struct rdt_resource *VAR_3 = VAR_0->kn->parent->priv;

 FUNC_0(VAR_1, "%u\n", VAR_3->membw.bw_gran);
 return 0;
}
