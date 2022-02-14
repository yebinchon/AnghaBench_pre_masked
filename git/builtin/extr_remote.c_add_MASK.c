
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct strbuf {int buf; } ;
struct remote {int dummy; } ;
struct option {char* member_2; unsigned int* member_3; char* member_4; int member_6; int member_7; int member_5; int member_1; int member_0; } ;
struct TYPE_2__ {int string; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 struct option FUNC_1 (float,char*,int*,int ) ;
 struct option FUNC_2 () ;
 struct option FUNC_3 (int ,char*,int*,int ,int) ;
 struct option FUNC_4 (char,char*,char const**,int ,int ) ;
 struct option FUNC_5 (char,char*,struct string_list*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct strbuf VAR_6 ;
 struct string_list VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int ,char const*,unsigned int,struct strbuf*) ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (int ,...) ;
 int FUNC_10 (int ,char const*) ;
 scalar_t__ FUNC_11 (char const*) ;
 int FUNC_12 (int ,char const*) ;
 int VAR_12 ;
 int FUNC_13 (int,char const**,int *,struct option*,int ,int ) ;
 struct remote* FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (struct remote*,int) ;
 int FUNC_16 (struct strbuf*,char*,char const*,...) ;
 int FUNC_17 (struct strbuf*) ;
 int FUNC_18 (struct strbuf*) ;
 int FUNC_19 (struct string_list*,char*) ;
 int FUNC_20 (struct string_list*,int ) ;
 int FUNC_21 (int ,struct option*) ;
 int FUNC_22 (int ) ;

__attribute__((used)) static int FUNC_23(int VAR_13, const char **VAR_14)
{
 int VAR_15 = 0, VAR_16 = VAR_8;
 unsigned VAR_17 = VAR_1;
 struct string_list VAR_18 = VAR_7;
 const char *VAR_19 = ((void*)0);
 struct remote *VAR_20;
 struct strbuf VAR_21 = VAR_6, VAR_22 = VAR_6;
 const char *VAR_23, *VAR_24;
 int VAR_25;

 struct option VAR_26[] = {
  FUNC_1('f', "fetch", &VAR_15, FUNC_0("fetch the remote branches")),
  FUNC_3(0, "tags", &VAR_16,
       FUNC_0("import all tags and associated objects when fetching"),
       VAR_9),
  FUNC_3(0, ((void*)0), &VAR_16,
       FUNC_0("or do not fetch any tag at all (--no-tags)"), VAR_10),
  FUNC_5('t', "track", &VAR_18, FUNC_0("branch"),
    FUNC_0("branch(es) to track")),
  FUNC_4('m', "master", &VAR_19, FUNC_0("branch"), FUNC_0("master branch")),
  { VAR_3, 0, "mirror", &VAR_17, "(push|fetch)",
   FUNC_0("set up remote as a mirror to push to or fetch from"),
   VAR_5 | VAR_4, VAR_12 },
  FUNC_2()
 };

 VAR_13 = FUNC_13(VAR_13, VAR_14, ((void*)0), VAR_26, VAR_11,
        0);

 if (VAR_13 != 2)
  FUNC_21(VAR_11, VAR_26);

 if (VAR_17 && VAR_19)
  FUNC_9(FUNC_6("specifying a master branch makes no sense with --mirror"));
 if (VAR_17 && !(VAR_17 & VAR_0) && VAR_18.nr)
  FUNC_9(FUNC_6("specifying branches to track makes sense only with fetch mirrors"));

 VAR_23 = VAR_14[0];
 VAR_24 = VAR_14[1];

 VAR_20 = FUNC_14(VAR_23);
 if (FUNC_15(VAR_20, 1))
  FUNC_9(FUNC_6("remote %s already exists."), VAR_23);

 FUNC_16(&VAR_22, "refs/heads/test:refs/remotes/%s/test", VAR_23);
 if (!FUNC_22(VAR_22))
  FUNC_9(FUNC_6("'%s' is not a valid remote name"), VAR_23);

 FUNC_16(&VAR_21, "remote.%s.url", VAR_23);
 FUNC_12(VAR_21.buf, VAR_24);

 if (!VAR_17 || VAR_17 & VAR_0) {
  FUNC_18(&VAR_21);
  FUNC_16(&VAR_21, "remote.%s.fetch", VAR_23);
  if (VAR_18.nr == 0)
   FUNC_19(&VAR_18, "*");
  for (VAR_25 = 0; VAR_25 < VAR_18.nr; VAR_25++) {
   FUNC_7(VAR_21.buf, VAR_18.items[VAR_25].string,
       VAR_23, VAR_17, &VAR_22);
  }
 }

 if (VAR_17 & VAR_2) {
  FUNC_18(&VAR_21);
  FUNC_16(&VAR_21, "remote.%s.mirror", VAR_23);
  FUNC_12(VAR_21.buf, "true");
 }

 if (VAR_16 != VAR_8) {
  FUNC_18(&VAR_21);
  FUNC_16(&VAR_21, "remote.%s.tagopt", VAR_23);
  FUNC_12(VAR_21.buf,
          VAR_16 == VAR_9 ? "--tags" : "--no-tags");
 }

 if (VAR_15 && FUNC_11(VAR_23))
  return 1;

 if (VAR_19) {
  FUNC_18(&VAR_21);
  FUNC_16(&VAR_21, "refs/remotes/%s/HEAD", VAR_23);

  FUNC_18(&VAR_22);
  FUNC_16(&VAR_22, "refs/remotes/%s/%s", VAR_23, VAR_19);

  if (FUNC_8(VAR_21.buf, VAR_22, "remote add"))
   return FUNC_10(FUNC_6("Could not setup master '%s'"), VAR_19);
 }

 FUNC_17(&VAR_21);
 FUNC_17(&VAR_22);
 FUNC_20(&VAR_18, 0);

 return 0;
}
