
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int dummy; } ;


 int FUNC_0 (struct inpcb*) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct socket*) ;
 struct inpcb* FUNC_4 (struct socket*) ;

__attribute__((used)) static int
FUNC_5(struct socket *VAR_0)
{
 struct inpcb *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 FUNC_2(VAR_1 != ((void*)0), ("rip6_shutdown: inp == NULL"));

 FUNC_0(VAR_1);
 FUNC_3(VAR_0);
 FUNC_1(VAR_1);
 return (0);
}
