
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ) ;

git_repository *FUNC_8(void)
{
 git_repository *VAR_1 = FUNC_2("submod3");

 FUNC_0("submod2_target");
 FUNC_6("submod2_target/.gitted", "submod2_target/.git");

 FUNC_7(FUNC_5(VAR_1));
 FUNC_6("submod3/One/.gitted", "submod3/One/.git");
 FUNC_6("submod3/TWO/.gitted", "submod3/TWO/.git");
 FUNC_6("submod3/three/.gitted", "submod3/three/.git");
 FUNC_6("submod3/FoUr/.gitted", "submod3/FoUr/.git");
 FUNC_6("submod3/Five/.gitted", "submod3/Five/.git");
 FUNC_6("submod3/six/.gitted", "submod3/six/.git");
 FUNC_6("submod3/sEvEn/.gitted", "submod3/sEvEn/.git");
 FUNC_6("submod3/EIGHT/.gitted", "submod3/EIGHT/.git");
 FUNC_6("submod3/nine/.gitted", "submod3/nine/.git");
 FUNC_6("submod3/TEN/.gitted", "submod3/TEN/.git");

 FUNC_3(VAR_0, "submod2_target");

 FUNC_1(FUNC_4(VAR_1, 1));

 return VAR_1;
}
