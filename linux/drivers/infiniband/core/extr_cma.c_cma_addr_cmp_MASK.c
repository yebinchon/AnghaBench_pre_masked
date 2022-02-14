
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_ib {int sib_addr; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(const struct sockaddr *VAR_1, const struct sockaddr *VAR_2)
{
 if (VAR_1->sa_family != VAR_2->sa_family)
  return -1;

 switch (VAR_1->sa_family) {
 case 129:
  return ((struct sockaddr_in *)VAR_1)->sin_addr.s_addr !=
         ((struct sockaddr_in *)VAR_2)->sin_addr.s_addr;
 case 128: {
  struct sockaddr_in6 *VAR_3 = (struct sockaddr_in6 *)VAR_1;
  struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6 *)VAR_2;
  bool VAR_5;

  if (FUNC_1(&VAR_3->sin6_addr,
       &VAR_4->sin6_addr))
   return 1;
  VAR_5 = FUNC_2(&VAR_4->sin6_addr) &
        VAR_0;

  return VAR_5 ? (VAR_3->sin6_scope_id !=
         VAR_4->sin6_scope_id) :
        0;
 }

 default:
  return FUNC_0(&((struct sockaddr_ib *) VAR_1)->sib_addr,
       &((struct sockaddr_ib *) VAR_2)->sib_addr);
 }
}
