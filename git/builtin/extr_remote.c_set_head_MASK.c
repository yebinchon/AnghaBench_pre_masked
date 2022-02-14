
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct TYPE_4__ {int nr; TYPE_1__* items; } ;
struct ref_states {TYPE_2__ heads; } ;
struct option {int dummy; } ;
typedef int states ;
struct TYPE_3__ {char* string; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ,int *,int ) ;
 int FUNC_6 (int ,...) ;
 int FUNC_7 (int ,char*,char const*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct ref_states*) ;
 int FUNC_10 (char const*,struct ref_states*,int ) ;
 int FUNC_11 (struct ref_states*,int ,int) ;
 int FUNC_12 (int,char const**,int *,struct option*,int ,int ) ;
 int FUNC_13 (char*,char const*,char*) ;
 int FUNC_14 (int ) ;
 int VAR_4 ;
 int FUNC_15 (struct strbuf*,char*,char const*,...) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (int ,struct option*) ;
 char* FUNC_18 (char const*) ;

__attribute__((used)) static int FUNC_19(int VAR_5, const char **VAR_6)
{
 int VAR_7, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 struct strbuf VAR_11 = VAR_2, VAR_12 = VAR_2;
 char *VAR_13 = ((void*)0);

 struct option VAR_14[] = {
  FUNC_1('a', "auto", &VAR_8,
    FUNC_0("set refs/remotes/<name>/HEAD according to remote")),
  FUNC_1('d', "delete", &VAR_9,
    FUNC_0("delete refs/remotes/<name>/HEAD")),
  FUNC_2()
 };
 VAR_5 = FUNC_12(VAR_5, VAR_6, ((void*)0), VAR_14, VAR_3,
        0);
 if (VAR_5)
  FUNC_15(&VAR_11, "refs/remotes/%s/HEAD", VAR_6[0]);

 if (!VAR_8 && !VAR_9 && VAR_5 == 2) {
  VAR_13 = FUNC_18(VAR_6[1]);
 } else if (VAR_8 && !VAR_9 && VAR_5 == 1) {
  struct ref_states VAR_15;
  FUNC_11(&VAR_15, 0, sizeof(VAR_15));
  FUNC_10(VAR_6[0], &VAR_15, VAR_0);
  if (!VAR_15.heads.nr)
   VAR_10 |= FUNC_6(FUNC_3("Cannot determine remote HEAD"));
  else if (VAR_15.heads.nr > 1) {
   VAR_10 |= FUNC_6(FUNC_3("Multiple remote HEAD branches. "
       "Please choose one explicitly with:"));
   for (VAR_7 = 0; VAR_7 < VAR_15.heads.nr; VAR_7++)
    FUNC_7(VAR_4, "  git remote set-head %s %s\n",
     VAR_6[0], VAR_15.heads.items[VAR_7].string);
  } else
   VAR_13 = FUNC_18(VAR_15.heads.items[0].string);
  FUNC_9(&VAR_15);
 } else if (VAR_9 && !VAR_8 && VAR_5 == 1) {
  if (FUNC_5(((void*)0), VAR_11.buf, ((void*)0), VAR_1))
   VAR_10 |= FUNC_6(FUNC_3("Could not delete %s"), VAR_11.buf);
 } else
  FUNC_17(VAR_3, VAR_14);

 if (VAR_13) {
  FUNC_15(&VAR_12, "refs/remotes/%s/%s", VAR_6[0], VAR_13);

  if (!FUNC_14(VAR_12))
   VAR_10 |= FUNC_6(FUNC_3("Not a valid ref: %s"), VAR_12);
  else if (FUNC_4(VAR_11.buf, VAR_12, "remote set-head"))
   VAR_10 |= FUNC_6(FUNC_3("Could not setup %s"), VAR_11.buf);
  if (VAR_8)
   FUNC_13("%s/HEAD set to %s\n", VAR_6[0], VAR_13);
  FUNC_8(VAR_13);
 }

 FUNC_16(&VAR_11);
 FUNC_16(&VAR_12);
 return VAR_10;
}
