
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sockaddr_in6 {int sin6_len; int sin6_family; int sin6_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr_in6*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct sockaddr_in6 *VAR_1, int VAR_2)
{
 u_char *VAR_3 = (unsigned char *)&VAR_1->sin6_addr;

 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->sin6_family = VAR_0;
 VAR_1->sin6_len = sizeof(*VAR_1);

 for(; VAR_2 >= 8; VAR_2 -= 8)
  *VAR_3++ = 0xff;
 if (VAR_2 > 0)
  *VAR_3 = (0xff << (8 - VAR_2));
}
