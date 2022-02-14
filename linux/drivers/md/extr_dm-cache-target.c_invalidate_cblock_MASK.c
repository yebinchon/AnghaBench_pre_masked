
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache {int cmd; int policy; } ;
typedef int dm_cblock_t ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct cache*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct cache*,char*,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct cache *VAR_1, dm_cblock_t VAR_2)
{
 int VAR_3 = FUNC_5(VAR_1->policy, VAR_2);
 if (!VAR_3) {
  VAR_3 = FUNC_3(VAR_1->cmd, VAR_2);
  if (VAR_3) {
   FUNC_1("%s: invalidation failed; couldn't update on disk metadata",
        FUNC_2(VAR_1));
   FUNC_4(VAR_1, "dm_cache_remove_mapping", VAR_3);
  }

 } else if (VAR_3 == -VAR_0) {



  VAR_3 = 0;

 } else
  FUNC_0("%s: policy_invalidate_mapping failed", FUNC_2(VAR_1));

 return VAR_3;
}
