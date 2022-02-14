
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 struct option FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int,char const**,char const*,struct option*,int ,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_2, const char **VAR_3, const char *VAR_4)
{
 struct option VAR_5[] = {
  FUNC_0()
 };

 VAR_2 = FUNC_4(VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_1,
        VAR_0);

 if (VAR_2)
  return FUNC_3(FUNC_1("git stash clear with parameters is "
          "unimplemented"));

 return FUNC_2();
}
