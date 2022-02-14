
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mddev {unsigned int raid_disks; int flags; scalar_t__ recovery_cp; void* layout; } ;
struct raid_set {unsigned int raid_disks; unsigned int raid10_copies; scalar_t__ rebuild_disks; TYPE_1__* dev; int raid_type; int data_offset; struct mddev md; } ;
struct md_rdev {int new_data_offset; scalar_t__ recovery_offset; int flags; scalar_t__ data_offset; } ;
typedef int sector_t ;
struct TYPE_2__ {struct md_rdev rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct raid_set*) ;
 int FUNC_1 (int ,int *) ;
 void* FUNC_2 (struct raid_set*,int ,unsigned int) ;
 scalar_t__ FUNC_3 (struct raid_set*) ;
 scalar_t__ FUNC_4 (struct raid_set*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (unsigned int,void*) ;

__attribute__((used)) static int FUNC_8(struct raid_set *VAR_7)
{
 struct mddev *VAR_8 = &VAR_7->md;
 struct md_rdev *VAR_9;
 unsigned int VAR_10 = VAR_8->raid_disks = VAR_7->raid_disks;
 sector_t VAR_11 = VAR_7->dev[0].rdev.data_offset ? 0 : VAR_7->data_offset;

 if (FUNC_5(VAR_7->raid_type)) {
  if (FUNC_3(VAR_7)) {

   FUNC_0(VAR_7);


   VAR_8->layout = FUNC_2(VAR_7, VAR_0,
           VAR_7->raid10_copies);
  } else if (FUNC_4(VAR_7))

   VAR_8->layout = FUNC_2(VAR_7, VAR_1,
           VAR_7->raid_disks);
  else
   return -VAR_2;

 }

 FUNC_1(VAR_5, &VAR_8->flags);
 VAR_8->recovery_cp = VAR_6;

 while (VAR_10--) {
  VAR_9 = &VAR_7->dev[VAR_10].rdev;

  if (FUNC_7(VAR_10, (void *) VAR_7->rebuild_disks)) {
   FUNC_1(VAR_4, &VAR_9->flags);
   FUNC_1(VAR_3, &VAR_9->flags);
   VAR_8->recovery_cp = VAR_9->recovery_offset = 0;

   FUNC_6(VAR_5, &VAR_8->flags);
  }

  VAR_9->new_data_offset = VAR_11;
 }

 return 0;
}
