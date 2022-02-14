
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef int token_t ;
typedef int gid_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;

token_t *
FUNC_4(u_int16_t VAR_1, gid_t *VAR_2)
{
 token_t *VAR_3;
 u_char *VAR_4 = ((void*)0);
 int VAR_5;

 FUNC_3(VAR_3, VAR_4, sizeof(u_char) + sizeof(u_int16_t) +
     VAR_1 * sizeof(u_int32_t));

 FUNC_0(VAR_4, VAR_0);
 FUNC_1(VAR_4, VAR_1);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  FUNC_2(VAR_4, VAR_2[VAR_5]);

 return (VAR_3);
}
