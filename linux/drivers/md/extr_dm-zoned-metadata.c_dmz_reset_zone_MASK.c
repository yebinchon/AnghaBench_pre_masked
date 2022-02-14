
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {struct dmz_dev* dev; } ;
struct dmz_dev {int zone_nr_sectors; int bdev; } ;
struct dm_zone {scalar_t__ wp_block; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct dmz_dev*,char*,int ,int) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_4 (struct dm_zone*) ;
 scalar_t__ FUNC_5 (struct dm_zone*) ;
 scalar_t__ FUNC_6 (struct dm_zone*) ;
 scalar_t__ FUNC_7 (struct dm_zone*) ;
 scalar_t__ FUNC_8 (struct dm_zone*) ;
 int FUNC_9 (struct dmz_metadata*,struct dm_zone*) ;

__attribute__((used)) static int FUNC_10(struct dmz_metadata *VAR_2, struct dm_zone *VAR_3)
{
 int VAR_4;





 if (FUNC_5(VAR_3) ||
     FUNC_6(VAR_3) ||
     FUNC_7(VAR_3))
  return 0;

 if (!FUNC_4(VAR_3) || FUNC_8(VAR_3)) {
  struct dmz_dev *VAR_5 = VAR_2->dev;

  VAR_4 = FUNC_0(VAR_5->bdev,
      FUNC_9(VAR_2, VAR_3),
      VAR_5->zone_nr_sectors, VAR_1);
  if (VAR_4) {
   FUNC_2(VAR_5, "Reset zone %u failed %d",
        FUNC_3(VAR_2, VAR_3), VAR_4);
   return VAR_4;
  }
 }


 FUNC_1(VAR_0, &VAR_3->flags);
 VAR_3->wp_block = 0;

 return 0;
}
