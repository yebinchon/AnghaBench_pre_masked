
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
typedef int uint ;
struct TYPE_2__ {int rmid; int mon_data_kn; int crdtgrp_list; struct rdtgroup* parent; } ;
struct rdtgroup {scalar_t__ mode; int type; struct kernfs_node* kn; TYPE_1__ mon; } ;
struct kernfs_node {int dummy; } ;
typedef enum rdt_group_type { ____Placeholder_rdt_group_type } rdt_group_type ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct kernfs_node*) ;
 int FUNC_3 (struct kernfs_node*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct kernfs_node*) ;
 struct kernfs_node* FUNC_7 (struct kernfs_node*,char const*,int ,struct rdtgroup*) ;
 int FUNC_8 (struct kernfs_node*) ;
 int FUNC_9 (struct kernfs_node*) ;
 int FUNC_10 (struct rdtgroup*) ;
 struct rdtgroup* FUNC_11 (int,int ) ;
 int FUNC_12 (struct kernfs_node*,struct rdtgroup*,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 scalar_t__ VAR_9 ;
 int FUNC_15 (struct kernfs_node*,int) ;
 struct rdtgroup* FUNC_16 (struct kernfs_node*) ;
 int FUNC_17 (struct kernfs_node*) ;
 int FUNC_18 (struct kernfs_node*) ;

__attribute__((used)) static int FUNC_19(struct kernfs_node *VAR_10,
        struct kernfs_node *VAR_11,
        const char *VAR_12, umode_t VAR_13,
        enum rdt_group_type VAR_14, struct rdtgroup **VAR_15)
{
 struct rdtgroup *VAR_16, *VAR_17;
 struct kernfs_node *VAR_18;
 uint VAR_19 = 0;
 int VAR_20;

 VAR_16 = FUNC_16(VAR_11);
 FUNC_13();
 if (!VAR_16) {
  VAR_20 = -VAR_1;
  FUNC_14("Directory was removed\n");
  goto out_unlock;
 }

 if (VAR_14 == VAR_4 &&
     (VAR_16->mode == VAR_6 ||
      VAR_16->mode == VAR_5)) {
  VAR_20 = -VAR_0;
  FUNC_14("Pseudo-locking in progress\n");
  goto out_unlock;
 }


 VAR_17 = FUNC_11(sizeof(*VAR_17), VAR_3);
 if (!VAR_17) {
  VAR_20 = -VAR_2;
  FUNC_14("Kernel out of memory\n");
  goto out_unlock;
 }
 *VAR_15 = VAR_17;
 VAR_17->mon.parent = VAR_16;
 VAR_17->type = VAR_14;
 FUNC_1(&VAR_17->mon.crdtgrp_list);


 VAR_18 = FUNC_7(VAR_10, VAR_12, VAR_13, VAR_17);
 if (FUNC_2(VAR_18)) {
  VAR_20 = FUNC_3(VAR_18);
  FUNC_14("kernfs create error\n");
  goto out_free_rgrp;
 }
 VAR_17->kn = VAR_18;







 FUNC_8(VAR_18);

 VAR_20 = FUNC_17(VAR_18);
 if (VAR_20) {
  FUNC_14("kernfs perm error\n");
  goto out_destroy;
 }

 VAR_19 = VAR_7 | FUNC_0(VAR_8 + VAR_14);
 VAR_20 = FUNC_15(VAR_18, VAR_19);
 if (VAR_20) {
  FUNC_14("kernfs fill error\n");
  goto out_destroy;
 }

 if (VAR_9) {
  VAR_20 = FUNC_4();
  if (VAR_20 < 0) {
   FUNC_14("Out of RMIDs\n");
   goto out_destroy;
  }
  VAR_17->mon.rmid = VAR_20;

  VAR_20 = FUNC_12(VAR_18, VAR_17, &VAR_17->mon.mon_data_kn);
  if (VAR_20) {
   FUNC_14("kernfs subdir error\n");
   goto out_idfree;
  }
 }
 FUNC_6(VAR_18);




 return 0;

out_idfree:
 FUNC_5(VAR_17->mon.rmid);
out_destroy:
 FUNC_9(VAR_17->kn);
out_free_rgrp:
 FUNC_10(VAR_17);
out_unlock:
 FUNC_18(VAR_11);
 return VAR_20;
}
