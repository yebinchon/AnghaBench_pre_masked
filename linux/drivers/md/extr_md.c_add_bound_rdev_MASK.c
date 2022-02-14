
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {size_t major_version; int thread; int recovery; scalar_t__ degraded; int sb_flags; TYPE_1__* pers; } ;
struct md_rdev {int sysfs_state; int flags; struct mddev* mddev; } ;
struct TYPE_4__ {int (* validate_super ) (struct mddev*,struct md_rdev*) ;} ;
struct TYPE_3__ {int (* hot_add_disk ) (struct mddev*,struct md_rdev*) ;int hot_remove_disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct md_rdev*) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mddev*) ;
 int FUNC_4 (struct mddev*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct mddev*,struct md_rdev*) ;
 int FUNC_7 (struct mddev*,struct md_rdev*) ;
 TYPE_2__* VAR_4 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10(struct md_rdev *VAR_5)
{
 struct mddev *VAR_6 = VAR_5->mddev;
 int VAR_7 = 0;
 bool VAR_8 = FUNC_9(VAR_0, &VAR_5->flags);

 if (!VAR_6->pers->hot_remove_disk || VAR_8) {




  VAR_4[VAR_6->major_version].
   validate_super(VAR_6, VAR_5);
  if (VAR_8)
   FUNC_4(VAR_6);
  VAR_7 = VAR_6->pers->hot_add_disk(VAR_6, VAR_5);
  if (VAR_8)
   FUNC_3(VAR_6);
  if (VAR_7) {
   FUNC_0(VAR_5);
   return VAR_7;
  }
 }
 FUNC_8(VAR_5->sysfs_state);

 FUNC_5(VAR_3, &VAR_6->sb_flags);
 if (VAR_6->degraded)
  FUNC_5(VAR_2, &VAR_6->recovery);
 FUNC_5(VAR_1, &VAR_6->recovery);
 FUNC_1(VAR_6);
 FUNC_2(VAR_6->thread);
 return 0;
}
