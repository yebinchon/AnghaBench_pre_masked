
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int bitmap_lock; int region_map; struct dirty_map* current_dmap; scalar_t__ read_only; } ;
struct dirty_map {int changed; int dirty_words; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct dm_clone_metadata *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = 0;
 struct dirty_map *VAR_5;
 unsigned long VAR_6, VAR_7;

 VAR_6 = VAR_3 / VAR_0;

 FUNC_1(&VAR_2->bitmap_lock, VAR_7);

 if (VAR_2->read_only) {
  VAR_4 = -VAR_1;
  goto out;
 }

 VAR_5 = VAR_2->current_dmap;

 FUNC_0(VAR_6, VAR_5->dirty_words);
 FUNC_0(VAR_3, VAR_2->region_map);
 VAR_5->changed = 1;

out:
 FUNC_2(&VAR_2->bitmap_lock, VAR_7);

 return VAR_4;
}
