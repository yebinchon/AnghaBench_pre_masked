
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_reclaim {TYPE_1__* dev; struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dm_zone {int chunk; int wp_block; struct dm_zone* bzone; } ;
typedef int sector_t ;
struct TYPE_2__ {int zone_nr_blocks; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_2 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*,int ,int ) ;
 int FUNC_4 (struct dmz_metadata*) ;
 int FUNC_5 (struct dmz_metadata*) ;
 int FUNC_6 (struct dmz_metadata*,struct dm_zone*,struct dm_zone*,int ) ;
 int FUNC_7 (struct dmz_reclaim*,struct dm_zone*,struct dm_zone*) ;
 int FUNC_8 (struct dmz_metadata*) ;
 int FUNC_9 (struct dmz_metadata*) ;
 int FUNC_10 (struct dm_zone*) ;
 int FUNC_11 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_12 (struct dm_zone*) ;

__attribute__((used)) static int FUNC_13(struct dmz_reclaim *VAR_0, struct dm_zone *VAR_1)
{
 struct dm_zone *VAR_2 = VAR_1->bzone;
 sector_t VAR_3 = VAR_1->wp_block;
 struct dmz_metadata *VAR_4 = VAR_0->metadata;
 int VAR_5;

 FUNC_0(VAR_0->dev,
        "Chunk %u, move buf zone %u (weight %u) to data zone %u (weight %u)",
        VAR_1->chunk, FUNC_2(VAR_4, VAR_2), FUNC_12(VAR_2),
        FUNC_2(VAR_4, VAR_1), FUNC_12(VAR_1));


 VAR_5 = FUNC_7(VAR_0, VAR_2, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(VAR_4);


 VAR_5 = FUNC_6(VAR_4, VAR_2, VAR_1, VAR_3);
 if (VAR_5 == 0) {

  FUNC_3(VAR_4, VAR_2, 0, VAR_0->dev->zone_nr_blocks);
  FUNC_5(VAR_4);
  FUNC_11(VAR_4, VAR_2);
  FUNC_10(VAR_1);
  FUNC_1(VAR_4, VAR_2);
  FUNC_9(VAR_4);
 }

 FUNC_8(VAR_4);

 return VAR_5;
}
