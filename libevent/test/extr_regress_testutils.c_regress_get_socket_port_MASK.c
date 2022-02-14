
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {scalar_t__ ss_family; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int ss ;
typedef int evutil_socket_t ;
typedef int ev_socklen_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct sockaddr*,int*) ;
 int FUNC_1 (int ) ;

int
FUNC_2(evutil_socket_t VAR_2)
{
 struct sockaddr_storage VAR_3;
 ev_socklen_t VAR_4 = sizeof(VAR_3);
 if (FUNC_0(VAR_2, (struct sockaddr*)&VAR_3, &VAR_4) != 0)
  return -1;
 if (VAR_3.ss_family == VAR_0)
  return FUNC_1( ((struct sockaddr_in*)&VAR_3)->sin_port);
 else if (VAR_3.ss_family == VAR_1)
  return FUNC_1( ((struct sockaddr_in6*)&VAR_3)->sin6_port);
 else
  return -1;
}
