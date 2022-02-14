
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {scalar_t__ delta_disks; scalar_t__ in_sync; scalar_t__ ro; int recovery; } ;
struct raid_set {int runtime_flags; struct mddev md; } ;
struct dm_target {struct raid_set* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct raid_set*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct mddev*) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (struct raid_set*) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct dm_target *VAR_3)
{
 struct raid_set *VAR_4 = VAR_3->private;
 struct mddev *VAR_5 = &VAR_4->md;

 if (FUNC_7(VAR_1, &VAR_4->runtime_flags)) {





  FUNC_0(VAR_4);
 }

 if (FUNC_6(VAR_2, &VAR_4->runtime_flags)) {

  if (VAR_5->delta_disks < 0)
   FUNC_5(VAR_4);

  FUNC_2(VAR_5);
  FUNC_1(VAR_0, &VAR_5->recovery);
  VAR_5->ro = 0;
  VAR_5->in_sync = 0;
  FUNC_3(VAR_5);
  FUNC_4(VAR_5);
 }
}
