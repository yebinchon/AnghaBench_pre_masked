
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct mbuf {int dummy; } ;
struct inpcbinfo {int ipi_hashmask; struct inpcbhead* ipi_hashbase; } ;
struct inpcbhead {int dummy; } ;
struct TYPE_2__ {int s_addr; } ;
struct inpcb {int inp_flags; int inp_vflag; int inp_fport; int inp_lport; TYPE_1__ inp_faddr; int in6p_faddr; struct inpcbinfo* inp_pcbinfo; } ;


 int FUNC_0 (struct inpcbhead*,struct inpcb*,int ) ;
 int FUNC_1 (struct inpcb*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inpcbinfo*) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (struct inpcb*) ;
 int FUNC_8 (struct inpcb*,struct mbuf*) ;
 int VAR_2 ;

void
FUNC_9(struct inpcb *VAR_3, struct mbuf *VAR_4)
{
 struct inpcbinfo *VAR_5 = VAR_3->inp_pcbinfo;
 struct inpcbhead *VAR_6;
 u_int32_t VAR_7;

 FUNC_5(VAR_3);
 FUNC_3(VAR_5);

 FUNC_6(VAR_3->inp_flags & VAR_0,
     ("in_pcbrehash: !INP_INHASHLIST"));






 VAR_7 = VAR_3->inp_faddr.s_addr;

 VAR_6 = &VAR_5->ipi_hashbase[FUNC_4(VAR_7,
  VAR_3->inp_lport, VAR_3->inp_fport, VAR_5->ipi_hashmask)];

 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_6, VAR_3, VAR_2);







}
