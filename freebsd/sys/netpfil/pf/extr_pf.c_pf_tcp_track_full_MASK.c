
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct tcphdr {int th_flags; int th_off; int th_ack; int th_sport; int th_dport; int th_sum; int th_seq; int th_win; } ;
struct pfi_kif {int pfik_ifp; } ;
struct pf_state_peer {int wscale; scalar_t__ seqlo; scalar_t__ seqdiff; int max_win; scalar_t__ state; int seqhi; int * scrub; } ;
struct TYPE_10__ {TYPE_5__* ptr; } ;
struct TYPE_9__ {scalar_t__ state; } ;
struct TYPE_8__ {scalar_t__ state; } ;
struct pf_state {scalar_t__ direction; scalar_t__* packets; TYPE_4__ rule; TYPE_3__ src; TYPE_2__ dst; int timeout; int expire; int * src_node; } ;
struct TYPE_7__ {struct tcphdr* tcp; } ;
struct pf_pdesc {int flags; int p_len; scalar_t__ dir; int src; int dst; int af; TYPE_1__ hdr; } ;
struct mbuf {int dummy; } ;
struct TYPE_12__ {scalar_t__ debug; } ;
struct TYPE_11__ {int return_ttl; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_6__ VAR_26 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mbuf*,int *,int *,int ,int ) ;
 int FUNC_9 (struct mbuf*,int,int,int ) ;
 scalar_t__ FUNC_10 (struct mbuf*,int,struct pf_pdesc*,struct tcphdr*,struct pf_state_peer*) ;
 scalar_t__ FUNC_11 (struct mbuf*,int,struct pf_pdesc*,struct tcphdr*,struct pf_state_peer*,struct pf_state_peer*) ;
 scalar_t__ FUNC_12 (struct mbuf*,int,struct pf_pdesc*,int *,struct tcphdr*,struct pf_state*,struct pf_state_peer*,struct pf_state_peer*,int*) ;
 int FUNC_13 (int) ;
 int FUNC_14 (struct pf_state*) ;
 int FUNC_15 (int *,TYPE_5__*,int ,int ,int ,int ,int ,int,int ,int,int ,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_16 (struct pf_state**) ;
 int FUNC_17 (char*,...) ;
 int VAR_27 ;

__attribute__((used)) static int
FUNC_18(struct pf_state_peer *VAR_28, struct pf_state_peer *VAR_29,
 struct pf_state **VAR_30, struct pfi_kif *VAR_31, struct mbuf *VAR_32, int VAR_33,
 struct pf_pdesc *VAR_34, u_short *VAR_35, int *VAR_36)
{
 struct tcphdr *VAR_37 = VAR_34->hdr.tcp;
 u_int16_t VAR_38 = FUNC_7(VAR_37->th_win);
 u_int32_t VAR_39, VAR_40, VAR_41, VAR_42;
 u_int8_t VAR_43, VAR_44;
 int VAR_45;

 if (VAR_28->wscale && VAR_29->wscale && !(VAR_37->th_flags & VAR_25)) {
  VAR_43 = VAR_28->wscale & VAR_16;
  VAR_44 = VAR_29->wscale & VAR_16;
 } else
  VAR_43 = VAR_44 = 0;







 VAR_42 = VAR_41 = FUNC_6(VAR_37->th_seq);
 if (VAR_28->seqlo == 0) {


  if ((VAR_34->flags & VAR_2 || VAR_29->scrub) &&
      VAR_28->scrub == ((void*)0)) {
   if (FUNC_11(VAR_32, VAR_33, VAR_34, VAR_37, VAR_28, VAR_29)) {
    FUNC_1(VAR_35, VAR_4);
    return (VAR_12);
   }
  }


  if (VAR_29->seqdiff && !VAR_28->seqdiff) {

   while ((VAR_28->seqdiff = FUNC_4() - VAR_41) == 0)
    ;
   VAR_39 = FUNC_6(VAR_37->th_ack) - VAR_29->seqdiff;
   FUNC_8(VAR_32, &VAR_37->th_seq, &VAR_37->th_sum, FUNC_5(VAR_41 +
       VAR_28->seqdiff), 0);
   FUNC_8(VAR_32, &VAR_37->th_ack, &VAR_37->th_sum, FUNC_5(VAR_39), 0);
   *VAR_36 = 1;
  } else {
   VAR_39 = FUNC_6(VAR_37->th_ack);
  }

  VAR_40 = VAR_41 + VAR_34->p_len;
  if (VAR_37->th_flags & VAR_25) {
   VAR_40++;
   if (VAR_29->wscale & VAR_15) {
    VAR_28->wscale = FUNC_9(VAR_32, VAR_33, VAR_37->th_off,
        VAR_34->af);
    if (VAR_28->wscale & VAR_15) {


     VAR_43 = VAR_28->wscale & VAR_16;
     VAR_38 = ((u_int32_t)VAR_38 + (1 << VAR_43) - 1)
         >> VAR_43;
     VAR_44 = VAR_29->wscale & VAR_16;
    } else {

     VAR_29->max_win <<= VAR_29->wscale &
         VAR_16;

     VAR_29->wscale = 0;
    }
   }
  }
  if (VAR_37->th_flags & VAR_23)
   VAR_40++;

  VAR_28->seqlo = VAR_41;
  if (VAR_28->state < VAR_20)
   VAR_28->state = VAR_20;






  if (VAR_28->seqhi == 1 ||
      FUNC_2(VAR_40 + FUNC_0(1, VAR_29->max_win << VAR_44), VAR_28->seqhi))
   VAR_28->seqhi = VAR_40 + FUNC_0(1, VAR_29->max_win << VAR_44);
  if (VAR_38 > VAR_28->max_win)
   VAR_28->max_win = VAR_38;

 } else {
  VAR_39 = FUNC_6(VAR_37->th_ack) - VAR_29->seqdiff;
  if (VAR_28->seqdiff) {

   FUNC_8(VAR_32, &VAR_37->th_seq, &VAR_37->th_sum, FUNC_5(VAR_41 +
       VAR_28->seqdiff), 0);
   FUNC_8(VAR_32, &VAR_37->th_ack, &VAR_37->th_sum, FUNC_5(VAR_39), 0);
   *VAR_36 = 1;
  }
  VAR_40 = VAR_41 + VAR_34->p_len;
  if (VAR_37->th_flags & VAR_25)
   VAR_40++;
  if (VAR_37->th_flags & VAR_23)
   VAR_40++;
 }

 if ((VAR_37->th_flags & VAR_22) == 0) {

  VAR_39 = VAR_29->seqlo;
 } else if ((VAR_39 == 0 &&
     (VAR_37->th_flags & (VAR_22|VAR_24)) == (VAR_22|VAR_24)) ||

     (VAR_29->state < VAR_20)) {




  VAR_39 = VAR_29->seqlo;
 }

 if (VAR_41 == VAR_40) {

  VAR_41 = VAR_28->seqlo;
  VAR_40 = VAR_41;
 }

 VAR_45 = VAR_29->seqlo - VAR_39;
 if (VAR_29->seqdiff && (VAR_37->th_off << 2) > sizeof(struct tcphdr)) {
  if (FUNC_10(VAR_32, VAR_33, VAR_34, VAR_37, VAR_29))
   *VAR_36 = 1;
 }



 if (FUNC_2(VAR_28->seqhi, VAR_40) &&

     FUNC_2(VAR_41, VAR_28->seqlo - (VAR_29->max_win << VAR_44)) &&

     (VAR_45 >= -(0xffff + 1500)) &&

     (VAR_45 <= ((0xffff + 1500) << VAR_43)) &&

     ((VAR_37->th_flags & VAR_24) == 0 || VAR_42 == VAR_28->seqlo ||
     (VAR_42 == VAR_28->seqlo + 1) || (VAR_42 + 1 == VAR_28->seqlo) ||
     (VAR_34->flags & VAR_1) == 0)) {


  if (VAR_29->scrub || VAR_28->scrub) {
   if (FUNC_12(VAR_32, VAR_33, VAR_34, VAR_35, VAR_37,
       *VAR_30, VAR_28, VAR_29, VAR_36))
    return (VAR_12);
  }


  if (VAR_28->max_win < VAR_38)
   VAR_28->max_win = VAR_38;

  if (FUNC_3(VAR_40, VAR_28->seqlo))
   VAR_28->seqlo = VAR_40;

  if (FUNC_2(VAR_39 + (VAR_38 << VAR_43), VAR_29->seqhi))
   VAR_29->seqhi = VAR_39 + FUNC_0((VAR_38 << VAR_43), 1);



  if (VAR_37->th_flags & VAR_25)
   if (VAR_28->state < VAR_20)
    VAR_28->state = VAR_20;
  if (VAR_37->th_flags & VAR_23)
   if (VAR_28->state < VAR_17)
    VAR_28->state = VAR_17;
  if (VAR_37->th_flags & VAR_22) {
   if (VAR_29->state == VAR_20) {
    VAR_29->state = VAR_18;
    if (VAR_28->state == VAR_18 &&
        (*VAR_30)->src_node != ((void*)0) &&
        FUNC_16(VAR_30)) {
     FUNC_1(VAR_35, VAR_5);
     return (VAR_12);
    }
   } else if (VAR_29->state == VAR_17)
    VAR_29->state = VAR_19;
  }
  if (VAR_37->th_flags & VAR_24)
   VAR_28->state = VAR_29->state = VAR_21;


  (*VAR_30)->expire = VAR_27;
  if (VAR_28->state >= VAR_19 &&
      VAR_29->state >= VAR_19)
   (*VAR_30)->timeout = VAR_6;
  else if (VAR_28->state >= VAR_17 &&
      VAR_29->state >= VAR_17)
   (*VAR_30)->timeout = VAR_9;
  else if (VAR_28->state < VAR_18 ||
      VAR_29->state < VAR_18)
   (*VAR_30)->timeout = VAR_10;
  else if (VAR_28->state >= VAR_17 ||
      VAR_29->state >= VAR_17)
   (*VAR_30)->timeout = VAR_7;
  else
   (*VAR_30)->timeout = VAR_8;



 } else if ((VAR_29->state < VAR_20 ||
  VAR_29->state >= VAR_19 ||
  VAR_28->state >= VAR_19) &&
     FUNC_2(VAR_28->seqhi + (0xffff + 1500), VAR_40) &&

     FUNC_2(VAR_41, VAR_28->seqlo - (0xffff + 1500))) {
  if (VAR_26.debug >= VAR_11) {
   FUNC_17("pf: loose state match: ");
   FUNC_14(*VAR_30);
   FUNC_13(VAR_37->th_flags);
   FUNC_17(" seq=%u (%u) ack=%u len=%u ackskew=%d "
       "pkts=%llu:%llu dir=%s,%s\n", VAR_41, VAR_42, VAR_39,
       VAR_34->p_len, VAR_45, (unsigned long long)(*VAR_30)->packets[0],
       (unsigned long long)(*VAR_30)->packets[1],
       VAR_34->dir == VAR_13 ? "in" : "out",
       VAR_34->dir == (*VAR_30)->direction ? "fwd" : "rev");
  }

  if (VAR_29->scrub || VAR_28->scrub) {
   if (FUNC_12(VAR_32, VAR_33, VAR_34, VAR_35, VAR_37,
       *VAR_30, VAR_28, VAR_29, VAR_36))
    return (VAR_12);
  }


  if (VAR_28->max_win < VAR_38)
   VAR_28->max_win = VAR_38;

  if (FUNC_3(VAR_40, VAR_28->seqlo))
   VAR_28->seqlo = VAR_40;

  if (FUNC_2(VAR_39 + (VAR_38 << VAR_43), VAR_29->seqhi))
   VAR_29->seqhi = VAR_39 + FUNC_0((VAR_38 << VAR_43), 1);






  if (VAR_37->th_flags & VAR_23)
   if (VAR_28->state < VAR_17)
    VAR_28->state = VAR_17;
  if (VAR_37->th_flags & VAR_24)
   VAR_28->state = VAR_29->state = VAR_21;



 } else {
  if ((*VAR_30)->dst.state == VAR_20 &&
      (*VAR_30)->src.state == VAR_20) {

   if (!(VAR_37->th_flags & VAR_24))
    FUNC_15(((void*)0), (*VAR_30)->rule.ptr, VAR_34->af,
        VAR_34->dst, VAR_34->src, VAR_37->th_dport,
        VAR_37->th_sport, FUNC_6(VAR_37->th_ack), 0,
        VAR_24, 0, 0,
        (*VAR_30)->rule.ptr->return_ttl, 1, 0,
        VAR_31->pfik_ifp);
   VAR_28->seqlo = 0;
   VAR_28->seqhi = 1;
   VAR_28->max_win = 1;
  } else if (VAR_26.debug >= VAR_11) {
   FUNC_17("pf: BAD state: ");
   FUNC_14(*VAR_30);
   FUNC_13(VAR_37->th_flags);
   FUNC_17(" seq=%u (%u) ack=%u len=%u ackskew=%d "
       "pkts=%llu:%llu dir=%s,%s\n",
       VAR_41, VAR_42, VAR_39, VAR_34->p_len, VAR_45,
       (unsigned long long)(*VAR_30)->packets[0],
       (unsigned long long)(*VAR_30)->packets[1],
       VAR_34->dir == VAR_13 ? "in" : "out",
       VAR_34->dir == (*VAR_30)->direction ? "fwd" : "rev");
   FUNC_17("pf: State failure on: %c %c %c %c | %c %c\n",
       FUNC_2(VAR_28->seqhi, VAR_40) ? ' ' : '1',
       FUNC_2(VAR_41, VAR_28->seqlo - (VAR_29->max_win << VAR_44)) ?
       ' ': '2',
       (VAR_45 >= -(0xffff + 1500)) ? ' ' : '3',
       (VAR_45 <= ((0xffff + 1500) << VAR_43)) ? ' ' : '4',
       FUNC_2(VAR_28->seqhi + (0xffff + 1500), VAR_40) ?' ' :'5',
       FUNC_2(VAR_41, VAR_28->seqlo - (0xffff + 1500)) ?' ' :'6');
  }
  FUNC_1(VAR_35, VAR_3);
  return (VAR_12);
 }

 return (VAR_14);
}
