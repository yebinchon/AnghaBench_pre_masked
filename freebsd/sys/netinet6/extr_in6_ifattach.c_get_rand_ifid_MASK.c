
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct prison {int pr_mtx; int pr_hostname; } ;
struct in6_addr {int * s6_addr; } ;
struct ifnet {int dummy; } ;
typedef int ctxt ;
struct TYPE_4__ {TYPE_1__* td_ucred; } ;
struct TYPE_3__ {struct prison* cr_prison; } ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int) ;
 TYPE_2__* VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(struct ifnet *VAR_3, struct in6_addr *VAR_4)
{
 MD5_CTX VAR_5;
 struct prison *VAR_6;
 u_int8_t VAR_7[16];
 int VAR_8;

 VAR_6 = VAR_2->td_ucred->cr_prison;
 FUNC_6(&VAR_6->pr_mtx);
 VAR_8 = FUNC_8(VAR_6->pr_hostname);
 FUNC_5(&VAR_5, sizeof(VAR_5));
 FUNC_2(&VAR_5);
 FUNC_3(&VAR_5, VAR_6->pr_hostname, VAR_8);
 FUNC_7(&VAR_6->pr_mtx);
 FUNC_1(VAR_7, &VAR_5);


 FUNC_4(VAR_7, &VAR_4->s6_addr[8], 8);


 VAR_4->s6_addr[8] &= ~VAR_0;
 VAR_4->s6_addr[8] |= VAR_1;


 FUNC_0(VAR_4);

 return 0;
}
