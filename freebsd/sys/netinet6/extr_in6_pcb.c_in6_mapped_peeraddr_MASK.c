
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sockaddr {int dummy; } ;
struct inpcb {int inp_vflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct socket*,struct sockaddr**) ;
 int FUNC_2 (struct sockaddr**) ;
 int FUNC_3 (struct socket*,struct sockaddr**) ;
 struct inpcb* FUNC_4 (struct socket*) ;

int
FUNC_5(struct socket *VAR_2, struct sockaddr **VAR_3)
{
 struct inpcb *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_2);
 FUNC_0(VAR_4 != ((void*)0), ("in6_mapped_peeraddr: inp == NULL"));
 VAR_5 = FUNC_1(VAR_2, VAR_3);

 return VAR_5;
}
