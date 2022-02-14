
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 char* VAR_0 ;
 char const* FUNC_0 (char*) ;
 struct option FUNC_1 (int ,char*,int*,char*) ;
 struct option FUNC_2 () ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_3 (int,char const**,char const*,struct option*,char const* const*,int ) ;
 int FUNC_4 (char*,...) ;

int FUNC_5(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = 0;
 const char * const VAR_7[] = {
  FUNC_0("git version [<options>]"),
  ((void*)0)
 };
 struct option VAR_8[] = {
  FUNC_1(0, "build-options", &VAR_6,
    "also print build options"),
  FUNC_2()
 };

 VAR_3 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_8, VAR_7, 0);







 FUNC_4("git version %s\n", VAR_2);

 if (VAR_6) {
  FUNC_4("cpu: %s\n", VAR_0);
  if (VAR_1[0])
   FUNC_4("built from commit: %s\n",
          VAR_1);
  else
   FUNC_4("no commit associated with this build\n");
  FUNC_4("sizeof-long: %d\n", (int)sizeof(long));
  FUNC_4("sizeof-size_t: %d\n", (int)sizeof(size_t));

 }
 return 0;
}
