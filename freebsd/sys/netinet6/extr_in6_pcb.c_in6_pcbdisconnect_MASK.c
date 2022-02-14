
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inpcb {int inp_flow; scalar_t__ inp_fport; int in6p_faddr; int inp_pcbinfo; } ;
typedef int caddr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct inpcb*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct inpcb*) ;

void
FUNC_4(struct inpcb *VAR_1)
{

 FUNC_1(VAR_1);
 FUNC_0(VAR_1->inp_pcbinfo);

 FUNC_2((caddr_t)&VAR_1->in6p_faddr, sizeof(VAR_1->in6p_faddr));
 VAR_1->inp_fport = 0;

 VAR_1->inp_flow &= ~VAR_0;
 FUNC_3(VAR_1);
}
