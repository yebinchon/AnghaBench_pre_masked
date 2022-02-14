
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pool_c {struct pool* pool; } ;
struct pool {int pmd; int pool_md; int md_dev; } ;
struct dm_target {struct pool_c* private; } ;
typedef scalar_t__ dm_block_t ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct pool*) ;
 int FUNC_8 (struct pool*,char*,int) ;
 int FUNC_9 (struct pool*,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct dm_target *VAR_3, bool *VAR_4)
{
 int VAR_5;
 struct pool_c *VAR_6 = VAR_3->private;
 struct pool *VAR_7 = VAR_6->pool;
 dm_block_t VAR_8, VAR_9;

 *VAR_4 = 0;

 VAR_8 = FUNC_6(VAR_7->md_dev);

 VAR_5 = FUNC_3(VAR_7->pmd, &VAR_9);
 if (VAR_5) {
  FUNC_0("%s: failed to retrieve metadata device size",
        FUNC_2(VAR_7->pool_md));
  return VAR_5;
 }

 if (VAR_8 < VAR_9) {
  FUNC_0("%s: metadata device (%llu blocks) too small: expected %llu",
        FUNC_2(VAR_7->pool_md),
        VAR_8, VAR_9);
  return -VAR_0;

 } else if (VAR_8 > VAR_9) {
  if (FUNC_4(VAR_7->pmd)) {
   FUNC_0("%s: unable to grow the metadata device until repaired.",
         FUNC_2(VAR_7->pool_md));
   return 0;
  }

  FUNC_10(VAR_7->md_dev);
  FUNC_1("%s: growing the metadata device from %llu to %llu blocks",
         FUNC_2(VAR_7->pool_md),
         VAR_9, VAR_8);

  if (FUNC_7(VAR_7) == VAR_1)
   FUNC_9(VAR_7, VAR_2);

  VAR_5 = FUNC_5(VAR_7->pmd, VAR_8);
  if (VAR_5) {
   FUNC_8(VAR_7, "dm_pool_resize_metadata_dev", VAR_5);
   return VAR_5;
  }

  *VAR_4 = 1;
 }

 return 0;
}
