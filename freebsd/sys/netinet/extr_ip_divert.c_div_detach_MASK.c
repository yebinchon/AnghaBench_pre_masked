
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct inpcb*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (struct inpcb*) ;
 int FUNC_5 (struct inpcb*) ;
 struct inpcb* FUNC_6 (struct socket*) ;

__attribute__((used)) static void
FUNC_7(struct socket *VAR_1)
{
 struct inpcb *VAR_2;

 VAR_2 = FUNC_6(VAR_1);
 FUNC_3(VAR_2 != ((void*)0), ("div_detach: inp == NULL"));
 FUNC_0(&VAR_0);
 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(&VAR_0);
}
