
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential_cache_entry {scalar_t__ expiration; } ;
struct credential {int dummy; } ;


 struct credential_cache_entry* FUNC_0 (struct credential const*) ;

__attribute__((used)) static void FUNC_1(const struct credential *VAR_0)
{
 struct credential_cache_entry *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  VAR_1->expiration = 0;
}
