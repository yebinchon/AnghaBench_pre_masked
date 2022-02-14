
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_clone_metadata {int lock; int bitmap_lock; struct dirty_map* current_dmap; struct dirty_map* dmap; int bm; scalar_t__ fail_io; } ;
struct dirty_map {int changed; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dm_clone_metadata*,struct dirty_map*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct dm_clone_metadata *VAR_2)
{
 int VAR_3 = -VAR_1;
 unsigned long VAR_4;
 struct dirty_map *VAR_5, *VAR_6;

 FUNC_3(&VAR_2->lock);

 if (VAR_2->fail_io || FUNC_2(VAR_2->bm))
  goto out;


 VAR_5 = VAR_2->current_dmap;


 VAR_6 = (VAR_5 == &VAR_2->dmap[0]) ? &VAR_2->dmap[1] : &VAR_2->dmap[0];





 if (FUNC_0(VAR_6->changed)) {
  VAR_3 = -VAR_0;
  goto out;
 }


 FUNC_4(&VAR_2->bitmap_lock, VAR_4);
 VAR_2->current_dmap = VAR_6;
 FUNC_5(&VAR_2->bitmap_lock, VAR_4);





 VAR_3 = FUNC_1(VAR_2, VAR_5);
out:
 FUNC_6(&VAR_2->lock);

 return VAR_3;
}
