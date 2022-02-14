
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int policy; } ;
struct configuration_entry {TYPE_1__ negative_cache_params; } ;
struct configuration {int dummy; } ;
typedef enum cache_policy_t { ____Placeholder_cache_policy_t } cache_policy_t ;


 int FUNC_0 (void (*) (struct configuration*,char const*,int)) ;
 int FUNC_1 (void (*) (struct configuration*,char const*,int)) ;
 int FUNC_2 (int ) ;
 struct configuration_entry* FUNC_3 (struct configuration*,char const*) ;

__attribute__((used)) static void
FUNC_4(struct configuration *VAR_0,
 const char *VAR_1, enum cache_policy_t VAR_2)
{
 struct configuration_entry *VAR_3;

 FUNC_0(FUNC_4);
 FUNC_2(VAR_1 != ((void*)0));

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_3 != ((void*)0));
 VAR_3->negative_cache_params.policy = VAR_2;

 FUNC_1(FUNC_4);
}
