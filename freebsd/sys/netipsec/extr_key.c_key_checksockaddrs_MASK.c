
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; scalar_t__ sa_len; } ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct sockaddr *VAR_2, struct sockaddr *VAR_3)
{


 if (VAR_2->sa_family != VAR_3->sa_family)
  return (VAR_1);

 if (VAR_2->sa_len != VAR_3->sa_len)
  return (VAR_1);
 switch (VAR_2->sa_family) {
 default:
  return (VAR_0);
 }
 return (0);
}
