
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int confidence_threshold; } ;
struct configuration_entry {TYPE_1__ negative_cache_params; } ;
struct configuration {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 struct configuration_entry* FUNC_3 (struct configuration*,char const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct configuration *VAR_1,
 const char *VAR_2, int VAR_3)
{
 struct configuration_entry *VAR_4;

 FUNC_0(VAR_0);
 FUNC_2(VAR_3 > 0);
 FUNC_2(VAR_2 != ((void*)0));
 VAR_4 = FUNC_3(VAR_1, VAR_2);
 FUNC_2(VAR_4 != ((void*)0));
 VAR_4->negative_cache_params.confidence_threshold = VAR_3;
 FUNC_1(VAR_0);
}
