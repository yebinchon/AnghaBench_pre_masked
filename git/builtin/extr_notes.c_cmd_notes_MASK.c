
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 () ;
 struct option FUNC_2 (int ,char*,char const**,int ,int ) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char const**,char const*) ;
 int FUNC_5 (int,char const**,char const*) ;
 int FUNC_6 (int,char const**,char const*) ;
 int FUNC_7 (int ,char const*) ;
 int FUNC_8 (struct strbuf*) ;
 int FUNC_9 (int,char const**,char const*) ;
 int FUNC_10 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (int,char const**,char const*) ;
 int FUNC_12 (int,char const**,char const*) ;
 int FUNC_13 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_14 (int,char const**,char const*) ;
 int FUNC_15 (int,char const**,char const*) ;
 int FUNC_16 (char*,int ,int) ;
 int FUNC_17 (int,char const**,char const*) ;
 int FUNC_18 (struct strbuf*,char const*) ;
 int FUNC_19 (struct strbuf*) ;
 int FUNC_20 (char const*,char*) ;
 int FUNC_21 (int ,struct option*) ;

int FUNC_22(int VAR_4, const char **VAR_5, const char *VAR_6)
{
 int VAR_7;
 const char *VAR_8 = ((void*)0);
 struct option VAR_9[] = {
  FUNC_2(0, "ref", &VAR_8, FUNC_0("notes-ref"),
      FUNC_0("use notes from <notes-ref>")),
  FUNC_1()
 };

 FUNC_10(VAR_2, ((void*)0));
 VAR_4 = FUNC_13(VAR_4, VAR_5, VAR_6, VAR_9, VAR_3,
        VAR_0);

 if (VAR_8) {
  struct strbuf VAR_10 = VAR_1;
  FUNC_18(&VAR_10, VAR_8);
  FUNC_8(&VAR_10);
  FUNC_16("GIT_NOTES_REF", VAR_10.buf, 1);
  FUNC_19(&VAR_10);
 }

 if (VAR_4 < 1 || !FUNC_20(VAR_5[0], "list"))
  VAR_7 = FUNC_11(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "add"))
  VAR_7 = FUNC_4(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "copy"))
  VAR_7 = FUNC_6(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "append") || !FUNC_20(VAR_5[0], "edit"))
  VAR_7 = FUNC_5(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "show"))
  VAR_7 = FUNC_17(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "merge"))
  VAR_7 = FUNC_12(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "remove"))
  VAR_7 = FUNC_15(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "prune"))
  VAR_7 = FUNC_14(VAR_4, VAR_5, VAR_6);
 else if (!FUNC_20(VAR_5[0], "get-ref"))
  VAR_7 = FUNC_9(VAR_4, VAR_5, VAR_6);
 else {
  VAR_7 = FUNC_7(FUNC_3("unknown subcommand: %s"), VAR_5[0]);
  FUNC_21(VAR_3, VAR_9);
 }

 return VAR_7 ? 1 : 0;
}
