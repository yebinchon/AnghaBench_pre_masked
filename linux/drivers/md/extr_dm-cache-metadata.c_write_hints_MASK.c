
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int dummy; } ;
struct dm_cache_metadata {size_t policy_hint_size; int cache_blocks; scalar_t__ hint_root; int hint_info; int policy_version; int policy_name; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__*,int ,int ,struct dm_cache_policy*) ;
 size_t FUNC_2 (struct dm_cache_policy*) ;
 char* FUNC_3 (struct dm_cache_policy*) ;
 unsigned int* FUNC_4 (struct dm_cache_policy*) ;
 int FUNC_5 (int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,unsigned int const*,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_9(struct dm_cache_metadata *VAR_2, struct dm_cache_policy *VAR_3)
{
 int VAR_4;
 size_t VAR_5;
 const char *VAR_6 = FUNC_3(VAR_3);
 const unsigned *VAR_7 = FUNC_4(VAR_3);

 if (!VAR_6[0] ||
     (FUNC_7(VAR_6) > sizeof(VAR_2->policy_name) - 1))
  return -VAR_0;

 FUNC_8(VAR_2->policy_name, VAR_6, sizeof(VAR_2->policy_name));
 FUNC_6(VAR_2->policy_version, VAR_7, sizeof(VAR_2->policy_version));

 VAR_5 = FUNC_2(VAR_3);
 if (!VAR_5)
  return 0;
 VAR_2->policy_hint_size = VAR_5;

 if (VAR_2->hint_root) {
  VAR_4 = FUNC_0(&VAR_2->hint_info, VAR_2->hint_root);
  if (VAR_4)
   return VAR_4;
 }

 return FUNC_1(&VAR_2->hint_info, &VAR_2->hint_root,
       FUNC_5(VAR_2->cache_blocks),
       VAR_1, VAR_3);
}
