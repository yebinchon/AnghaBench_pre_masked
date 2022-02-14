
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct credential {int dummy; } ;
struct credential_cache_entry {struct credential item; } ;


 scalar_t__ FUNC_0 (struct credential const*,struct credential*) ;
 struct credential_cache_entry* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct credential_cache_entry *FUNC_1(const struct credential *VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  struct credential *VAR_4 = &VAR_0[VAR_3].item;
  if (FUNC_0(VAR_2, VAR_4))
   return &VAR_0[VAR_3];
 }
 return ((void*)0);
}
