
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_target {int dev; struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dm_zone {scalar_t__ wp_block; struct dm_zone* bzone; } ;
struct bio {int dummy; } ;
typedef scalar_t__ sector_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 unsigned int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (int ,struct bio*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,char*,unsigned long long,int ,unsigned long long,unsigned int) ;
 int FUNC_5 (struct dmz_metadata*,struct dm_zone*) ;
 int FUNC_6 (struct dmz_metadata*,struct dm_zone*,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_7 (struct dm_zone*) ;
 scalar_t__ FUNC_8 (struct dm_zone*) ;

__attribute__((used)) static int FUNC_9(struct dmz_target *VAR_1, struct dm_zone *VAR_2,
         struct bio *VAR_3)
{
 struct dmz_metadata *VAR_4 = VAR_1->metadata;
 sector_t VAR_5 = FUNC_0(VAR_3);
 unsigned int VAR_6 = FUNC_1(VAR_3);
 sector_t VAR_7 = FUNC_3(VAR_1->dev, VAR_5);
 int VAR_8 = 0;


 if (!VAR_2)
  return 0;

 if (FUNC_7(VAR_2))
  return -VAR_0;

 FUNC_4(VAR_1->dev, "DISCARD chunk %llu -> zone %u, block %llu, %u blocks",
        (unsigned long long)FUNC_2(VAR_1->dev, VAR_3),
        FUNC_5(VAR_4, VAR_2),
        (unsigned long long)VAR_7, VAR_6);





 if (FUNC_8(VAR_2) || VAR_7 < VAR_2->wp_block)
  VAR_8 = FUNC_6(VAR_4, VAR_2, VAR_7, VAR_6);
 if (VAR_8 == 0 && VAR_2->bzone)
  VAR_8 = FUNC_6(VAR_4, VAR_2->bzone,
         VAR_7, VAR_6);
 return VAR_8;
}
