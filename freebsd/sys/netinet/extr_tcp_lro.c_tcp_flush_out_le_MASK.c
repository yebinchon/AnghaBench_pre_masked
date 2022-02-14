
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct tcphdr {int th_sum; int th_win; int th_ack; } ;
struct tcpcb {int dummy; } ;
struct lro_entry {int append_cnt; int eh_type; scalar_t__ timestamp; int tsecr; int ulp_csum; TYPE_2__* m_head; int tsval; int window; int ack_seq; int p_len; struct ip* le_ip4; struct ip6_hdr* le_ip6; } ;
struct lro_ctrl {int lro_queued; TYPE_3__* ifp; } ;
struct ip6_hdr {int ip6_plen; } ;
struct ip {int ip_sum; int ip_len; } ;
struct TYPE_7__ {int (* if_input ) (TYPE_3__*,TYPE_2__*) ;} ;
struct TYPE_5__ {int csum_data; int lro_nsegs; int len; void* csum_flags; } ;
struct TYPE_6__ {TYPE_1__ m_pkthdr; int * m_nextpkt; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_3 (struct tcphdr*) ;
 int FUNC_4 (struct tcpcb*,struct lro_ctrl*,struct lro_entry*,TYPE_2__*,int,int ,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct tcpcb *VAR_5, struct lro_ctrl *VAR_6, struct lro_entry *VAR_7, int VAR_8)
{
 if (VAR_7->append_cnt > 1) {
  struct tcphdr *VAR_9;
  uint16_t VAR_10;

  VAR_10 = FUNC_1(VAR_7->p_len);
  switch (VAR_7->eh_type) {
  default:
   VAR_9 = ((void*)0);
  }
  VAR_7->m_head->m_pkthdr.csum_data = 0xffff;
  VAR_7->m_head->m_pkthdr.len = VAR_7->p_len;


  VAR_9->th_ack = VAR_7->ack_seq;
  VAR_9->th_win = VAR_7->window;

  if (VAR_7->timestamp != 0) {
   uint32_t *VAR_11;

   VAR_11 = (uint32_t *)(VAR_9 + 1);
   VAR_11[1] = FUNC_0(VAR_7->tsval);
   VAR_11[2] = VAR_7->tsecr;
  }

  VAR_7->ulp_csum += VAR_10;
  VAR_7->ulp_csum += FUNC_3(VAR_9);
  while (VAR_7->ulp_csum > 0xffff)
   VAR_7->ulp_csum = (VAR_7->ulp_csum >> 16) +
       (VAR_7->ulp_csum & 0xffff);
  VAR_9->th_sum = (VAR_7->ulp_csum & 0xffff);
  VAR_9->th_sum = ~VAR_9->th_sum;
  if (VAR_5 && VAR_8) {
   FUNC_4(VAR_5, VAR_6, VAR_7, ((void*)0), 7, 0, 0, 0, 0);
  }
 }





 VAR_7->m_head->m_nextpkt = ((void*)0);
 VAR_7->m_head->m_pkthdr.lro_nsegs = VAR_7->append_cnt;
 if (VAR_5 && VAR_8) {
  FUNC_4(VAR_5, VAR_6, VAR_7, VAR_7->m_head, 8, 0, 0, 0, 0);
 }
 (*VAR_6->ifp->if_input)(VAR_6->ifp, VAR_7->m_head);
 VAR_6->lro_queued += VAR_7->append_cnt;
}
