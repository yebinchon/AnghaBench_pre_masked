
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option const FUNC_1 (char,char*,int*,int ,int ) ;
 struct option const FUNC_2 () ;
 struct option const FUNC_3 (char,char*,int*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ,struct option const*) ;

int FUNC_9(int VAR_3, const char **VAR_4, const char *VAR_5)
{
 int VAR_6 = FUNC_5(2) ? VAR_1 : 0;
 const struct option VAR_7[] = {
  FUNC_1('n', "dry-run", &VAR_6, FUNC_0("dry run"),
   VAR_0),
  FUNC_3('q', "quiet", &VAR_6, FUNC_0("be quiet"),
      VAR_1),
  FUNC_2()
 };

 VAR_3 = FUNC_6(VAR_3, VAR_4, VAR_5, VAR_7,
        VAR_2, 0);

 if (VAR_3 > 0)
  FUNC_8(FUNC_4("too many arguments"),
         VAR_2,
         VAR_7);

 FUNC_7(VAR_6);
 return 0;
}
