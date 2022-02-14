
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dm_zone {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {scalar_t__ zone_nr_blocks; } ;


 int FUNC_0 (struct dmz_metadata*,struct dm_zone*,scalar_t__,scalar_t__,int) ;

int FUNC_1(struct dmz_metadata *VAR_0, struct dm_zone *VAR_1,
     sector_t *VAR_2)
{
 sector_t VAR_3 = *VAR_2;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_3,
        VAR_0->dev->zone_nr_blocks - VAR_3, 1);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_3 += VAR_4;
 *VAR_2 = VAR_3;

 return FUNC_0(VAR_0, VAR_1, VAR_3,
         VAR_0->dev->zone_nr_blocks - VAR_3, 0);
}
