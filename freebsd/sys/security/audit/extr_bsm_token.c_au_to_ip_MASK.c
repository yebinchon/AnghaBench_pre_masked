
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int token_t ;
struct ip {int dummy; } ;


 int FUNC_0 (int *,struct ip*,int) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;

token_t *
FUNC_3(struct ip *VAR_1)
{
 token_t *VAR_2;
 u_char *VAR_3 = ((void*)0);

 FUNC_2(VAR_2, VAR_3, sizeof(u_char) + sizeof(struct ip));

 FUNC_1(VAR_3, VAR_0);
 FUNC_0(VAR_3, VAR_1, sizeof(struct ip));

 return (VAR_2);
}
