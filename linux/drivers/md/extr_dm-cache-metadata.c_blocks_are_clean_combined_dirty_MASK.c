
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_metadata {int dummy; } ;
typedef scalar_t__ dm_cblock_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct dm_cache_metadata*,scalar_t__,int*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct dm_cache_metadata *VAR_0,
        dm_cblock_t VAR_1, dm_cblock_t VAR_2,
        bool *VAR_3)
{
 int VAR_4;
 *VAR_3 = 1;

 while (VAR_1 != VAR_2) {
  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_3);
  if (VAR_4) {
   FUNC_0("block_clean_combined_dirty failed");
   return VAR_4;
  }

  if (!*VAR_3) {
   FUNC_0("cache block %llu is dirty",
         (unsigned long long) FUNC_2(VAR_1));
   return 0;
  }

  VAR_1 = FUNC_3(FUNC_2(VAR_1) + 1);
 }

 return 0;
}
