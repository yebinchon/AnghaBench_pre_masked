
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_reclaim {TYPE_1__* dev; struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dm_zone {unsigned int chunk; } ;
struct TYPE_2__ {int zone_nr_blocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dm_zone* FUNC_0 (struct dmz_metadata*,int ) ;
 int FUNC_1 (struct dmz_metadata*,struct dm_zone*,struct dm_zone*) ;
 int FUNC_2 (TYPE_1__*,char*,unsigned int,int ,int ,int ) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_4 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_5 (struct dmz_metadata*,struct dm_zone*,int ,int ) ;
 int FUNC_6 (struct dmz_metadata*) ;
 int FUNC_7 (struct dmz_metadata*) ;
 int FUNC_8 (struct dmz_metadata*,struct dm_zone*,unsigned int) ;
 int FUNC_9 (struct dmz_reclaim*,struct dm_zone*,struct dm_zone*) ;
 int FUNC_10 (struct dmz_metadata*) ;
 int FUNC_11 (struct dmz_metadata*) ;
 int FUNC_12 (struct dm_zone*) ;
 int FUNC_13 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_14 (struct dm_zone*) ;

__attribute__((used)) static int FUNC_15(struct dmz_reclaim *VAR_2, struct dm_zone *VAR_3)
{
 unsigned int VAR_4 = VAR_3->chunk;
 struct dm_zone *VAR_5 = ((void*)0);
 struct dmz_metadata *VAR_6 = VAR_2->metadata;
 int VAR_7;


 FUNC_7(VAR_6);
 VAR_5 = FUNC_0(VAR_6, VAR_0);
 FUNC_11(VAR_6);
 if (!VAR_5)
  return -VAR_1;

 FUNC_2(VAR_2->dev,
        "Chunk %u, move rnd zone %u (weight %u) to seq zone %u",
        VAR_4, FUNC_4(VAR_6, VAR_3), FUNC_14(VAR_3),
        FUNC_4(VAR_6, VAR_5));


 VAR_7 = FUNC_9(VAR_2, VAR_3, VAR_5);

 FUNC_6(VAR_6);

 if (VAR_7 == 0) {

  VAR_7 = FUNC_1(VAR_6, VAR_3, VAR_5);
 }
 if (VAR_7) {

  FUNC_7(VAR_6);
  FUNC_3(VAR_6, VAR_5);
  FUNC_11(VAR_6);
 } else {

  FUNC_5(VAR_6, VAR_3, 0, VAR_2->dev->zone_nr_blocks);
  FUNC_7(VAR_6);
  FUNC_13(VAR_6, VAR_3);
  FUNC_12(VAR_3);
  FUNC_3(VAR_6, VAR_3);
  FUNC_8(VAR_6, VAR_5, VAR_4);
  FUNC_11(VAR_6);
 }

 FUNC_10(VAR_6);

 return VAR_7;
}
