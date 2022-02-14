
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct cma_req_info {int listen_addr_storage; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(const struct cma_req_info *VAR_2)
{
 const struct sockaddr *VAR_3 =
   (const struct sockaddr *)&VAR_2->listen_addr_storage;
 const struct sockaddr_in6 *VAR_4 = (const struct sockaddr_in6 *)VAR_3;


 return (VAR_3->sa_family == VAR_0 &&
  (FUNC_0(&VAR_4->sin6_addr) & VAR_1));
}
