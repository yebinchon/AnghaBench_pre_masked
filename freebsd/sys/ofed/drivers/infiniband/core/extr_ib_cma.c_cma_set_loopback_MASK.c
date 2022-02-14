
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr_ib {int sib_addr; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sockaddr *VAR_1)
{
 switch (VAR_1->sa_family) {
 case 129:
  ((struct sockaddr_in *) VAR_1)->sin_addr.s_addr = FUNC_0(VAR_0);
  break;
 case 128:
  FUNC_2(&((struct sockaddr_in6 *) VAR_1)->sin6_addr,
         0, 0, 0, FUNC_0(1));
  break;
 default:
  FUNC_1(&((struct sockaddr_ib *) VAR_1)->sib_addr,
       0, 0, 0, FUNC_0(1));
  break;
 }
}
