
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ypbind_binding_port; int ypbind_binding_addr; } ;
struct TYPE_7__ {scalar_t__ ypsetdom_vers; int ypsetdom_domain; TYPE_2__ ypsetdom_binding; } ;
typedef TYPE_3__ ypbind_setdom ;
typedef int u_short ;
typedef int u_int32_t ;
struct TYPE_5__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_1__ sin_addr; int sin_family; } ;
typedef int SVCXPRT ;
typedef int CLIENT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;



 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sockaddr_in*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct sockaddr_in*,int) ;
 scalar_t__ FUNC_5 (int ,char) ;
 struct sockaddr_in* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char*,int ) ;
 int VAR_5 ;

void *
FUNC_9(SVCXPRT *VAR_6, ypbind_setdom *VAR_7, CLIENT *VAR_8)
{
 struct sockaddr_in *VAR_9, VAR_10;
 static char *VAR_11 = ((void*)0);

 if (FUNC_5(VAR_7->ypsetdom_domain, '/')) {
  FUNC_8(VAR_3, "Domain name '%s' has embedded slash -- rejecting.", VAR_7->ypsetdom_domain);

  return(((void*)0));
 }
 VAR_9 = FUNC_6(VAR_6);

 switch (VAR_5) {
 case 129:
  if (VAR_9->sin_addr.s_addr != FUNC_1(VAR_1)) {
   FUNC_7(VAR_6);
   return(((void*)0));
  }
  break;
 case 130:
  break;
 case 128:
 default:
  FUNC_7(VAR_6);
  return(((void*)0));
 }

 if (FUNC_3(VAR_9->sin_port) >= VAR_2) {
  FUNC_7(VAR_6);
  return(((void*)0));
 }

 if (VAR_7->ypsetdom_vers != VAR_4) {
  FUNC_7(VAR_6);
  return(((void*)0));
 }

 FUNC_0(&VAR_10, sizeof VAR_10);
 VAR_10.sin_family = VAR_0;
 FUNC_2(&VAR_10.sin_addr.s_addr,
     &VAR_7->ypsetdom_binding.ypbind_binding_addr,
     sizeof(u_int32_t));
 FUNC_2(&VAR_10.sin_port,
     &VAR_7->ypsetdom_binding.ypbind_binding_port,
     sizeof(u_short));
 FUNC_4(VAR_7->ypsetdom_domain, &VAR_10, 1);

 return((void *) &VAR_11);
}
