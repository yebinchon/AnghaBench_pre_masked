
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static int FUNC_1(const struct sockaddr_storage *VAR_2,
    const struct sockaddr_storage *VAR_3)
{
 const struct sockaddr *VAR_4 = (const struct sockaddr*) VAR_2;
 const struct sockaddr *VAR_5 = (const struct sockaddr*) VAR_3;

 if (VAR_4->sa_family != VAR_5->sa_family)
  return VAR_4->sa_family - VAR_5->sa_family;
 if (VAR_4->sa_family == VAR_0)
  return FUNC_0(&((struct sockaddr_in *)VAR_2)->sin_addr,
      &((struct sockaddr_in *)VAR_3)->sin_addr,
      sizeof(struct in_addr));

 if (VAR_4->sa_family == VAR_1)
  return FUNC_0(&((struct sockaddr_in6 *)VAR_2)->sin6_addr,
      &((struct sockaddr_in6 *)VAR_3)->sin6_addr,
      sizeof(struct in6_addr));

 return 0;
}
