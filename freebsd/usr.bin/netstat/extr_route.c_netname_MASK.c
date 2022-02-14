
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr {int sa_family; } ;
struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; } ;




 int VAR_0 ;
 char const* FUNC_0 (int ,int ) ;
 char const* FUNC_1 (int ,int ) ;
 TYPE_2__* FUNC_2 (struct sockaddr*) ;
 int FUNC_3 (struct sockaddr*) ;

const char *
FUNC_4(struct sockaddr *VAR_1, struct sockaddr *VAR_2)
{
 switch (VAR_1->sa_family) {
 case 129:
  if (VAR_2 != ((void*)0))
   return (FUNC_0(FUNC_2(VAR_1)->sin_addr.s_addr,
       FUNC_2(VAR_2)->sin_addr.s_addr));
  else
   return (FUNC_0(FUNC_2(VAR_1)->sin_addr.s_addr,
       VAR_0));
  break;




 default:
  return (((void*)0));
 }
}
