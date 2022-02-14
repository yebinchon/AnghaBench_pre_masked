
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_migration {int invalidate_oblock; int invalidate_cblock; struct bio* overwrite_bio; } ;
struct cache {int dummy; } ;
struct bio {int dummy; } ;
typedef int dm_oblock_t ;
typedef int dm_cblock_t ;


 int VAR_0 ;
 struct dm_cache_migration* FUNC_0 (struct cache*) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (struct dm_cache_migration*) ;

__attribute__((used)) static int FUNC_3(struct cache *VAR_1, dm_cblock_t VAR_2,
       dm_oblock_t VAR_3, struct bio *VAR_4)
{
 struct dm_cache_migration *VAR_5;

 if (!FUNC_1(VAR_1))
  return -VAR_0;

 VAR_5 = FUNC_0(VAR_1);

 VAR_5->overwrite_bio = VAR_4;
 VAR_5->invalidate_cblock = VAR_2;
 VAR_5->invalidate_oblock = VAR_3;

 return FUNC_2(VAR_5);
}
