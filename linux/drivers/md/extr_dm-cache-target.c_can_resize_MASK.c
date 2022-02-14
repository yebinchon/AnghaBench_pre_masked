
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int cache_size; scalar_t__ sized; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct cache*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct cache*,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static bool FUNC_5(struct cache *VAR_0, dm_cblock_t VAR_1)
{
 if (FUNC_2(VAR_1) > FUNC_2(VAR_0->cache_size)) {
  if (VAR_0->sized) {
   FUNC_0("%s: unable to extend cache due to missing cache table reload",
         FUNC_1(VAR_0));
   return 0;
  }
 }




 while (FUNC_2(VAR_1) < FUNC_2(VAR_0->cache_size)) {
  VAR_1 = FUNC_4(FUNC_2(VAR_1) + 1);
  if (FUNC_3(VAR_0, VAR_1)) {
   FUNC_0("%s: unable to shrink cache; cache block %llu is dirty",
         FUNC_1(VAR_0),
         (unsigned long long) FUNC_2(VAR_1));
   return 0;
  }
 }

 return 1;
}
