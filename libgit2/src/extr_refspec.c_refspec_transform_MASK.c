
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*,size_t) ;
 int FUNC_3 (int *,char const*) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (char const*,char) ;
 size_t FUNC_6 (char const*) ;

__attribute__((used)) static int FUNC_7(
 git_buf *VAR_0, const char *VAR_1, const char *VAR_2, const char *VAR_3)
{
 const char *VAR_4, *VAR_5;
 size_t VAR_6, VAR_7;

 FUNC_4(VAR_0);
 FUNC_1(VAR_0);







 VAR_4 = FUNC_5(VAR_1, '*');
 VAR_5 = FUNC_5(VAR_2, '*');

 FUNC_0(VAR_4 && VAR_5);


 VAR_7 = VAR_4 - VAR_1;


 FUNC_2(VAR_0, VAR_2, VAR_5 - VAR_2);





 VAR_6 = FUNC_6(VAR_3 + VAR_7) - FUNC_6(VAR_4 + 1);
 FUNC_2(VAR_0, VAR_3 + VAR_7, VAR_6);

 return FUNC_3(VAR_0, VAR_5 + 1);
}
