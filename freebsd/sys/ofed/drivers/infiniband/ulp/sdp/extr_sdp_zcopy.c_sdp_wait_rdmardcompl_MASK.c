
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_srcavail_state {int abort_flags; scalar_t__ bytes_acked; scalar_t__ bytes_sent; } ;
struct socket {int sk_sleep; } ;
struct sdp_sock {scalar_t__ qp_active; struct socket* socket; scalar_t__ rx_sa; struct tx_srcavail_state* tx_sa; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct sdp_sock*) ;
 int FUNC_4 (struct sdp_sock*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (struct socket*,char*) ;
 int FUNC_7 (struct socket*,char*,...) ;
 int FUNC_8 (struct socket*,int *,char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct socket*,long*,int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_12(struct sdp_sock *VAR_16, long *VAR_17,
  int VAR_18)
{
 struct socket *VAR_19 = VAR_16->socket;
 int VAR_20 = 0;
 long VAR_21 = 0;
 long VAR_22 = *VAR_17;
 struct tx_srcavail_state *VAR_23 = VAR_16->tx_sa;
 FUNC_0(VAR_12);

 FUNC_7(VAR_19, "sleep till RdmaRdCompl. timeo = %ld.\n", *VAR_17);
 FUNC_8(VAR_19, ((void*)0), "Going to sleep");
 while (VAR_16->qp_active) {
  FUNC_5(VAR_19->sk_sleep, &VAR_12, VAR_5);

  if (FUNC_11(!*VAR_17)) {
   VAR_20 = -VAR_3;
   VAR_23->abort_flags |= VAR_10;
   FUNC_8(VAR_19, ((void*)0), "timeout");
   FUNC_1(VAR_15);
   break;
  }

  else if (VAR_23->bytes_acked > VAR_23->bytes_sent) {
   VAR_20 = -VAR_2;
   FUNC_7(VAR_19, "acked bytes > sent bytes\n");
   VAR_23->abort_flags |= VAR_7;
   break;
  }

  if (VAR_23->abort_flags & VAR_9) {
   FUNC_8(VAR_19, ((void*)0), "Aborting SrcAvail sending");
   FUNC_1(VAR_14);
   VAR_20 = -VAR_0;
   break ;
  }

  if (!VAR_18) {
   if (FUNC_9(VAR_11)) {
    VAR_20 = -VAR_1;
    FUNC_8(VAR_19, ((void*)0), "signalled");
    VAR_23->abort_flags |= VAR_8;
    break;
   }

   if (VAR_16->rx_sa && (VAR_23->bytes_acked < VAR_23->bytes_sent)) {
    FUNC_7(VAR_19, "Crossing SrcAvail - aborting this\n");
    VAR_23->abort_flags |= VAR_6;
    FUNC_1(VAR_13);
    VAR_20 = -VAR_3;
    break ;
   }
  }

  FUNC_4(VAR_16);

  FUNC_10(VAR_19, &VAR_22,
    VAR_23->abort_flags &&
    VAR_16->rx_sa &&
    (VAR_23->bytes_acked < VAR_23->bytes_sent) &&
    VAR_21);
  FUNC_7(VAR_16->socket, "woke up sleepers\n");

  FUNC_3(VAR_16);

  if (VAR_23->bytes_acked == VAR_23->bytes_sent)
   break;

  if (VAR_21) {
   VAR_21 -= VAR_22;
   VAR_22 = *VAR_17;
   if (VAR_22 != VAR_4 &&
       (VAR_22 -= VAR_21) < 0)
    VAR_22 = 0;
   VAR_21 = 0;
  }
  *VAR_17 = VAR_22;
 }

 FUNC_2(VAR_19->sk_sleep, &VAR_12);

 FUNC_7(VAR_19, "Finished waiting - RdmaRdCompl: %d/%d bytes, flags: 0x%x\n",
   VAR_23->bytes_acked, VAR_23->bytes_sent, VAR_23->abort_flags);

 if (!VAR_16->qp_active) {
  FUNC_6(VAR_19, "QP destroyed while waiting\n");
  return -VAR_2;
 }
 return VAR_20;
}
