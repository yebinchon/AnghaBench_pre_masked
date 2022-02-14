
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;





__attribute__((used)) static void *
FUNC_0(struct sockaddr *VAR_0, int *VAR_1) {
 void *VAR_2;
 int VAR_3;

 switch (VAR_0->sa_family) {
 case 129:
  VAR_3 = sizeof(((struct sockaddr_in *)VAR_0)->sin_addr);
  VAR_2 = &((struct sockaddr_in *)VAR_0)->sin_addr;
  break;
 case 128:
  VAR_3 = sizeof(((struct sockaddr_in6 *)VAR_0)->sin6_addr);
  VAR_2 = &((struct sockaddr_in6 *)VAR_0)->sin6_addr;
  break;
 default:
  VAR_2 = ((void*)0);
  VAR_3 = 0;
 }

 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_3;
 return (VAR_2);
}
