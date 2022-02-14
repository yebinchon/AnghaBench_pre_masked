
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_char ;
typedef int token_t ;


 int FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (char const*) ;

token_t *
FUNC_5(char **VAR_1)
{
 token_t *VAR_2;
 u_char *VAR_3 = ((void*)0);
 const char *VAR_4;
 int VAR_5, VAR_6 = 0;
 size_t VAR_7 = 0;

 VAR_4 = *VAR_1;

 while (VAR_4 != ((void*)0)) {
  int VAR_8;

  VAR_8 = FUNC_4(VAR_4);
  VAR_7 += VAR_8 + 1;
  VAR_6++;
  VAR_4 = *(VAR_1 + VAR_6);
 }

 FUNC_3(VAR_2, VAR_3, sizeof(u_char) + sizeof(u_int32_t) + VAR_7);

 FUNC_1(VAR_3, VAR_0);
 FUNC_2(VAR_3, VAR_6);

 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
  VAR_4 = *(VAR_1 + VAR_5);
  FUNC_0(VAR_3, VAR_4, FUNC_4(VAR_4) + 1);
 }

 return (VAR_2);
}
