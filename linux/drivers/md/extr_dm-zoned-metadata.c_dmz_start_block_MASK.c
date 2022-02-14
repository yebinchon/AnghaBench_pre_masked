
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_metadata {TYPE_1__* dev; } ;
struct dm_zone {int dummy; } ;
typedef int sector_t ;
struct TYPE_2__ {int zone_nr_blocks_shift; } ;


 scalar_t__ FUNC_0 (struct dmz_metadata*,struct dm_zone*) ;

sector_t FUNC_1(struct dmz_metadata *VAR_0, struct dm_zone *VAR_1)
{
 return (sector_t)FUNC_0(VAR_0, VAR_1) << VAR_0->dev->zone_nr_blocks_shift;
}
