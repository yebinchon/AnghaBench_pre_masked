
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ git_file ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (scalar_t__,char const*,int) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8(const char *VAR_0, const char *VAR_1)
{
 git_file VAR_2;
 int VAR_3;

 if (FUNC_3(VAR_0)) {
  FUNC_1(FUNC_5(VAR_0));
 }

 VAR_2 = FUNC_2(VAR_0, 0777, 0666);
 FUNC_0(VAR_2 >= 0);

 VAR_3 = FUNC_6(VAR_2, VAR_1, FUNC_7(VAR_1) * sizeof(char));
 FUNC_4(VAR_2);
 FUNC_1(VAR_3);
}
