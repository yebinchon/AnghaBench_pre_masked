
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {int degraded; int level; int new_level; int raid_disks; int new_layout; int layout; unsigned int delta_disks; } ;
struct raid_set {int raid_disks; TYPE_1__* ti; struct mddev md; } ;
struct TYPE_2__ {char* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 unsigned int FUNC_4 (unsigned int,int) ;
 scalar_t__ FUNC_5 (struct raid_set*) ;

__attribute__((used)) static int FUNC_6(struct raid_set *VAR_7)
{
 struct mddev *VAR_8 = &VAR_7->md;
 unsigned int VAR_9;

 if (VAR_7->md.degraded) {
  VAR_7->ti->error = "Can't takeover degraded raid set";
  return -VAR_6;
 }

 if (FUNC_5(VAR_7)) {
  VAR_7->ti->error = "Can't takeover reshaping raid set";
  return -VAR_6;
 }

 switch (VAR_8->level) {
 case 0:

  if ((VAR_8->new_level == 1 || VAR_8->new_level == 5) &&
      VAR_8->raid_disks == 1)
   return 0;


  if (VAR_8->new_level == 10 &&
      !(VAR_7->raid_disks % VAR_8->raid_disks))
   return 0;


  if (FUNC_3(VAR_8->new_level, 4, 6) &&
      VAR_8->new_layout == VAR_2 &&
      VAR_8->raid_disks > 1)
   return 0;

  break;

 case 10:

  if (FUNC_0(VAR_8->layout))
   break;

  VAR_9 = FUNC_2(VAR_8->layout);


  if (VAR_8->new_level == 0) {

   if (VAR_9 > 1 &&
       !(VAR_8->raid_disks % VAR_9)) {
    VAR_8->raid_disks /= VAR_9;
    VAR_8->delta_disks = VAR_8->raid_disks;
    return 0;
   }


   if (VAR_9 == 1 &&
       FUNC_1(VAR_8->layout) > 1)
    return 0;

   break;
  }


  if (VAR_8->new_level == 1 &&
      FUNC_4(VAR_9, FUNC_1(VAR_8->layout)) == VAR_8->raid_disks)
   return 0;


  if (FUNC_3(VAR_8->new_level, 4, 5) &&
      VAR_8->raid_disks == 2)
   return 0;
  break;

 case 1:

  if (FUNC_3(VAR_8->new_level, 4, 5) &&
      VAR_8->raid_disks == 2) {
   VAR_8->degraded = 1;
   return 0;
  }


  if (VAR_8->new_level == 0 &&
      VAR_8->raid_disks == 1)
   return 0;


  if (VAR_8->new_level == 10)
   return 0;
  break;

 case 4:

  if (VAR_8->new_level == 0)
   return 0;


  if ((VAR_8->new_level == 1 || VAR_8->new_level == 5) &&
      VAR_8->raid_disks == 2)
   return 0;


  if (FUNC_3(VAR_8->new_level, 5, 6) &&
      VAR_8->layout == VAR_2)
   return 0;
  break;

 case 5:

  if (VAR_8->new_level == 0 &&
      VAR_8->layout == VAR_2)
   return 0;


  if (VAR_8->new_level == 4 &&
      VAR_8->layout == VAR_2)
   return 0;


  if ((VAR_8->new_level == 1 || VAR_8->new_level == 4 || VAR_8->new_level == 10) &&
      VAR_8->raid_disks == 2)
   return 0;


  if (VAR_8->new_level == 6 &&
      ((VAR_8->layout == VAR_2 && VAR_8->new_layout == VAR_2) ||
        FUNC_3(VAR_8->new_layout, VAR_1, VAR_4)))
   return 0;
  break;

 case 6:

  if (VAR_8->new_level == 0 &&
      VAR_8->layout == VAR_2)
   return 0;


  if (VAR_8->new_level == 4 &&
      VAR_8->layout == VAR_2)
   return 0;


  if (VAR_8->new_level == 5 &&
      ((VAR_8->layout == VAR_2 && VAR_8->new_layout == VAR_2) ||
       FUNC_3(VAR_8->new_layout, VAR_0, VAR_3)))
   return 0;

 default:
  break;
 }

 VAR_7->ti->error = "takeover not possible";
 return -VAR_5;
}
