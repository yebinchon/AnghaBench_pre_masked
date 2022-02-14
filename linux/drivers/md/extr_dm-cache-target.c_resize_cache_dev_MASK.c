
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int cmd; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct cache*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct cache*,char*,int) ;
 int FUNC_4 (struct cache*,int ) ;

__attribute__((used)) static int FUNC_5(struct cache *VAR_0, dm_cblock_t VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0->cmd, VAR_1);
 if (VAR_2) {
  FUNC_0("%s: could not resize cache metadata", FUNC_1(VAR_0));
  FUNC_3(VAR_0, "dm_cache_resize", VAR_2);
  return VAR_2;
 }

 FUNC_4(VAR_0, VAR_1);

 return 0;
}
