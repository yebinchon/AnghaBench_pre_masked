
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_label; } ;
struct inpcb {int inp_label; } ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (int ,struct socket*,int ,struct inpcb*,int ) ;
 int FUNC_2 (struct socket*) ;
 int VAR_0 ;

void
FUNC_3(struct socket *VAR_1, struct inpcb *VAR_2)
{

 FUNC_0(VAR_2);
 FUNC_2(VAR_1);

 FUNC_1(VAR_0, VAR_1, VAR_1->so_label, VAR_2,
     VAR_2->inp_label);
}
