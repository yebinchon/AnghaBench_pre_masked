
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_config ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const**,int *,char*) ;
 int FUNC_4 (int **,char*) ;
 int FUNC_5 (int *,char*,char*) ;
 int FUNC_6 (int **,int *) ;

void FUNC_7(void)
{
 git_config *VAR_0, *VAR_1;
 const char* VAR_2;
 const char* VAR_3;
 const char* VAR_4;
 const char* VAR_5;
 const char* VAR_6;

 FUNC_1(FUNC_4(&VAR_0, "config17"));
 FUNC_1(FUNC_5(VAR_0, "core.startwithspace", " Something"));
 FUNC_1(FUNC_5(VAR_0, "core.endwithspace", "Something "));
 FUNC_1(FUNC_5(VAR_0, "core.containscommentchar1", "some#thing"));
 FUNC_1(FUNC_5(VAR_0, "core.containscommentchar2", "some;thing"));
 FUNC_1(FUNC_5(VAR_0, "core.startwhithsapceandcontainsdoublequote", " some\"thing"));
 FUNC_2(VAR_0);

 FUNC_1(FUNC_4(&VAR_1, "config17"));
 FUNC_1(FUNC_6(&VAR_0, VAR_1));
 FUNC_1(FUNC_3(&VAR_2, VAR_0, "core.startwithspace"));
 FUNC_0(" Something", VAR_2);
 FUNC_1(FUNC_3(&VAR_3, VAR_0, "core.endwithspace"));
 FUNC_0("Something ", VAR_3);
 FUNC_1(FUNC_3(&VAR_4, VAR_0, "core.containscommentchar1"));
 FUNC_0("some#thing", VAR_4);
 FUNC_1(FUNC_3(&VAR_5, VAR_0, "core.containscommentchar2"));
 FUNC_0("some;thing", VAR_5);
 FUNC_1(FUNC_3(&VAR_6, VAR_0, "core.startwhithsapceandcontainsdoublequote"));
 FUNC_0(" some\"thing", VAR_6);
 FUNC_2(VAR_0);
 FUNC_2(VAR_1);
}
