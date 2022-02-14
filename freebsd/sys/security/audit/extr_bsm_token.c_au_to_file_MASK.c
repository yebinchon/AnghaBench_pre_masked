
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_int16_t ;
typedef int u_char ;
typedef int token_t ;
struct timeval {int tv_usec; int tv_sec; } ;


 int FUNC_0 (int *,char const*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,int) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_5 (char const*) ;

token_t *
FUNC_6(const char *VAR_1, struct timeval VAR_2)
{
 token_t *VAR_3;
 u_char *VAR_4 = ((void*)0);
 u_int16_t VAR_5;
 u_int32_t VAR_6;

 VAR_5 = FUNC_5(VAR_1);
 VAR_5 += 1;

 FUNC_4(VAR_3, VAR_4, sizeof(u_char) + 2 * sizeof(u_int32_t) +
     sizeof(u_int16_t) + VAR_5);

 VAR_6 = VAR_2.tv_usec/1000;

 FUNC_1(VAR_4, VAR_0);
 FUNC_3(VAR_4, VAR_2.tv_sec);
 FUNC_3(VAR_4, VAR_6);
 FUNC_2(VAR_4, VAR_5);
 FUNC_0(VAR_4, VAR_1, VAR_5);

 return (VAR_3);
}
