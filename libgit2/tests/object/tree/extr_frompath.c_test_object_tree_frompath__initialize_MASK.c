
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int **,int ) ;
 int FUNC_5 (int **,int *,int *) ;
 int * VAR_0 ;
 int * VAR_1 ;

void FUNC_6(void)
{
 git_oid VAR_2;
 const char *VAR_3 = "ae90f12eea699729ed24555e40b9fd669da12a12";

 FUNC_2(FUNC_4(&VAR_0, FUNC_1("testrepo.git")));
 FUNC_0(VAR_0 != ((void*)0));

 FUNC_2(FUNC_3(&VAR_2, VAR_3));
 FUNC_2(FUNC_5(&VAR_1, VAR_0, &VAR_2));
 FUNC_0(VAR_1 != ((void*)0));
}
