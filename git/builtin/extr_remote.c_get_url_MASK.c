
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct remote {char** pushurl; int pushurl_nr; char** url; int url_nr; } ;
struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int,char const**,int *,struct option*,int ,int ) ;
 int FUNC_6 (char*,char const*) ;
 struct remote* FUNC_7 (char const*) ;
 int FUNC_8 (struct remote*,int) ;
 int FUNC_9 (int ,struct option*) ;

__attribute__((used)) static int FUNC_10(int VAR_1, const char **VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0;
 const char *VAR_6 = ((void*)0);
 struct remote *VAR_7;
 const char **VAR_8;
 int VAR_9;
 struct option VAR_10[] = {
  FUNC_1('\0', "push", &VAR_4,
    FUNC_0("query push URLs rather than fetch URLs")),
  FUNC_1('\0', "all", &VAR_5,
    FUNC_0("return all URLs")),
  FUNC_2()
 };
 VAR_1 = FUNC_5(VAR_1, VAR_2, ((void*)0), VAR_10, VAR_0, 0);

 if (VAR_1 != 1)
  FUNC_9(VAR_0, VAR_10);

 VAR_6 = VAR_2[0];

 VAR_7 = FUNC_7(VAR_6);
 if (!FUNC_8(VAR_7, 1))
  FUNC_4(FUNC_3("No such remote '%s'"), VAR_6);

 VAR_9 = 0;
 if (VAR_4) {
  VAR_8 = VAR_7->pushurl;
  VAR_9 = VAR_7->pushurl_nr;
 }



 if (!VAR_9) {
  VAR_8 = VAR_7->url;
  VAR_9 = VAR_7->url_nr;
 }

 if (!VAR_9)
  FUNC_4(FUNC_3("no URLs configured for remote '%s'"), VAR_6);

 if (VAR_5) {
  for (VAR_3 = 0; VAR_3 < VAR_9; VAR_3++)
   FUNC_6("%s", VAR_8[VAR_3]);
 } else {
  FUNC_6("%s", *VAR_8);
 }

 return 0;
}
