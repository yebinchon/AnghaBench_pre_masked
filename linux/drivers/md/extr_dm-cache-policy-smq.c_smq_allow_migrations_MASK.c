
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smq_policy {int migrations_allowed; } ;
struct dm_cache_policy {int dummy; } ;


 struct smq_policy* FUNC_0 (struct dm_cache_policy*) ;

__attribute__((used)) static void FUNC_1(struct dm_cache_policy *VAR_0, bool VAR_1)
{
 struct smq_policy *VAR_2 = FUNC_0(VAR_0);
 VAR_2->migrations_allowed = VAR_1;
}
