
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_repository ;


 int VAR_0 ;
 int * VAR_1 ;
 char const* VAR_2 ;
 char* FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int **,char const*) ;
 int FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (char const*) ;

git_repository *FUNC_8(const char *VAR_3)
{

 const char *VAR_4 = FUNC_0(VAR_3);




 FUNC_1(VAR_3);
 VAR_2 = VAR_3;

 FUNC_2(FUNC_7(VAR_4));





 if (FUNC_6(".gitted", VAR_0) == 0)
  FUNC_2(FUNC_3(".gitted", ".git"));





 if (FUNC_6("gitattributes", VAR_0) == 0)
  FUNC_2(FUNC_3("gitattributes", ".gitattributes"));


 if (FUNC_6("gitignore", VAR_0) == 0)
  FUNC_2(FUNC_3("gitignore", ".gitignore"));

 FUNC_2(FUNC_7(".."));


 FUNC_2(FUNC_4(&VAR_1, VAR_4));


 FUNC_2(FUNC_5(VAR_1, 0));

 return VAR_1;
}
