
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int in6p_icmp6filt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 struct socket* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct inpcb*) ;
 int FUNC_6 (struct inpcb*) ;
 int FUNC_7 () ;
 struct inpcb* FUNC_8 (struct socket*) ;

__attribute__((used)) static void
FUNC_9(struct socket *VAR_3)
{
 struct inpcb *VAR_4;

 VAR_4 = FUNC_8(VAR_3);
 FUNC_3(VAR_4 != ((void*)0), ("rip6_detach: inp == NULL"));

 if (VAR_3 == VAR_1 && &FUNC_7)
  FUNC_7();

 FUNC_0(&VAR_2);
 FUNC_2(VAR_4);
 FUNC_4(VAR_4->in6p_icmp6filt, VAR_0);
 FUNC_5(VAR_4);
 FUNC_6(VAR_4);
 FUNC_1(&VAR_2);
}
