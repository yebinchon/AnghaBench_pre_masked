
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_3(const struct sockaddr *VAR_4)
{
 if (VAR_4->sa_family == VAR_0) {
  const struct sockaddr_in *VAR_5 = (struct sockaddr_in *)VAR_4;
  if (!FUNC_1(&VAR_5->sin_addr)) {
   FUNC_0(("Detected an IPv4 interface"));
   VAR_2 = 1;
  }
 } else if (VAR_4->sa_family == VAR_1) {
  const struct sockaddr_in6 *VAR_6 = (struct sockaddr_in6 *)VAR_4;
  if (!FUNC_2(&VAR_6->sin6_addr)) {
   FUNC_0(("Detected an IPv6 interface"));
   VAR_3 = 1;
  }
 }
}
