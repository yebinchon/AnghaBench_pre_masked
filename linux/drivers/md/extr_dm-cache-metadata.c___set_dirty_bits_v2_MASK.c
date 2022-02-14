
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int changed; int dirty_root; int dirty_info; int cache_blocks; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *,unsigned int,int ,unsigned long*) ;
 unsigned int FUNC_3 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct dm_cache_metadata *VAR_2, unsigned VAR_3, unsigned long *VAR_4)
{
 int VAR_5 = 0;


 if (VAR_3 != FUNC_3(VAR_2->cache_blocks)) {
  FUNC_0("dirty bitset is wrong size");
  return -VAR_0;
 }

 VAR_5 = FUNC_1(&VAR_2->dirty_info, VAR_2->dirty_root);
 if (VAR_5)
  return VAR_5;

 VAR_2->changed = 1;
 return FUNC_2(&VAR_2->dirty_info, &VAR_2->dirty_root, VAR_3, VAR_1, VAR_4);
}
