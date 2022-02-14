
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {scalar_t__ sin6_scope_id; int sin6_addr; } ;
struct TYPE_2__ {scalar_t__* s6id_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int) ;

int
FUNC_4(struct sockaddr_in6 *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_2(&VAR_8->sin6_addr);
 if (VAR_9 == VAR_2)
  return (VAR_8->sin6_scope_id ? VAR_1: 0);
 if (FUNC_1(&VAR_8->sin6_addr) &&
     VAR_9 != VAR_4 &&
     VAR_9 != VAR_3) {
  if (VAR_8->sin6_scope_id == 0 && VAR_5 != 0)
   VAR_8->sin6_scope_id = VAR_7.s6id_list[VAR_9];
  return (0);
 }






 if (FUNC_0(&VAR_8->sin6_addr)) {
  if (VAR_8->sin6_scope_id == 0)
   VAR_8->sin6_scope_id = FUNC_3(VAR_6, VAR_9);
  else if (VAR_8->sin6_scope_id != FUNC_3(VAR_6, VAR_9))
   return (VAR_0);
 }

 if (VAR_8->sin6_scope_id != 0)
  return (0);
 if (VAR_5 != 0)
  VAR_8->sin6_scope_id = VAR_7.s6id_list[VAR_9];

 return (VAR_8->sin6_scope_id ? 0: VAR_0);
}
