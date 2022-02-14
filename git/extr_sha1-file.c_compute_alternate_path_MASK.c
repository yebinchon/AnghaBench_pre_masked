
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct strbuf*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char*) ;
 char* FUNC_8 (char*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (struct strbuf*,int ,char const*) ;
 char* FUNC_11 (char const*) ;

char *FUNC_12(const char *VAR_2, struct strbuf *VAR_3)
{
 char *VAR_4 = ((void*)0);
 const char *VAR_5, *VAR_6;
 int VAR_7 = 0;

 VAR_6 = FUNC_9(VAR_2);
 if (!VAR_6) {
  VAR_7 = 1;
  FUNC_10(VAR_3, FUNC_1("path '%s' does not exist"), VAR_2);
  goto out;
 } else




  VAR_4 = FUNC_11(VAR_6);

 VAR_5 = FUNC_8(VAR_4);
 if (!VAR_5)
  VAR_5 = FUNC_8(FUNC_6("%s/.git", VAR_4));
 if (VAR_5) {
  FUNC_3(VAR_4);
  VAR_4 = FUNC_11(VAR_5);
 }

 if (!VAR_5 && FUNC_5(FUNC_6("%s/.git/objects", VAR_4))) {
  char *VAR_8 = FUNC_7("%s/.git", VAR_4);
  FUNC_3(VAR_4);
  VAR_4 = VAR_8;
 } else if (!FUNC_5(FUNC_6("%s/objects", VAR_4))) {
  struct strbuf VAR_9 = VAR_1;
  VAR_7 = 1;
  if (FUNC_4(&VAR_9, VAR_4)) {
   FUNC_10(VAR_3,
        FUNC_1("reference repository '%s' as a linked "
          "checkout is not supported yet."),
        VAR_2);
   goto out;
  }

  FUNC_10(VAR_3, FUNC_1("reference repository '%s' is not a "
     "local repository."), VAR_2);
  goto out;
 }

 if (!FUNC_2(FUNC_6("%s/shallow", VAR_4), VAR_0)) {
  FUNC_10(VAR_3, FUNC_1("reference repository '%s' is shallow"),
       VAR_2);
  VAR_7 = 1;
  goto out;
 }

 if (!FUNC_2(FUNC_6("%s/info/grafts", VAR_4), VAR_0)) {
  FUNC_10(VAR_3,
       FUNC_1("reference repository '%s' is grafted"),
       VAR_2);
  VAR_7 = 1;
  goto out;
 }

out:
 if (VAR_7) {
  FUNC_0(VAR_4);
 }

 return VAR_4;
}
