
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpcb {int dummy; } ;
struct inpcb {scalar_t__ inp_ppcb; } ;


 int FUNC_0 (struct inpcb*) ;

struct tcpcb *
FUNC_1(struct inpcb *VAR_0)
{

 FUNC_0(VAR_0);
 return ((struct tcpcb *)VAR_0->inp_ppcb);
}
