
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_buf ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *,char const*) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static void FUNC_5(git_buf *VAR_0, const char *VAR_1, const char *VAR_2)
{
 const char *VAR_3;

 FUNC_0(VAR_0 && VAR_1 && VAR_2);

 FUNC_3(VAR_0, VAR_1);
 FUNC_2(VAR_0, ' ');

 while ((VAR_3 = FUNC_4(VAR_2, '\n')) != ((void*)0)) {
  FUNC_1(VAR_0, VAR_2, VAR_3 - VAR_2);
  FUNC_3(VAR_0, "\n ");
  VAR_2 = VAR_3 + 1;
 }

 FUNC_3(VAR_0, VAR_2);
 FUNC_2(VAR_0, '\n');
}
