
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int dummy; } ;
struct sdp_sock {int flags; scalar_t__ state; TYPE_1__* socket; } ;
struct TYPE_2__ {int * so_pcb; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct sdp_sock*) ;
 int FUNC_2 (struct sdp_sock*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (char*,struct sdp_sock*) ;
 int FUNC_4 (struct sdp_sock*) ;
 struct sdp_sock* FUNC_5 (struct socket*) ;

__attribute__((used)) static void
FUNC_6(struct socket *VAR_4)
{
 struct sdp_sock *VAR_5;

 VAR_5 = FUNC_5(VAR_4);
 FUNC_1(VAR_5);
 FUNC_0(VAR_5->socket != ((void*)0), ("sdp_detach: socket is NULL"));
 VAR_5->socket->so_pcb = ((void*)0);
 VAR_5->socket = ((void*)0);
 if (VAR_5->flags & (VAR_2 | VAR_0))
  FUNC_2(VAR_5);
 else if (VAR_5->flags & VAR_1 || VAR_5->state < VAR_3)
  FUNC_4(VAR_5);
 else
  FUNC_3("sdp_detach: Unexpected state, ssk %p.\n", VAR_5);
}
