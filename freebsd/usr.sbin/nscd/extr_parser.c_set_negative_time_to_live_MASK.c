
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_sec; } ;
struct TYPE_2__ {int max_lifetime; } ;
struct configuration_entry {TYPE_1__ negative_cache_params; } ;
struct configuration {int dummy; } ;


 int FUNC_0 (void (*) (struct configuration*,char const*,int)) ;
 int FUNC_1 (void (*) (struct configuration*,char const*,int)) ;
 int FUNC_2 (int) ;
 struct configuration_entry* FUNC_3 (struct configuration*,char const*) ;
 int FUNC_4 (int *,struct timeval*,int) ;
 int FUNC_5 (struct timeval*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct configuration *VAR_0,
 const char *VAR_1, int VAR_2)
{
 struct configuration_entry *VAR_3;
 struct timeval VAR_4;

 FUNC_0(FUNC_6);
 FUNC_2(VAR_2 > 0);
 FUNC_2(VAR_1 != ((void*)0));
 FUNC_5(&VAR_4, 0, sizeof(struct timeval));
 VAR_4.tv_sec = VAR_2;

 VAR_3 = FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_3 != ((void*)0));
 FUNC_4(&VAR_3->negative_cache_params.max_lifetime,
  &VAR_4, sizeof(struct timeval));

 FUNC_1(FUNC_6);
}
