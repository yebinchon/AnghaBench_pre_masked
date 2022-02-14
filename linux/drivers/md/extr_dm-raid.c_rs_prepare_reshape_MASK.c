
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {scalar_t__ raid_disks; int degraded; int layout; int new_layout; } ;
struct raid_set {scalar_t__ raid_disks; scalar_t__ raid10_copies; int delta_disks; int runtime_flags; TYPE_1__* ti; struct mddev md; } ;
struct TYPE_2__ {char* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct raid_set*) ;
 int FUNC_3 (struct raid_set*,int ,int) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;
 scalar_t__ FUNC_5 (struct raid_set*) ;
 scalar_t__ FUNC_6 (struct raid_set*) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static int FUNC_8(struct raid_set *VAR_4)
{
 bool VAR_5;
 struct mddev *VAR_6 = &VAR_4->md;

 if (FUNC_5(VAR_4)) {
  if (VAR_4->raid_disks != VAR_6->raid_disks &&
      FUNC_0(VAR_6->layout) &&
      VAR_4->raid10_copies &&
      VAR_4->raid10_copies != FUNC_1(VAR_6->layout)) {






   if (VAR_4->raid_disks % VAR_4->raid10_copies) {
    VAR_4->ti->error = "Can't reshape raid10 mirror groups";
    return -VAR_1;
   }


   FUNC_2(VAR_4);
   VAR_6->layout = FUNC_3(VAR_4, VAR_0,
           VAR_4->raid10_copies);
   VAR_6->new_layout = VAR_6->layout;
   VAR_5 = 0;
  } else
   VAR_5 = 1;

 } else if (FUNC_6(VAR_4))
  VAR_5 = 1;

 else if (FUNC_4(VAR_4)) {
  if (VAR_4->delta_disks) {

   VAR_6->degraded = VAR_4->delta_disks < 0 ? -VAR_4->delta_disks : VAR_4->delta_disks;
   VAR_5 = 1;
  } else {

   VAR_6->raid_disks = VAR_4->raid_disks;
   VAR_5 = 0;
  }
 } else {
  VAR_4->ti->error = "Called with bogus raid type";
  return -VAR_1;
 }

 if (VAR_5) {
  FUNC_7(VAR_2, &VAR_4->runtime_flags);
  FUNC_7(VAR_3, &VAR_4->runtime_flags);
 } else if (VAR_6->raid_disks < VAR_4->raid_disks)

  FUNC_7(VAR_3, &VAR_4->runtime_flags);

 return 0;
}
