
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
typedef int token_t ;
struct sockaddr_in6 {int sin6_addr; int sin6_port; int sin6_family; } ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int FUNC_3 (int *,int *,int) ;

token_t *
FUNC_4(struct sockaddr_in6 *VAR_1)
{
 token_t *VAR_2;
 u_char *VAR_3 = ((void*)0);

 FUNC_3(VAR_2, VAR_3, 3 * sizeof(u_char) + sizeof(u_int16_t) +
     4 * sizeof(u_int32_t));

 FUNC_1(VAR_3, VAR_0);





 FUNC_1(VAR_3, 0);
 FUNC_1(VAR_3, VAR_1->sin6_family);

 FUNC_2(VAR_3, VAR_1->sin6_port);
 FUNC_0(VAR_3, &VAR_1->sin6_addr, 4 * sizeof(uint32_t));

 return (VAR_2);
}
