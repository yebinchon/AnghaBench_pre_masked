
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
typedef int u_char ;
typedef int MD4_CTX ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int * FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int const*) ;

int
FUNC_9(const u_char *VAR_2, u_char *VAR_3, u_char *VAR_4)
{
 u_char VAR_5[21];
 u_int16_t *VAR_6;
 MD4_CTX *VAR_7;
 u_int VAR_8;

 VAR_8 = FUNC_8(VAR_2);
 VAR_6 = FUNC_5((VAR_8 + 1) * sizeof(u_int16_t), VAR_0, VAR_1);



 FUNC_7(VAR_6, VAR_2);
 VAR_7 = FUNC_5(sizeof(MD4_CTX), VAR_0, VAR_1);
 FUNC_1(VAR_7);
 FUNC_2(VAR_7, (u_char*)VAR_6, VAR_8 * sizeof(u_int16_t));
 FUNC_4(VAR_6, VAR_0);
 FUNC_3(VAR_5, 21);
 FUNC_0(VAR_5, VAR_7);
 FUNC_4(VAR_7, VAR_0);

 FUNC_6(VAR_5, VAR_3, VAR_4);
 FUNC_6(VAR_5 + 7, VAR_3, VAR_4 + 8);
 FUNC_6(VAR_5 + 14, VAR_3, VAR_4 + 16);
 return 0;
}
