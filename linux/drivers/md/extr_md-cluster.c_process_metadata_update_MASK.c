
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int good_device_nr; TYPE_1__* thread; struct md_cluster_info* cluster_info; } ;
struct md_cluster_info {int state; int no_new_dev_lockres; } ;
struct cluster_msg {int raid_slot; } ;
struct TYPE_2__ {int wqueue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mddev*,int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct mddev *VAR_2, struct cluster_msg *VAR_3)
{
 int VAR_4 = 0;
 struct md_cluster_info *VAR_5 = VAR_2->cluster_info;
 VAR_2->good_device_nr = FUNC_1(VAR_3->raid_slot);

 FUNC_0(VAR_5->no_new_dev_lockres, VAR_0);
 FUNC_6(VAR_2->thread->wqueue,
     (VAR_4 = FUNC_3(VAR_2)) ||
      FUNC_5(VAR_1, &VAR_5->state));
 FUNC_2(VAR_2, VAR_2->good_device_nr);
 if (VAR_4)
  FUNC_4(VAR_2);
}
