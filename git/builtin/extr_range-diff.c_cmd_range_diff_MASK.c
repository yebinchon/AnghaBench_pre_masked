
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct option {int dummy; } ;
struct diff_options {int use_color; int parseopts; int * member_0; } ;


 int FUNC_0 (struct option*) ;
 int FUNC_1 (char*) ;
 struct option FUNC_2 (int ,char*,int*,int ) ;
 struct option FUNC_3 () ;
 struct option FUNC_4 (int ,char*,int*,int ) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 int FUNC_6 (int ,char const*) ;
 int FUNC_7 (struct diff_options*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int *) ;
 int VAR_3 ;
 int FUNC_10 (int,char const**,char const*,struct option*,int ,int ) ;
 struct option* FUNC_11 (struct option*,int ) ;
 int FUNC_12 (int ,struct diff_options*) ;
 int FUNC_13 (int ,int ,int,int,struct diff_options*) ;
 int FUNC_14 (struct strbuf*,char*,...) ;
 int FUNC_15 (struct strbuf*,char const*) ;
 int FUNC_16 (struct strbuf*) ;
 int FUNC_17 (char const*) ;
 char* FUNC_18 (char const*,char*) ;
 int VAR_4 ;
 int FUNC_19 (int ,struct option*) ;

int FUNC_20(int VAR_5, const char **VAR_6, const char *VAR_7)
{
 int VAR_8 = VAR_0;
 struct diff_options VAR_9 = { ((void*)0) };
 int VAR_10 = -1;
 struct option VAR_11[] = {
  FUNC_4(0, "creation-factor", &VAR_8,
       FUNC_1("Percentage by which creation is weighted")),
  FUNC_2(0, "no-dual-color", &VAR_10,
       FUNC_1("use simple diff colors")),
  FUNC_3()
 };
 struct option *VAR_12;
 int VAR_13 = 0;
 struct strbuf VAR_14 = VAR_1, VAR_15 = VAR_1;

 FUNC_9(VAR_3, ((void*)0));

 FUNC_12(VAR_4, &VAR_9);

 VAR_12 = FUNC_11(VAR_11, VAR_9.parseopts);
 VAR_5 = FUNC_10(VAR_5, VAR_6, VAR_7, VAR_12,
        VAR_2, 0);

 FUNC_7(&VAR_9);


 if (!VAR_10)
  VAR_9.use_color = 1;

 if (VAR_5 == 2) {
  if (!FUNC_18(VAR_6[0], ".."))
   FUNC_6(FUNC_5("no .. in range: '%s'"), VAR_6[0]);
  FUNC_15(&VAR_14, VAR_6[0]);

  if (!FUNC_18(VAR_6[1], ".."))
   FUNC_6(FUNC_5("no .. in range: '%s'"), VAR_6[1]);
  FUNC_15(&VAR_15, VAR_6[1]);
 } else if (VAR_5 == 3) {
  FUNC_14(&VAR_14, "%s..%s", VAR_6[0], VAR_6[1]);
  FUNC_14(&VAR_15, "%s..%s", VAR_6[0], VAR_6[2]);
 } else if (VAR_5 == 1) {
  const char *VAR_16 = FUNC_18(VAR_6[0], "..."), *VAR_17 = VAR_6[0];
  int VAR_18;

  if (!VAR_16) {
   FUNC_8(FUNC_5("single arg format must be symmetric range"));
   FUNC_19(VAR_2, VAR_12);
  }

  VAR_18 = (int)(VAR_16 - VAR_17);
  if (!VAR_18) {
   VAR_17 = "HEAD";
   VAR_18 = FUNC_17(VAR_17);
  }
  VAR_16 += 3;
  if (!*VAR_16)
   VAR_16 = "HEAD";
  FUNC_14(&VAR_14, "%s..%.*s", VAR_16, VAR_18, VAR_17);
  FUNC_14(&VAR_15, "%.*s..%s", VAR_18, VAR_17, VAR_16);
 } else {
  FUNC_8(FUNC_5("need two commit ranges"));
  FUNC_19(VAR_2, VAR_12);
 }
 FUNC_0(VAR_12);

 VAR_13 = FUNC_13(VAR_14, VAR_15, VAR_8,
         VAR_10 < 1, &VAR_9);

 FUNC_16(&VAR_14);
 FUNC_16(&VAR_15);

 return VAR_13;
}
