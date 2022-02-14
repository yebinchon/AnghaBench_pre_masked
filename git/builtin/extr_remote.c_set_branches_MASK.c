
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {int dummy; } ;


 int FUNC_0 (char*) ;
 struct option FUNC_1 (char,char*,int*,int ) ;
 struct option FUNC_2 () ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,char const**,int *,struct option*,int ,int ) ;
 int FUNC_6 (char const*,char const**,int) ;
 int FUNC_7 (int ,struct option*) ;

__attribute__((used)) static int FUNC_8(int VAR_1, const char **VAR_2)
{
 int VAR_3 = 0;
 struct option VAR_4[] = {
  FUNC_1('\0', "add", &VAR_3, FUNC_0("add branch")),
  FUNC_2()
 };

 VAR_1 = FUNC_5(VAR_1, VAR_2, ((void*)0), VAR_4,
        VAR_0, 0);
 if (VAR_1 == 0) {
  FUNC_4(FUNC_3("no remote specified"));
  FUNC_7(VAR_0, VAR_4);
 }
 VAR_2[VAR_1] = ((void*)0);

 return FUNC_6(VAR_2[0], VAR_2 + 1, VAR_3);
}
