
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_cache_policy {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*,int,unsigned long*) ;
 int FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct dm_cache_policy *VAR_1,
          const char *VAR_2, const char *VAR_3)
{
 unsigned long VAR_4;

 if (FUNC_1(VAR_3, 10, &VAR_4))
  return -VAR_0;

 if (!FUNC_2(VAR_2, "random_threshold") ||
     !FUNC_2(VAR_2, "sequential_threshold") ||
     !FUNC_2(VAR_2, "discard_promote_adjustment") ||
     !FUNC_2(VAR_2, "read_promote_adjustment") ||
     !FUNC_2(VAR_2, "write_promote_adjustment")) {
  FUNC_0("tunable '%s' no longer has any effect, mq policy is now an alias for smq", VAR_2);
  return 0;
 }

 return -VAR_0;
}
