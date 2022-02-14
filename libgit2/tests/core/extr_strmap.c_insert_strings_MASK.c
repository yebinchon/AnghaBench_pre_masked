
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_strmap ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(git_strmap *VAR_0, size_t VAR_1)
{
 size_t VAR_2, VAR_3, VAR_4;
 char *VAR_5;

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  VAR_5 = FUNC_4(10);
  for (VAR_3 = 0; VAR_3 < 10; ++VAR_3)
   VAR_5[VAR_3] = 'a' + (VAR_2 % 26);
  VAR_5[9] = '\0';


  for (VAR_3 = 0, VAR_4 = VAR_2 / 26; VAR_4 > 0; VAR_3++, VAR_4 = VAR_4 / 26)
   VAR_5[VAR_3] = 'A' + (VAR_4 % 26);

  FUNC_1(FUNC_2(VAR_0, VAR_5, VAR_5));
 }

 FUNC_0(FUNC_3(VAR_0), VAR_1);
}
