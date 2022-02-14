
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t rid; size_t domid; size_t evtid; } ;
union mon_data_bits {TYPE_1__ u; int priv; } ;
typedef size_t u32 ;
struct seq_file {struct kernfs_open_file* private; } ;
struct rmid_read {int val; } ;
struct rdtgroup {int dummy; } ;
struct rdt_resource {int mon_scale; } ;
struct rdt_domain {int dummy; } ;
struct kernfs_open_file {TYPE_2__* kn; } ;
struct TYPE_5__ {int priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rdt_domain*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rmid_read*,struct rdt_domain*,struct rdtgroup*,size_t,int) ;
 struct rdt_domain* FUNC_2 (struct rdt_resource*,size_t,int *) ;
 struct rdt_resource* VAR_3 ;
 struct rdtgroup* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct seq_file*,char*,int) ;
 int FUNC_6 (struct seq_file*,char*) ;

int FUNC_7(struct seq_file *VAR_4, void *VAR_5)
{
 struct kernfs_open_file *VAR_6 = VAR_4->private;
 u32 VAR_7, VAR_8, VAR_9;
 struct rdtgroup *VAR_10;
 struct rdt_resource *VAR_11;
 union mon_data_bits VAR_12;
 struct rdt_domain *VAR_13;
 struct rmid_read VAR_14;
 int VAR_15 = 0;

 VAR_10 = FUNC_3(VAR_6->kn);
 if (!VAR_10) {
  VAR_15 = -VAR_0;
  goto out;
 }

 VAR_12.priv = VAR_6->kn->priv;
 VAR_7 = VAR_12.u.rid;
 VAR_9 = VAR_12.u.domid;
 VAR_8 = VAR_12.u.evtid;

 VAR_11 = &VAR_3[VAR_7];
 VAR_13 = FUNC_2(VAR_11, VAR_9, ((void*)0));
 if (FUNC_0(VAR_13)) {
  VAR_15 = -VAR_0;
  goto out;
 }

 FUNC_1(&VAR_14, VAR_13, VAR_10, VAR_8, 0);

 if (VAR_14.val & VAR_1)
  FUNC_6(VAR_4, "Error\n");
 else if (VAR_14.val & VAR_2)
  FUNC_6(VAR_4, "Unavailable\n");
 else
  FUNC_5(VAR_4, "%llu\n", VAR_14.val * VAR_11->mon_scale);

out:
 FUNC_4(VAR_6->kn);
 return VAR_15;
}
