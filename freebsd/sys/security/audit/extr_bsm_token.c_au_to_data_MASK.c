
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int token_t ;


 int FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,char) ;

 size_t VAR_0 ;

 size_t VAR_1 ;

 size_t VAR_2 ;

 size_t VAR_3 ;
 char VAR_4 ;
 int FUNC_2 (int *,int *,int) ;

token_t *
FUNC_3(char VAR_5, char VAR_6, char VAR_7, const char *VAR_8)
{
 token_t *VAR_9;
 u_char *VAR_10 = ((void*)0);
 size_t VAR_11, VAR_12;


 switch (VAR_6) {
 case 131:

  VAR_11 = VAR_0;
  break;

 case 128:
  VAR_11 = VAR_3;
  break;

 case 130:

  VAR_11 = VAR_1;
  break;

 case 129:
  VAR_11 = VAR_2;
  break;

 default:
  return (((void*)0));
 }

 VAR_12 = VAR_11 * VAR_7;

 FUNC_2(VAR_9, VAR_10, 4 * sizeof(u_char) + VAR_12);





 FUNC_1(VAR_10, VAR_4);
 FUNC_1(VAR_10, VAR_5);
 FUNC_1(VAR_10, VAR_6);
 FUNC_1(VAR_10, VAR_7);
 FUNC_0(VAR_10, VAR_8, VAR_12);

 return (VAR_9);
}
