
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **,char*,int ) ;
 int FUNC_7 (char*,int) ;

void FUNC_8(void)
{
 git_repository *VAR_0;

 FUNC_7("invalid", 0700);

 FUNC_2(FUNC_6(&VAR_0, "./invalid", 0));
 FUNC_3(FUNC_7("./invalid/subdir", 0777));


 if (!FUNC_4("./invalid/.GIT"))
  FUNC_3(FUNC_7("./invalid/.GIT", 0777));
 if (!FUNC_4("./invalid/.GiT"))
  FUNC_3(FUNC_7("./invalid/.GiT", 0777));

 FUNC_0(VAR_0, ".git/hello");
 FUNC_0(VAR_0, ".GIT/hello");
 FUNC_0(VAR_0, ".GiT/hello");
 FUNC_0(VAR_0, "./.git/hello");
 FUNC_0(VAR_0, "./foo");
 FUNC_0(VAR_0, "./bar");
 FUNC_0(VAR_0, "subdir/../bar");

 FUNC_5(VAR_0);

 FUNC_1("invalid");
}
