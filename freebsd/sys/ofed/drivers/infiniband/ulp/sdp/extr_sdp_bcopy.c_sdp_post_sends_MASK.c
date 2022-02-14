
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct mbuf* sb_sndptr; struct mbuf* sb_mb; } ;
struct socket {TYPE_1__ so_snd; } ;
struct sdp_sock {scalar_t__ recv_request_head; scalar_t__ state; int flags; int nagle_last_unacked; int nagle_timer; struct socket* socket; scalar_t__ recv_request; scalar_t__ recv_bytes; int rx_ring; int id; } ;
struct mbuf {struct mbuf* m_next; struct mbuf* m_nextpkt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,int,int ,struct sdp_sock*) ;
 scalar_t__ FUNC_5 (struct sdp_sock*) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,struct mbuf*) ;
 struct mbuf* FUNC_8 (struct socket*,scalar_t__,int) ;
 struct mbuf* FUNC_9 (struct socket*,int) ;
 struct mbuf* FUNC_10 (struct socket*,int) ;
 int FUNC_11 (struct sdp_sock*) ;
 int FUNC_12 (struct socket*,char*) ;
 scalar_t__ FUNC_13 (struct sdp_sock*,struct mbuf*) ;
 int VAR_8 ;
 int FUNC_14 (struct sdp_sock*,int ) ;
 int FUNC_15 (struct sdp_sock*,struct mbuf*) ;
 int FUNC_16 (struct sdp_sock*) ;
 scalar_t__ FUNC_17 (struct sdp_sock*,int) ;
 int VAR_9 ;
 int FUNC_18 (struct sdp_sock*) ;
 scalar_t__ FUNC_19 (int) ;

void
FUNC_20(struct sdp_sock *VAR_10, int VAR_11)
{
 struct mbuf *VAR_12;
 int VAR_13 = 0;
 struct socket *VAR_14;
 int VAR_15;

 VAR_14 = VAR_10->socket;
 if (FUNC_19(!VAR_10->id)) {
  if (VAR_14->so_snd.sb_sndptr) {
   FUNC_12(VAR_10->socket,
    "Send on socket without cmid ECONNRESET.\n");
   FUNC_14(VAR_10, VAR_0);
  }
  return;
 }
again:
 if (FUNC_16(VAR_10) < VAR_4 / 2)
  FUNC_17(VAR_10, 1);

 if (VAR_10->recv_request &&
     FUNC_6(VAR_10->rx_ring) >= VAR_10->recv_request_head &&
     FUNC_18(VAR_10) >= VAR_2 &&
     FUNC_16(VAR_10)) {
  VAR_12 = FUNC_8(VAR_14,
      VAR_10->recv_bytes - VAR_1, VAR_11);
  if (VAR_12 == ((void*)0))
   goto allocfail;
  VAR_10->recv_request = 0;
  FUNC_15(VAR_10, VAR_12);
  VAR_13++;
 }

 if (FUNC_18(VAR_10) <= VAR_2 &&
     FUNC_16(VAR_10) && VAR_14->so_snd.sb_sndptr &&
     FUNC_13(VAR_10, VAR_14->so_snd.sb_sndptr)) {
  FUNC_1(VAR_9);
 }

 while (FUNC_18(VAR_10) > VAR_2 &&
     FUNC_16(VAR_10) && (VAR_12 = VAR_14->so_snd.sb_sndptr) &&
     FUNC_13(VAR_10, VAR_12)) {
  struct mbuf *VAR_16;

  FUNC_2(&VAR_14->so_snd);
  VAR_14->so_snd.sb_sndptr = VAR_12->m_nextpkt;
  VAR_14->so_snd.sb_mb = VAR_12->m_nextpkt;
  VAR_12->m_nextpkt = ((void*)0);
  FUNC_0(&VAR_14->so_snd);
  for (VAR_16 = VAR_12; VAR_16 != ((void*)0); VAR_16 = VAR_16->m_next)
   FUNC_7(&VAR_14->so_snd, VAR_16);
  FUNC_3(&VAR_14->so_snd);
  FUNC_15(VAR_10, VAR_12);
  VAR_13++;
 }

 if (FUNC_5(VAR_10) && VAR_10->state >= VAR_5 &&
     VAR_10->state < VAR_6) {
  VAR_12 = FUNC_9(VAR_10->socket, VAR_11);
  if (VAR_12 == ((void*)0))
   goto allocfail;
  FUNC_15(VAR_10, VAR_12);

  FUNC_1(VAR_7);
  VAR_13++;
 }






 if ((VAR_10->flags & VAR_3) && !VAR_14->so_snd.sb_sndptr &&
     FUNC_18(VAR_10) > 1) {
  VAR_12 = FUNC_10(VAR_14, VAR_11);
  if (VAR_12 == ((void*)0))
   goto allocfail;
  VAR_10->flags &= ~VAR_3;
  FUNC_15(VAR_10, VAR_12);
  VAR_13++;
 }
 VAR_15 = (FUNC_16(VAR_10) <= VAR_2);
 if (VAR_13 || VAR_15) {
  if (VAR_15)
   FUNC_11(VAR_10);
  if (FUNC_17(VAR_10, VAR_15))
   goto again;
 }
 return;

allocfail:
 VAR_10->nagle_last_unacked = -1;
 FUNC_4(&VAR_10->nagle_timer, 1, VAR_8, VAR_10);
 return;
}
