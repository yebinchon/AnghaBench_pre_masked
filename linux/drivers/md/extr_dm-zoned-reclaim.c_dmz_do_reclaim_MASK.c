
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_reclaim {int dev; struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dm_zone {scalar_t__ wp_block; struct dm_zone* bzone; } ;
typedef scalar_t__ sector_t ;


 scalar_t__ FUNC_0 (struct dm_zone*) ;
 int FUNC_1 (struct dm_zone*) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*,scalar_t__*) ;
 int FUNC_4 (struct dmz_metadata*) ;
 struct dm_zone* FUNC_5 (struct dmz_metadata*) ;
 int FUNC_6 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_7 (struct dm_zone*) ;
 int FUNC_8 (struct dmz_reclaim*,struct dm_zone*) ;
 int FUNC_9 (struct dmz_reclaim*,struct dm_zone*) ;
 int FUNC_10 (struct dmz_reclaim*,struct dm_zone*) ;
 int FUNC_11 (struct dmz_reclaim*,struct dm_zone*) ;
 int FUNC_12 (struct dm_zone*) ;
 int FUNC_13 (struct dm_zone*) ;
 unsigned long VAR_0 ;
 int FUNC_14 (unsigned long) ;

__attribute__((used)) static int FUNC_15(struct dmz_reclaim *VAR_1)
{
 struct dmz_metadata *VAR_2 = VAR_1->metadata;
 struct dm_zone *VAR_3;
 struct dm_zone *VAR_4;
 unsigned long VAR_5;
 int VAR_6;


 VAR_3 = FUNC_5(VAR_2);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_5 = VAR_0;

 if (FUNC_7(VAR_3)) {
  if (!FUNC_13(VAR_3)) {

   FUNC_9(VAR_1, VAR_3);
   VAR_6 = 0;
  } else {




   VAR_6 = FUNC_10(VAR_1, VAR_3);
  }
  VAR_4 = VAR_3;

 } else {
  struct dm_zone *VAR_7 = VAR_3->bzone;
  sector_t VAR_8 = 0;

  VAR_6 = FUNC_3(VAR_2, VAR_7, &VAR_8);
  if (VAR_6 < 0)
   goto out;

  if (VAR_6 == 0 || VAR_8 >= VAR_3->wp_block) {




   VAR_6 = FUNC_8(VAR_1, VAR_3);
   VAR_4 = VAR_7;
  } else {





   VAR_6 = FUNC_11(VAR_1, VAR_3);
   VAR_4 = VAR_3;
  }
 }
out:
 if (VAR_6) {
  FUNC_12(VAR_3);
  return VAR_6;
 }

 VAR_6 = FUNC_4(VAR_1->metadata);
 if (VAR_6) {
  FUNC_2(VAR_1->dev,
         "Metadata flush for zone %u failed, err %d\n",
         FUNC_6(VAR_2, VAR_4), VAR_6);
  return VAR_6;
 }

 FUNC_2(VAR_1->dev, "Reclaimed zone %u in %u ms",
        FUNC_6(VAR_2, VAR_4), FUNC_14(VAR_0 - VAR_5));
 return 0;
}
