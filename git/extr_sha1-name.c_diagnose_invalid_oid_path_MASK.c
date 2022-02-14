
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct repository {int dummy; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (char*,char const*,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (struct repository*,struct object_id const*,char*,struct object_id*,unsigned short*) ;
 scalar_t__ FUNC_3 (int ) ;
 char* FUNC_4 (char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_5(struct repository *VAR_1,
          const char *VAR_2,
          const char *VAR_3,
          const struct object_id *VAR_4,
          const char *VAR_5,
          int VAR_6)
{
 struct object_id VAR_7;
 unsigned short VAR_8;

 if (!VAR_2)
  VAR_2 = "";

 if (FUNC_1(VAR_3))
  FUNC_0("Path '%s' exists on disk, but not in '%.*s'.",
      VAR_3, VAR_6, VAR_5);
 if (FUNC_3(VAR_0)) {
  char *VAR_9 = FUNC_4("%s%s", VAR_2, VAR_3);

  if (!FUNC_2(VAR_1, VAR_4, VAR_9, &VAR_7, &VAR_8)) {
   FUNC_0("Path '%s' exists, but not '%s'.\n"
       "Did you mean '%.*s:%s' aka '%.*s:./%s'?",
       VAR_9,
       VAR_3,
       VAR_6, VAR_5,
       VAR_9,
       VAR_6, VAR_5,
       VAR_3);
  }
  FUNC_0("Path '%s' does not exist in '%.*s'",
      VAR_3, VAR_6, VAR_5);
 }
}
