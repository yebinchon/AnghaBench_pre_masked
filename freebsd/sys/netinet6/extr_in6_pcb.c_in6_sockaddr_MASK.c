
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_len; struct in6_addr sin6_addr; int sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_in6*,int) ;
 struct sockaddr_in6* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (struct sockaddr_in6*) ;

struct sockaddr *
FUNC_3(in_port_t VAR_3, struct in6_addr *VAR_4)
{
 struct sockaddr_in6 *VAR_5;

 VAR_5 = FUNC_1(sizeof *VAR_5, VAR_1, VAR_2);
 FUNC_0(VAR_5, sizeof *VAR_5);
 VAR_5->sin6_family = VAR_0;
 VAR_5->sin6_len = sizeof(*VAR_5);
 VAR_5->sin6_port = VAR_3;
 VAR_5->sin6_addr = *VAR_4;
 (void)FUNC_2(VAR_5);

 return (struct sockaddr *)VAR_5;
}
