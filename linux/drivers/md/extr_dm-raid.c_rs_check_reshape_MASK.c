
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {scalar_t__ degraded; TYPE_1__* pers; } ;
struct raid_set {TYPE_2__* ti; struct mddev md; } ;
struct TYPE_4__ {char* error; } ;
struct TYPE_3__ {int check_reshape; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct raid_set*) ;
 scalar_t__ FUNC_1 (struct raid_set*) ;
 scalar_t__ FUNC_2 (struct raid_set*) ;
 scalar_t__ FUNC_3 (struct raid_set*) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;

__attribute__((used)) static int FUNC_5(struct raid_set *VAR_1)
{
 struct mddev *VAR_2 = &VAR_1->md;

 if (!VAR_2->pers || !VAR_2->pers->check_reshape)
  VAR_1->ti->error = "Reshape not supported";
 else if (VAR_2->degraded)
  VAR_1->ti->error = "Can't reshape degraded raid set";
 else if (FUNC_3(VAR_1))
  VAR_1->ti->error = "Convert request on recovering raid set prohibited";
 else if (FUNC_4(VAR_1))
  VAR_1->ti->error = "raid set already reshaping!";
 else if (!(FUNC_0(VAR_1) || FUNC_1(VAR_1) || FUNC_2(VAR_1)))
  VAR_1->ti->error = "Reshaping only supported for raid1/4/5/6/10";
 else
  return 0;

 return -VAR_0;
}
