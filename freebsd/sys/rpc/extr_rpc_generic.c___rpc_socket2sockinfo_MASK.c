
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockopt {int* sopt_val; int sopt_valsize; int * sopt_td; int sopt_name; int sopt_level; int sopt_dir; } ;
struct socket {TYPE_2__* so_proto; int so_vnet; } ;
struct sockaddr {scalar_t__ sa_family; int sa_len; } ;
struct __rpc_sockinfo {int si_proto; int si_socktype; scalar_t__ si_af; int si_alen; } ;
typedef scalar_t__ sa_family_t ;
struct TYPE_4__ {TYPE_1__* pr_usrreqs; } ;
struct TYPE_3__ {int (* pru_sockaddr ) (struct socket*,struct sockaddr**) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct sockaddr*,int ) ;
 int FUNC_3 (struct socket*,struct sockopt*) ;
 int FUNC_4 (struct socket*,struct sockaddr**) ;

int
FUNC_5(struct socket *VAR_9, struct __rpc_sockinfo *VAR_10)
{
 int VAR_11, VAR_12;
 struct sockaddr *VAR_13;
 sa_family_t VAR_14;
 struct sockopt VAR_15;
 int VAR_16;

 FUNC_1(VAR_9->so_vnet);
 VAR_16 = VAR_9->so_proto->pr_usrreqs->pru_sockaddr(VAR_9, &VAR_13);
 FUNC_0();
 if (VAR_16)
  return 0;

 VAR_10->si_alen = VAR_13->sa_len;
 VAR_14 = VAR_13->sa_family;
 FUNC_2(VAR_13, VAR_3);

 VAR_15.sopt_dir = VAR_7;
 VAR_15.sopt_level = VAR_6;
 VAR_15.sopt_name = VAR_8;
 VAR_15.sopt_val = &VAR_11;
 VAR_15.sopt_valsize = sizeof VAR_11;
 VAR_15.sopt_td = ((void*)0);
 VAR_16 = FUNC_3(VAR_9, &VAR_15);
 if (VAR_16)
  return 0;


 if (VAR_14 != VAR_0) {
  if (VAR_11 == VAR_5)
   VAR_12 = VAR_1;
  else if (VAR_11 == VAR_4)
   VAR_12 = VAR_2;
  else
   return 0;
 } else
  VAR_12 = 0;

 VAR_10->si_af = VAR_14;
 VAR_10->si_proto = VAR_12;
 VAR_10->si_socktype = VAR_11;

 return 1;
}
