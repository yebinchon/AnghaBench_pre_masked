
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 struct option FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int,char const**,char const*,struct option*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,struct option*) ;

__attribute__((used)) static int FUNC_7(int VAR_1, const char **VAR_2, const char *VAR_3)
{
 struct option VAR_4[] = { FUNC_0() };
 VAR_1 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_4,
        VAR_0, 0);

 if (VAR_1) {
  FUNC_3(FUNC_1("too many parameters"));
  FUNC_6(VAR_0, VAR_4);
 }

 FUNC_5(FUNC_2());
 return 0;
}
