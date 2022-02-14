
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct remote {char** pushurl; int pushurl_nr; char** url; int url_nr; } ;
struct option {int dummy; } ;
typedef int regex_t ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_3 (char*) ;
 int VAR_3 ;
 int FUNC_4 (int ,...) ;
 int FUNC_5 (int ,char const*) ;
 int FUNC_6 (int ,char const*,char const*,int) ;
 int FUNC_7 (int,char const**,int *,struct option*,int ,int ) ;
 scalar_t__ FUNC_8 (int *,char const*,int ) ;
 int FUNC_9 (int *,char const*,int ,int *,int ) ;
 int FUNC_10 (int *) ;
 struct remote* FUNC_11 (char const*) ;
 int FUNC_12 (struct remote*,int) ;
 int FUNC_13 (struct strbuf*,char*,char const*) ;
 int FUNC_14 (struct strbuf*) ;
 int FUNC_15 (int ,struct option*) ;

__attribute__((used)) static int FUNC_16(int VAR_4, const char **VAR_5)
{
 int VAR_6, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0;
 int VAR_10 = 0, VAR_11 = 0;
 const char *VAR_12 = ((void*)0);
 const char *VAR_13 = ((void*)0);
 const char *VAR_14 = ((void*)0);
 struct remote *VAR_15;
 regex_t VAR_16;
 const char **VAR_17;
 int VAR_18;
 struct strbuf VAR_19 = VAR_2;
 struct option VAR_20[] = {
  FUNC_1('\0', "push", &VAR_7,
    FUNC_0("manipulate push URLs")),
  FUNC_1('\0', "add", &VAR_8,
    FUNC_0("add URL")),
  FUNC_1('\0', "delete", &VAR_9,
       FUNC_0("delete URLs")),
  FUNC_2()
 };
 VAR_4 = FUNC_7(VAR_4, VAR_5, ((void*)0), VAR_20, VAR_3,
        VAR_0);

 if (VAR_8 && VAR_9)
  FUNC_4(FUNC_3("--add --delete doesn't make sense"));

 if (VAR_4 < 3 || VAR_4 > 4 || ((VAR_8 || VAR_9) && VAR_4 != 3))
  FUNC_15(VAR_3, VAR_20);

 VAR_12 = VAR_5[1];
 VAR_13 = VAR_5[2];
 if (VAR_4 > 3)
  VAR_14 = VAR_5[3];

 if (VAR_9)
  VAR_14 = VAR_13;

 VAR_15 = FUNC_11(VAR_12);
 if (!FUNC_12(VAR_15, 1))
  FUNC_4(FUNC_3("No such remote '%s'"), VAR_12);

 if (VAR_7) {
  FUNC_13(&VAR_19, "remote.%s.pushurl", VAR_12);
  VAR_17 = VAR_15->pushurl;
  VAR_18 = VAR_15->pushurl_nr;
 } else {
  FUNC_13(&VAR_19, "remote.%s.url", VAR_12);
  VAR_17 = VAR_15->url;
  VAR_18 = VAR_15->url_nr;
 }


 if ((!VAR_14 && !VAR_9) || VAR_8) {
  if (VAR_8)
   FUNC_6(VAR_19.buf, VAR_13,
             "^$", 0);
  else
   FUNC_5(VAR_19.buf, VAR_13);
  goto out;
 }


 if (FUNC_8(&VAR_16, VAR_14, VAR_1))
  FUNC_4(FUNC_3("Invalid old URL pattern: %s"), VAR_14);

 for (VAR_6 = 0; VAR_6 < VAR_18; VAR_6++)
  if (!FUNC_9(&VAR_16, VAR_17[VAR_6], 0, ((void*)0), 0))
   VAR_10++;
  else
   VAR_11++;
 if (!VAR_9 && !VAR_10)
  FUNC_4(FUNC_3("No such URL found: %s"), VAR_14);
 if (VAR_9 && !VAR_11 && !VAR_7)
  FUNC_4(FUNC_3("Will not delete all non-push URLs"));

 FUNC_10(&VAR_16);

 if (!VAR_9)
  FUNC_6(VAR_19.buf, VAR_13, VAR_14, 0);
 else
  FUNC_6(VAR_19.buf, ((void*)0), VAR_14, 1);
out:
 FUNC_14(&VAR_19);
 return 0;
}
