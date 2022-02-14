
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct socket*) ;
 struct inpcb* FUNC_2 (struct socket*) ;

__attribute__((used)) static void
FUNC_3(struct socket *VAR_0)
{
 struct inpcb *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1 != ((void*)0), ("rip6_close: inp == NULL"));

 FUNC_1(VAR_0);
}
