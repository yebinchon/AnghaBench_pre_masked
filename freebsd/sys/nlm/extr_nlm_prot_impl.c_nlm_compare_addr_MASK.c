
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_1(const struct sockaddr *VAR_1, const struct sockaddr *VAR_2)
{
 const struct sockaddr_in *VAR_3, *VAR_4;




 if (VAR_1->sa_family != VAR_2->sa_family)
  return (VAR_0);

 switch (VAR_1->sa_family) {
 case 129:
  VAR_3 = (const struct sockaddr_in *) VAR_1;
  VAR_4 = (const struct sockaddr_in *) VAR_2;
  return !FUNC_0(&VAR_3->sin_addr, &VAR_4->sin_addr,
      sizeof(VAR_3->sin_addr));







 }

 return (0);
}
