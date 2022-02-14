
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct sockopt {int sopt_level; int sopt_name; int* sopt_val; int sopt_valsize; void* sopt_dir; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr_in6 {scalar_t__ sin6_port; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sockaddr {int sa_family; int sa_len; } ;
typedef int socklen_t ;
typedef int opt ;
typedef int old ;
typedef scalar_t__ bool_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;




 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_2 (struct sockopt*,int) ;
 int VAR_12 ;
 int FUNC_3 (struct sockaddr*,int ) ;
 int FUNC_4 (struct sockaddr*,int ,int ) ;
 int FUNC_5 (struct socket*,struct sockaddr*,int ) ;
 int FUNC_6 (struct socket*,struct sockopt*) ;
 int FUNC_7 (struct socket*,struct sockopt*) ;
 int FUNC_8 (struct socket*,struct sockaddr**) ;

int
FUNC_9(struct socket *VAR_13, struct sockaddr *VAR_14)
{
 int VAR_15, VAR_16, VAR_17;
 bool_t VAR_18 = VAR_1;
 struct sockaddr_in *VAR_19;



 struct sockopt VAR_20;
 int VAR_21, VAR_22, VAR_23;
 u_int16_t *VAR_24;
 socklen_t VAR_25;

 if (VAR_14 == ((void*)0)) {
  FUNC_1(VAR_13->so_vnet);
  VAR_16 = VAR_13->so_proto->pr_usrreqs->pru_sockaddr(VAR_13, &VAR_14);
  FUNC_0();
  if (VAR_16)
   return (VAR_16);
  VAR_18 = VAR_11;
  VAR_17 = VAR_14->sa_family;
  VAR_25 = VAR_14->sa_len;
  FUNC_4(VAR_14, 0, VAR_14->sa_len);
 } else {
  VAR_17 = VAR_14->sa_family;
  VAR_25 = VAR_14->sa_len;
 }

 switch (VAR_17) {
 case 129:
  VAR_21 = VAR_2;
  VAR_22 = VAR_6;
  VAR_23 = VAR_7;
  VAR_19 = (struct sockaddr_in *)VAR_14;
  VAR_24 = &VAR_19->sin_port;
  break;
 default:
  return (VAR_0);
 }

 VAR_14->sa_family = VAR_17;
 VAR_14->sa_len = VAR_25;

 if (*VAR_24 == 0) {
  FUNC_2(&VAR_20, sizeof(VAR_20));
  VAR_20.sopt_dir = VAR_9;
  VAR_20.sopt_level = VAR_21;
  VAR_20.sopt_name = VAR_22;
  VAR_20.sopt_val = &VAR_15;
  VAR_20.sopt_valsize = sizeof(VAR_15);
  VAR_16 = FUNC_6(VAR_13, &VAR_20);
  if (VAR_16) {
   goto out;
  }

  VAR_20.sopt_dir = VAR_10;
  VAR_20.sopt_val = &VAR_23;
  VAR_16 = FUNC_7(VAR_13, &VAR_20);
  if (VAR_16)
   goto out;
 }

 VAR_16 = FUNC_5(VAR_13, VAR_14, VAR_12);

 if (*VAR_24 == 0) {
  if (VAR_16) {
   VAR_20.sopt_dir = VAR_10;
   VAR_20.sopt_val = &VAR_15;
   FUNC_7(VAR_13, &VAR_20);
  }
 }
out:
 if (VAR_18)
  FUNC_3(VAR_14, VAR_8);

 return (VAR_16);
}
