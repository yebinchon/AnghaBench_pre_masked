
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct in_addr {int dummy; } ;
struct sockaddr_in {int sin_len; struct in_addr sin_addr; int sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef int sin ;
typedef int in_port_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (struct sockaddr_in*,struct sockaddr_in6*) ;
 struct sockaddr_in6* FUNC_2 (int,int ,int ) ;

struct sockaddr *
FUNC_3(in_port_t VAR_3, struct in_addr *VAR_4)
{
 struct sockaddr_in VAR_5;
 struct sockaddr_in6 *VAR_6;

 FUNC_0(&VAR_5, sizeof VAR_5);
 VAR_5.sin_family = VAR_0;
 VAR_5.sin_len = sizeof(VAR_5);
 VAR_5.sin_port = VAR_3;
 VAR_5.sin_addr = *VAR_4;

 VAR_6 = FUNC_2(sizeof *VAR_6, VAR_1,
  VAR_2);
 FUNC_1(&VAR_5, VAR_6);

 return (struct sockaddr *)VAR_6;
}
