
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct tcphdr {int th_off; int th_flags; scalar_t__ th_seq; scalar_t__ th_ack; scalar_t__ th_win; } ;
struct tcpcb {int dummy; } ;
struct TYPE_3__ {scalar_t__ lro_len; scalar_t__ lro_csum; scalar_t__ len; } ;
struct mbuf {TYPE_1__ m_pkthdr; struct mbuf* m_nextpkt; } ;
struct lro_entry {scalar_t__ append_cnt; scalar_t__ p_len; scalar_t__ next_seq; scalar_t__ ack_seq; scalar_t__ window; scalar_t__ ulp_csum; TYPE_2__* m_tail; int mbuf_appended; int mbuf_cnt; scalar_t__ tsecr; scalar_t__ tsval; struct mbuf* m_head; } ;
struct lro_ctrl {scalar_t__ lro_ackcnt_lim; scalar_t__ lro_length_lim; } ;
struct TYPE_4__ {struct mbuf* m_next; } ;


 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct mbuf*,scalar_t__) ;
 int FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*) ;
 TYPE_2__* FUNC_8 (struct mbuf*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 struct tcphdr* FUNC_10 (struct lro_entry*,struct mbuf*) ;
 int FUNC_11 (struct tcpcb*,struct lro_ctrl*,struct lro_entry*,struct mbuf*,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct tcpcb*,struct lro_ctrl*,struct lro_entry*,struct mbuf*,int) ;

__attribute__((used)) static void
FUNC_13(struct tcpcb *VAR_6, struct lro_ctrl *VAR_7, struct lro_entry *VAR_8, int VAR_9)
{





 uint32_t *VAR_10;
 struct mbuf *VAR_11;
 struct tcphdr *VAR_12;
 uint16_t VAR_13, VAR_14;
 int VAR_15;







again:

 VAR_11 = VAR_8->m_head->m_nextpkt;
 if (VAR_11 == ((void*)0)) {

  return;
 }
 VAR_12 = FUNC_10(VAR_8, VAR_8->m_head);
 FUNC_0(VAR_12 != ((void*)0),
  ("le:%p m:%p th comes back NULL?", VAR_8, VAR_8->m_head));
 VAR_15 = (VAR_12->th_off << 2);
 VAR_15 -= sizeof(*VAR_12);
 VAR_10 = (uint32_t *)(VAR_12 + 1);
 if (VAR_15 != 0 && (FUNC_4(VAR_15 != VAR_1) ||
         (*VAR_10 != FUNC_9(VAR_2<<24|VAR_2<<16|
      VAR_3<<8|VAR_0)))) {




  VAR_8->m_head->m_nextpkt = VAR_11->m_nextpkt;
  FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
  goto again;
 }
 if ((VAR_12->th_flags & ~(VAR_4 | VAR_5)) != 0) {




  VAR_8->m_head->m_nextpkt = VAR_11->m_nextpkt;
  FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
  goto again;
 }
 while((VAR_11 = VAR_8->m_head->m_nextpkt) != ((void*)0)) {




  VAR_8->m_head->m_nextpkt = VAR_11->m_nextpkt;
  VAR_11->m_nextpkt = ((void*)0);

  VAR_13 = VAR_11->m_pkthdr.lro_len;
  VAR_12 = FUNC_10(VAR_8, VAR_11);
  FUNC_0(VAR_12 != ((void*)0),
   ("le:%p m:%p th comes back NULL?", VAR_8, VAR_11));
  VAR_10 = (uint32_t *)(VAR_12 + 1);
  VAR_15 = (VAR_12->th_off << 2);
  VAR_15 -= sizeof(*VAR_12);
  if (VAR_6 && VAR_9) {
   FUNC_11(VAR_6, VAR_7, VAR_8, VAR_11, 1, 0, 0, 0, 0);
  }
  if (VAR_8->append_cnt >= VAR_7->lro_ackcnt_lim) {
   if (VAR_6 && VAR_9) {
    FUNC_11(VAR_6, VAR_7, VAR_8, VAR_11, 2, 0, 0, 0, 0);
   }
   FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
   goto again;
  }
  if (VAR_8->p_len > (VAR_7->lro_length_lim - VAR_13)) {

   if (VAR_6 && VAR_9) {
    FUNC_11(VAR_6, VAR_7, VAR_8, VAR_11, 3, VAR_13, 0, 0, 0);
   }
   FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
   goto again;
  }
  if (VAR_15 != 0 && (FUNC_4(VAR_15 != VAR_1) ||
          (*VAR_10 != FUNC_9(VAR_2<<24|VAR_2<<16|
       VAR_3<<8|VAR_0)))) {







   FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
   goto again;
  }
  if ((VAR_12->th_flags & ~(VAR_4 | VAR_5)) != 0) {
   FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
   goto again;
  }
  if (VAR_15 != 0) {
   uint32_t VAR_16 = FUNC_9(*(VAR_10 + 1));

   if (FUNC_2(VAR_8->tsval, VAR_16)) {
    FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
    goto again;
   }
   VAR_8->tsval = VAR_16;
   VAR_8->tsecr = *(VAR_10 + 2);
  }

  if (FUNC_4(FUNC_9(VAR_12->th_seq) != VAR_8->next_seq ||
        (VAR_13 == 0 &&
         VAR_8->ack_seq == VAR_12->th_ack &&
         VAR_8->window == VAR_12->th_win))) {

   if (VAR_6 && VAR_9) {
    FUNC_11(VAR_6, VAR_7, VAR_8, VAR_11, 4, VAR_13,
         FUNC_9(VAR_12->th_seq),
         VAR_12->th_ack,
         VAR_12->th_win);
   }
   FUNC_12(VAR_6, VAR_7, VAR_8, VAR_11, VAR_9);
   goto again;
  }
  if (VAR_13 || FUNC_1(FUNC_9(VAR_12->th_ack), FUNC_9(VAR_8->ack_seq))) {
   VAR_8->next_seq += VAR_13;
   VAR_8->ack_seq = VAR_12->th_ack;
   VAR_8->window = VAR_12->th_win;
  } else if (VAR_12->th_ack == VAR_8->ack_seq) {
   VAR_8->window = FUNC_3(VAR_8->window, VAR_12->th_win);
  }
  VAR_14 = VAR_11->m_pkthdr.lro_csum;
  VAR_8->ulp_csum += VAR_14;
  if (VAR_13 == 0) {
   VAR_8->append_cnt++;
   VAR_8->mbuf_cnt--;
   if (VAR_6 && VAR_9) {
    FUNC_11(VAR_6, VAR_7, VAR_8, VAR_11, 5, VAR_13,
         FUNC_9(VAR_12->th_seq),
         VAR_12->th_ack,
         VAR_12->th_win);
   }
   FUNC_7(VAR_11);
   continue;
  }
  VAR_8->append_cnt++;
  VAR_8->mbuf_appended++;
  VAR_8->p_len += VAR_13;





  FUNC_5(VAR_11, VAR_11->m_pkthdr.len - VAR_13);
  if (VAR_6 && VAR_9) {
   FUNC_11(VAR_6, VAR_7, VAR_8, VAR_11, 6, VAR_13,
         FUNC_9(VAR_12->th_seq),
         VAR_12->th_ack,
         VAR_12->th_win);
  }
  FUNC_6(VAR_11);
  VAR_8->m_tail->m_next = VAR_11;
  VAR_8->m_tail = FUNC_8(VAR_11);
 }
}
