
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr_un {char* sun_path; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;





 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct sockaddr*,int ) ;
 int FUNC_3 (struct socket*,struct sockaddr**) ;

int
FUNC_4(struct socket *VAR_2)
{
 struct sockaddr *VAR_3;
 int VAR_4, VAR_5;

 FUNC_1(VAR_2->so_vnet);
 VAR_4 = VAR_2->so_proto->pr_usrreqs->pru_sockaddr(VAR_2, &VAR_3);
 FUNC_0();
 if (VAR_4)
  return (0);

 switch (VAR_3->sa_family) {
  case 130:
   VAR_5 = (((struct sockaddr_in *) VAR_3)->sin_port != 0);
   break;





  case 128:

   VAR_5 = (((struct sockaddr_un *) VAR_3)->sun_path[0] != '\0');
   break;
  default:
   VAR_5 = VAR_0;
   break;
 }

 FUNC_2(VAR_3, VAR_1);

 return VAR_5;
}
