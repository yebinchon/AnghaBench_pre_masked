
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {int * s6_addr16; } ;
struct sockaddr_in6 {int sin6_scope_id; TYPE_1__ sin6_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(struct sockaddr_in6 *VAR_2, int VAR_3)
{
 u_int32_t VAR_4;

 if ((VAR_4 = VAR_2->sin6_scope_id) == 0 && VAR_3)
  VAR_4 = FUNC_4(&VAR_2->sin6_addr);

 if (VAR_4 != 0 &&
     (FUNC_1(&VAR_2->sin6_addr) ||
     FUNC_0(&VAR_2->sin6_addr))) {






  if (VAR_1 < VAR_4 || FUNC_3(VAR_4) == ((void*)0))
   return (VAR_0);


  VAR_2->sin6_addr.s6_addr16[1] = FUNC_2(VAR_4 & 0xffff);
  VAR_2->sin6_scope_id = 0;
 }

 return 0;
}
