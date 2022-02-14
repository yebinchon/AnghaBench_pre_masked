
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; } ;


 int FUNC_0 (char*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_1 (char const**,char const*,char const*) ;
 int FUNC_2 (char const*,char const*,void*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,char const**) ;
 int FUNC_5 (TYPE_1__*,char*,char,char const*,...) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int FUNC_8(const char *VAR_1, const char *VAR_2, void *VAR_3)
{
 if (FUNC_6(VAR_1, "fetch.fsck.skiplist") == 0) {
  const char *VAR_4;

  if (FUNC_1(&VAR_4, VAR_1, VAR_2))
   return 1;
  FUNC_5(&VAR_0, "%cskiplist=%s",
   VAR_0.len ? ',' : '=', VAR_4);
  FUNC_0((char *)VAR_4);
  return 0;
 }

 if (FUNC_4(VAR_1, "fetch.fsck.", &VAR_1)) {
  if (FUNC_3(VAR_1, VAR_2))
   FUNC_5(&VAR_0, "%c%s=%s",
    VAR_0.len ? ',' : '=', VAR_1, VAR_2);
  else
   FUNC_7("Skipping unknown msg id '%s'", VAR_1);
  return 0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
