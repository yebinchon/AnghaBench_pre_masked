
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int discard_root; int discard_info; } ;
typedef int dm_dblock_t ;


 int FUNC_0 (int *,int ,int ,int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct dm_cache_metadata *VAR_0, dm_dblock_t VAR_1)
{
 return FUNC_0(&VAR_0->discard_info, VAR_0->discard_root,
     FUNC_1(VAR_1), &VAR_0->discard_root);
}
