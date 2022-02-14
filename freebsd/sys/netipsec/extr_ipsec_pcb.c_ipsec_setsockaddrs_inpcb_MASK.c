
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* s6_addr16; } ;
struct sockaddr_in6 {int sin6_len; int sin_len; int sin_port; int sin_addr; void* sin_family; void* sin6_scope_id; TYPE_1__ sin6_addr; int sin6_port; void* sin6_family; } ;
union sockaddr_union {struct sockaddr_in6 sin; struct sockaddr_in6 sin6; } ;
typedef scalar_t__ u_int ;
struct sockaddr_in {int sin6_len; int sin_len; int sin_port; int sin_addr; void* sin_family; void* sin6_scope_id; TYPE_1__ sin6_addr; int sin6_port; void* sin6_family; } ;
struct inpcb {int inp_vflag; int inp_fport; int inp_faddr; int inp_lport; int inp_laddr; TYPE_1__ in6p_faddr; TYPE_1__ in6p_laddr; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct sockaddr_in6*,int) ;
 void* FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct inpcb *VAR_5, union sockaddr_union *VAR_6,
    union sockaddr_union *VAR_7, u_int VAR_8)
{
}
