
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_reclaim {TYPE_1__* dev; struct dmz_metadata* metadata; } ;
struct dmz_metadata {int dummy; } ;
struct dm_zone {unsigned int wp_block; } ;
typedef unsigned int sector_t ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int FUNC_2 (TYPE_1__*,char*,int ,unsigned long long,unsigned long long,unsigned int,int) ;
 int FUNC_3 (struct dmz_metadata*,struct dm_zone*) ;
 scalar_t__ FUNC_4 (struct dmz_metadata*,struct dm_zone*) ;

__attribute__((used)) static int FUNC_5(struct dmz_reclaim *VAR_2, struct dm_zone *VAR_3,
    sector_t VAR_4)
{
 struct dmz_metadata *VAR_5 = VAR_2->metadata;
 sector_t VAR_6 = VAR_3->wp_block;
 unsigned int VAR_7;
 int VAR_8;

 if (VAR_6 == VAR_4)
  return 0;

 if (VAR_6 > VAR_4)
  return -VAR_0;





 VAR_7 = VAR_4 - VAR_6;
 VAR_8 = FUNC_0(VAR_2->dev->bdev,
       FUNC_4(VAR_5, VAR_3) + FUNC_1(VAR_6),
       FUNC_1(VAR_7), VAR_1, 0);
 if (VAR_8) {
  FUNC_2(VAR_2->dev,
       "Align zone %u wp %llu to %llu (wp+%u) blocks failed %d",
       FUNC_3(VAR_5, VAR_3), (unsigned long long)VAR_6,
       (unsigned long long)VAR_4, VAR_7, VAR_8);
  return VAR_8;
 }

 VAR_3->wp_block = VAR_4;

 return 0;
}
