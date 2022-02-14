
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct rdtgroup {int closid; int rdtgroup_list; struct kernfs_node* kn; } ;
struct kernfs_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct kernfs_node*,struct kernfs_node*,char const*,int ,int ,struct rdtgroup**) ;
 int FUNC_5 (struct rdtgroup*) ;
 int FUNC_6 (struct kernfs_node*,int *,char*,int *) ;
 int VAR_1 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (struct rdtgroup*) ;
 int FUNC_9 (struct kernfs_node*) ;

__attribute__((used)) static int FUNC_10(struct kernfs_node *VAR_3,
       struct kernfs_node *VAR_4,
       const char *VAR_5, umode_t VAR_6)
{
 struct rdtgroup *VAR_7;
 struct kernfs_node *VAR_8;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_0,
    &VAR_7);
 if (VAR_10)
  return VAR_10;

 VAR_8 = VAR_7->kn;
 VAR_10 = FUNC_0();
 if (VAR_10 < 0) {
  FUNC_7("Out of CLOSIDs\n");
  goto out_common_fail;
 }
 VAR_9 = VAR_10;
 VAR_10 = 0;

 VAR_7->closid = VAR_9;
 VAR_10 = FUNC_8(VAR_7);
 if (VAR_10 < 0)
  goto out_id_free;

 FUNC_2(&VAR_7->rdtgroup_list, &VAR_1);

 if (VAR_2) {




  VAR_10 = FUNC_6(VAR_8, ((void*)0), "mon_groups", ((void*)0));
  if (VAR_10) {
   FUNC_7("kernfs subdir error\n");
   goto out_del_list;
  }
 }

 goto out_unlock;

out_del_list:
 FUNC_3(&VAR_7->rdtgroup_list);
out_id_free:
 FUNC_1(VAR_9);
out_common_fail:
 FUNC_5(VAR_7);
out_unlock:
 FUNC_9(VAR_4);
 return VAR_10;
}
