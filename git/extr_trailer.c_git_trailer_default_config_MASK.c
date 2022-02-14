
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int if_missing; int if_exists; int where; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char*,char const**) ;
 int FUNC_2 (char const*,char*) ;
 char* FUNC_3 (char const*,char) ;
 scalar_t__ FUNC_4 (int *,char const*) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 scalar_t__ FUNC_6 (int *,char const*) ;
 int FUNC_7 (int ,char const*,char const*) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static int FUNC_9(const char *VAR_2, const char *VAR_3, void *VAR_4)
{
 const char *VAR_5, *VAR_6;

 if (!FUNC_1(VAR_2, "trailer.", &VAR_5))
  return 0;

 VAR_6 = FUNC_3(VAR_5, '.');
 if (!VAR_6) {
  if (!FUNC_2(VAR_5, "where")) {
   if (FUNC_6(&VAR_0.where,
           VAR_3) < 0)
    FUNC_7(FUNC_0("unknown value '%s' for key '%s'"),
     VAR_3, VAR_2);
  } else if (!FUNC_2(VAR_5, "ifexists")) {
   if (FUNC_4(&VAR_0.if_exists,
        VAR_3) < 0)
    FUNC_7(FUNC_0("unknown value '%s' for key '%s'"),
     VAR_3, VAR_2);
  } else if (!FUNC_2(VAR_5, "ifmissing")) {
   if (FUNC_5(&VAR_0.if_missing,
         VAR_3) < 0)
    FUNC_7(FUNC_0("unknown value '%s' for key '%s'"),
     VAR_3, VAR_2);
  } else if (!FUNC_2(VAR_5, "separators")) {
   VAR_1 = FUNC_8(VAR_3);
  }
 }
 return 0;
}
