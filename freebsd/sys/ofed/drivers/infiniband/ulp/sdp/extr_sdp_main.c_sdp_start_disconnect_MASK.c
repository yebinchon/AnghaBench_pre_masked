
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int so_options; scalar_t__ so_linger; int so_rcv; } ;
struct sdp_sock {scalar_t__ state; int flags; struct socket* socket; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct sdp_sock*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct sdp_sock* FUNC_4 (struct sdp_sock*) ;
 struct sdp_sock* FUNC_5 (struct sdp_sock*,int ) ;
 int FUNC_6 (struct sdp_sock*) ;
 int FUNC_7 (struct sdp_sock*) ;
 int FUNC_8 (struct socket*) ;
 int FUNC_9 (struct sdp_sock*) ;
 int FUNC_10 (struct socket*) ;

__attribute__((used)) static void
FUNC_11(struct sdp_sock *VAR_3)
{
 struct socket *VAR_4;
 int VAR_5;

 VAR_4 = VAR_3->socket;
 FUNC_1(VAR_3);
 FUNC_8(VAR_4);




 if (VAR_3->state < VAR_2) {
  VAR_3 = FUNC_4(VAR_3);
  FUNC_0(VAR_3 != ((void*)0),
      ("sdp_start_disconnect: sdp_close() returned NULL"));
 } else if ((VAR_4->so_options & VAR_1) && VAR_4->so_linger == 0) {
  VAR_3 = FUNC_5(VAR_3, 0);
  FUNC_0(VAR_3 != ((void*)0),
      ("sdp_start_disconnect: sdp_drop() returned NULL"));
 } else {
  FUNC_10(VAR_4);
  VAR_5 = FUNC_3(&VAR_4->so_rcv);
  FUNC_2(&VAR_4->so_rcv);
  FUNC_9(VAR_3);
  if (!(VAR_3->flags & VAR_0)) {
   if (VAR_5)
    FUNC_7(VAR_3);
   else
    FUNC_6(VAR_3);
  }
 }
}
