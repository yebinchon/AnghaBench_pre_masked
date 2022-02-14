
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (void*,void*,int) ;

__attribute__((used)) static int
FUNC_1(struct sockaddr *VAR_0, struct sockaddr *VAR_1)
{
 int VAR_2;
 void *VAR_3, *VAR_4;

 if (VAR_0->sa_family != VAR_1->sa_family)
  return -1;

 switch (VAR_0->sa_family) {
 case 129:
  VAR_3 = &((struct sockaddr_in *)VAR_0)->sin_addr;
  VAR_4 = &((struct sockaddr_in *)VAR_1)->sin_addr;
  VAR_2 = 4;
  break;
 case 128:
  VAR_3 = &((struct sockaddr_in6 *)VAR_0)->sin6_addr;
  VAR_4 = &((struct sockaddr_in6 *)VAR_1)->sin6_addr;
  VAR_2 = 16;
  break;
 default:
  return -1;
 }

 return FUNC_0(VAR_3, VAR_4, VAR_2);
}
