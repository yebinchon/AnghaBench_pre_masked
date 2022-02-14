
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {scalar_t__ chunk_sectors; } ;
struct mddev {scalar_t__ array_sectors; scalar_t__ dev_sectors; scalar_t__ recovery_cp; scalar_t__ resync_max_sectors; int recovery; scalar_t__ bitmap; scalar_t__ external_size; int raid_disks; struct r5conf* private; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int ,int ) ;
 int FUNC_1 (struct mddev*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct r5conf*) ;
 scalar_t__ FUNC_3 (struct r5conf*) ;
 scalar_t__ FUNC_4 (struct mddev*,scalar_t__,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct mddev *VAR_2, sector_t VAR_3)
{







 sector_t VAR_4;
 struct r5conf *VAR_5 = VAR_2->private;

 if (FUNC_2(VAR_5) || FUNC_3(VAR_5))
  return -VAR_0;
 VAR_3 &= ~((sector_t)VAR_5->chunk_sectors - 1);
 VAR_4 = FUNC_4(VAR_2, VAR_3, VAR_2->raid_disks);
 if (VAR_2->external_size &&
     VAR_2->array_sectors > VAR_4)
  return -VAR_0;
 if (VAR_2->bitmap) {
  int VAR_6 = FUNC_0(VAR_2->bitmap, VAR_3, 0, 0);
  if (VAR_6)
   return VAR_6;
 }
 FUNC_1(VAR_2, VAR_4);
 if (VAR_3 > VAR_2->dev_sectors &&
     VAR_2->recovery_cp > VAR_2->dev_sectors) {
  VAR_2->recovery_cp = VAR_2->dev_sectors;
  FUNC_5(VAR_1, &VAR_2->recovery);
 }
 VAR_2->dev_sectors = VAR_3;
 VAR_2->resync_max_sectors = VAR_3;
 return 0;
}
