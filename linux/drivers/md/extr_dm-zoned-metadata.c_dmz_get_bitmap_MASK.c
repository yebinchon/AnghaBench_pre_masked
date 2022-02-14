
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmz_metadata {int nr_map_blocks; int zone_nr_bitmap_blocks; } ;
struct dmz_mblock {int dummy; } ;
struct dm_zone {int dummy; } ;
typedef int sector_t ;


 int VAR_0 ;
 struct dmz_mblock* FUNC_0 (struct dmz_metadata*,int) ;
 int FUNC_1 (struct dmz_metadata*,struct dm_zone*) ;

__attribute__((used)) static struct dmz_mblock *FUNC_2(struct dmz_metadata *VAR_1,
      struct dm_zone *VAR_2,
      sector_t VAR_3)
{
 sector_t VAR_4 = 1 + VAR_1->nr_map_blocks +
  (sector_t)(FUNC_1(VAR_1, VAR_2) * VAR_1->zone_nr_bitmap_blocks) +
  (VAR_3 >> VAR_0);

 return FUNC_0(VAR_1, VAR_4);
}
