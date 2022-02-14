
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(const struct sockaddr *VAR_2, const struct sockaddr *VAR_3,
    int VAR_4)
{
 int VAR_5;
 if (0 != (VAR_5 = (VAR_2->sa_family - VAR_3->sa_family)))
  return VAR_5;

 if (VAR_2->sa_family == VAR_0) {
  const struct sockaddr_in *VAR_6, *VAR_7;
  VAR_6 = (const struct sockaddr_in *)VAR_2;
  VAR_7 = (const struct sockaddr_in *)VAR_3;
  if (VAR_6->sin_addr.s_addr < VAR_7->sin_addr.s_addr)
   return -1;
  else if (VAR_6->sin_addr.s_addr > VAR_7->sin_addr.s_addr)
   return 1;
  else if (VAR_4 &&
      (VAR_5 = ((int)VAR_6->sin_port - (int)VAR_7->sin_port)))
   return VAR_5;
  else
   return 0;
 }
 return 1;
}
