
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct inpcb {int * inp_socket; } ;
struct epoch_tracker {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct inpcb*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct epoch_tracker) ;
 int FUNC_4 (struct epoch_tracker) ;
 int VAR_0 ;
 struct inpcb* FUNC_5 (struct socket*) ;
 int FUNC_6 (struct socket*,struct inpcb*) ;

__attribute__((used)) static void
FUNC_7(struct socket *VAR_1)
{
 struct inpcb *VAR_2;
 int VAR_3 = 0;
 struct epoch_tracker VAR_4;

 VAR_2 = FUNC_5(VAR_1);
 FUNC_2(VAR_2 != ((void*)0), ("tcp_usr_detach: inp == NULL"));
 if (!FUNC_0(&VAR_0)) {
  FUNC_3(VAR_4);
  VAR_3 = 1;
 }
 FUNC_1(VAR_2);
 FUNC_2(VAR_2->inp_socket != ((void*)0),
     ("tcp_usr_detach: inp_socket == NULL"));
 FUNC_6(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_4(VAR_4);
}
