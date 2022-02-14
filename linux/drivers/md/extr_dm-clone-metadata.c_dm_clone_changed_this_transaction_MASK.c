
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_clone_metadata {int bitmap_lock; TYPE_1__* dmap; } ;
struct TYPE_2__ {scalar_t__ changed; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

bool FUNC_2(struct dm_clone_metadata *VAR_0)
{
 bool VAR_1;
 unsigned long VAR_2;

 FUNC_0(&VAR_0->bitmap_lock, VAR_2);
 VAR_1 = VAR_0->dmap[0].changed || VAR_0->dmap[1].changed;
 FUNC_1(&VAR_0->bitmap_lock, VAR_2);

 return VAR_1;
}
