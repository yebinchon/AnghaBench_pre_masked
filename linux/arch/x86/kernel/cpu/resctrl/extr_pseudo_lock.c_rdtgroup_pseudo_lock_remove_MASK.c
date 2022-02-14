
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {scalar_t__ mode; struct pseudo_lock_region* plr; int closid; } ;
struct pseudo_lock_region {int minor; int debugfs_dir; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct pseudo_lock_region*) ;
 int FUNC_5 (struct rdtgroup*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;

void FUNC_7(struct rdtgroup *VAR_3)
{
 struct pseudo_lock_region *VAR_4 = VAR_3->plr;

 if (VAR_3->mode == VAR_0) {




  FUNC_1(VAR_3->closid);
  goto free;
 }

 FUNC_4(VAR_4);
 FUNC_2(VAR_3->plr->debugfs_dir);
 FUNC_3(VAR_1, FUNC_0(VAR_2, VAR_4->minor));
 FUNC_6(VAR_4->minor);

free:
 FUNC_5(VAR_3);
}
