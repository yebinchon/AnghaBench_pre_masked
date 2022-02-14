
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct repository {int dummy; } ;
struct TYPE_2__ {scalar_t__ prefix; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 char* FUNC_2 (scalar_t__,int ,char const*) ;
 int FUNC_3 (char const*,char*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (scalar_t__) ;
 struct repository* VAR_1 ;

__attribute__((used)) static char *FUNC_5(struct repository *VAR_2, const char *VAR_3)
{
 if (!FUNC_3(VAR_3, "./") && !FUNC_3(VAR_3, "../"))
  return ((void*)0);

 if (VAR_2 != VAR_1 || !FUNC_1())
  FUNC_0("relative path syntax can't be used outside working tree.");


 return FUNC_2(VAR_0->prefix,
      VAR_0->prefix ? FUNC_4(VAR_0->prefix) : 0,
      VAR_3);
}
