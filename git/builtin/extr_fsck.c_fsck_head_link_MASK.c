
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,...) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,char const*,...) ;
 scalar_t__ FUNC_3 (struct object_id*) ;
 char* FUNC_4 (char const*,int ,struct object_id*,int *) ;
 int FUNC_5 (char const*,char*) ;
 int VAR_2 ;
 int FUNC_6 (char const*,char const*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_7(const char *VAR_4,
     const char **VAR_5,
     struct object_id *VAR_6)
{
 int VAR_7 = 0;

 if (VAR_3)
  FUNC_2(VAR_2, FUNC_0("Checking %s link"), VAR_4);

 *VAR_5 = FUNC_4(VAR_4, 0, VAR_6, ((void*)0));
 if (!*VAR_5) {
  VAR_1 |= VAR_0;
  return FUNC_1(FUNC_0("invalid %s"), VAR_4);
 }
 if (!FUNC_6(*VAR_5, VAR_4))

  VAR_7 = 1;
 else if (!FUNC_5(*VAR_5, "refs/heads/")) {
  VAR_1 |= VAR_0;
  return FUNC_1(FUNC_0("%s points to something strange (%s)"),
        VAR_4, *VAR_5);
 }
 if (FUNC_3(VAR_6)) {
  if (VAR_7) {
   VAR_1 |= VAR_0;
   return FUNC_1(FUNC_0("%s: detached HEAD points at nothing"),
         VAR_4);
  }
  FUNC_2(VAR_2,
      FUNC_0("notice: %s points to an unborn branch (%s)"),
      VAR_4, *VAR_5 + 11);
 }
 return 0;
}
