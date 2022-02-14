
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct netbuf {scalar_t__ buf; } ;





 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;

int
FUNC_3(struct netbuf *VAR_4)
{
 struct sockaddr *VAR_5 = (struct sockaddr *)VAR_4->buf;
 struct sockaddr_in *VAR_6;




 switch (VAR_5->sa_family) {
 case 130:
  if (!VAR_3)
   return 0;
  VAR_6 = (struct sockaddr_in *)VAR_5;
         return ((VAR_6->sin_addr.s_addr == FUNC_1(VAR_0)) &&
      (FUNC_2(VAR_6->sin_port) < VAR_1));
 case 128:
  return 1;
 default:
  break;
 }

 return 0;
}
