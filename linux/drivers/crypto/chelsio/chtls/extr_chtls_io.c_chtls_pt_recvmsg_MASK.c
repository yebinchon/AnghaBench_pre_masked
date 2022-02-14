
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long u32 ;
struct tcp_sock {int urg_data; scalar_t__ urg_seq; scalar_t__ copied_seq; } ;
struct TYPE_3__ {scalar_t__ tail; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; int sk_receive_queue; TYPE_1__ sk_backlog; scalar_t__ sk_err; int (* sk_write_space ) (struct sock*) ;} ;
struct sk_buff {unsigned long len; int hdr_len; } ;
struct msghdr {int dummy; } ;
struct chtls_hws {unsigned long copied_seq; int rcvpld; } ;
struct chtls_sock {scalar_t__ wr_credits; scalar_t__ wr_max_credits; int txq; struct chtls_hws tlshws; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct chtls_sock*,int) ;
 int FUNC_6 (struct sock*,int ) ;
 int VAR_10 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 struct chtls_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct sock*,long*,int *) ;
 scalar_t__ FUNC_13 (struct sk_buff*,unsigned long,struct msghdr*,unsigned long) ;
 int FUNC_14 (struct sk_buff*,int *) ;
 struct sk_buff* FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (struct sock*) ;
 scalar_t__ FUNC_18 (struct sock*,int ) ;
 int FUNC_19 (long) ;
 int FUNC_20 (struct sock*,int,size_t) ;
 long FUNC_21 (struct sock*,int) ;
 int FUNC_22 (struct sock*) ;
 struct tcp_sock* FUNC_23 (struct sock*) ;
 scalar_t__ FUNC_24 (int) ;

__attribute__((used)) static int FUNC_25(struct sock *VAR_11, struct msghdr *VAR_12, size_t VAR_13,
       int VAR_14, int VAR_15, int *VAR_16)
{
 struct chtls_sock *VAR_17 = FUNC_9(VAR_11);
 struct chtls_hws *VAR_18 = &VAR_17->tlshws;
 struct tcp_sock *VAR_19 = FUNC_23(VAR_11);
 unsigned long VAR_20;
 int VAR_21;
 int VAR_22 = 0;
 int VAR_23;
 long VAR_24;

 VAR_21 = 0;

 VAR_24 = FUNC_21(VAR_11, VAR_14);
 VAR_23 = FUNC_20(VAR_11, VAR_15 & VAR_4, VAR_13);

 if (FUNC_24(FUNC_6(VAR_11, VAR_0)))
  FUNC_3(VAR_11, VAR_22);

 do {
  struct sk_buff *VAR_25;
  u32 VAR_26 = 0;

  if (FUNC_24(VAR_19->urg_data &&
        VAR_19->urg_seq == VAR_19->copied_seq)) {
   if (VAR_22)
    break;
   if (FUNC_11(VAR_10)) {
    VAR_22 = VAR_24 ? FUNC_19(VAR_24) :
     -VAR_1;
    break;
   }
  }
  VAR_25 = FUNC_15(&VAR_11->sk_receive_queue);
  if (VAR_25)
   goto found_ok_skb;
  if (VAR_17->wr_credits &&
      FUNC_16(&VAR_17->txq) &&
      FUNC_5(VAR_17, VAR_17->wr_credits ==
          VAR_17->wr_max_credits))
   VAR_11->sk_write_space(VAR_11);

  if (VAR_22 >= VAR_23 && !VAR_11->sk_backlog.tail)
   break;

  if (VAR_22) {
   if (VAR_11->sk_err || VAR_11->sk_state == VAR_8 ||
       (VAR_11->sk_shutdown & VAR_5) ||
       FUNC_11(VAR_10))
    break;

   if (!VAR_24)
    break;
  } else {
   if (FUNC_18(VAR_11, VAR_6))
    break;
   if (VAR_11->sk_err) {
    VAR_22 = FUNC_17(VAR_11);
    break;
   }
   if (VAR_11->sk_shutdown & VAR_5)
    break;
   if (VAR_11->sk_state == VAR_8) {
    VAR_22 = -VAR_3;
    break;
   }
   if (!VAR_24) {
    VAR_22 = -VAR_1;
    break;
   }
   if (FUNC_11(VAR_10)) {
    VAR_22 = FUNC_19(VAR_24);
    break;
   }
  }
  if (VAR_11->sk_backlog.tail) {
   FUNC_10(VAR_11);
   FUNC_8(VAR_11);
   FUNC_3(VAR_11, VAR_22);
   continue;
  }

  if (VAR_22 >= VAR_23)
   break;
  FUNC_3(VAR_11, VAR_22);
  FUNC_12(VAR_11, &VAR_24, ((void*)0));
  continue;
found_ok_skb:
  if (!VAR_25->len) {
   FUNC_14(VAR_25, ((void*)0));
   FUNC_1(VAR_25, &VAR_11->sk_receive_queue);
   FUNC_7(VAR_25);

   if (!VAR_22 && !VAR_24) {
    VAR_22 = -VAR_1;
    break;
   }

   if (VAR_22 < VAR_23) {
    FUNC_10(VAR_11);
    FUNC_8(VAR_11);
    continue;
   }
   break;
  }
  VAR_26 = VAR_18->copied_seq;
  VAR_20 = VAR_25->len - VAR_26;
  if (VAR_13 < VAR_20)
   VAR_20 = VAR_13;

  if (FUNC_24(VAR_19->urg_data)) {
   u32 VAR_27 = VAR_19->urg_seq - VAR_19->copied_seq;

   if (VAR_27 < VAR_20) {
    if (VAR_27) {
     VAR_20 = VAR_27;
    } else if (!FUNC_18(VAR_11, VAR_7)) {

     VAR_19->copied_seq++;
     VAR_26++;
     VAR_20--;
     if (!VAR_20)
      goto skip_copy;
    }
   }
  }
  if (FUNC_13(VAR_25, VAR_26, VAR_12, VAR_20)) {
   if (!VAR_22) {
    VAR_22 = -VAR_2;
    break;
   }
  }

  VAR_22 += VAR_20;
  VAR_13 -= VAR_20;
  VAR_18->copied_seq += VAR_20;
skip_copy:
  if (VAR_19->urg_data && FUNC_2(VAR_19->copied_seq, VAR_19->urg_seq))
   VAR_19->urg_data = 0;

  if ((VAR_20 + VAR_26) >= VAR_25->len) {
   if (FUNC_0(VAR_25)->flags & VAR_9) {
    VAR_19->copied_seq += VAR_25->len;
    VAR_18->rcvpld = VAR_25->hdr_len;
   } else {
    VAR_19->copied_seq += VAR_18->rcvpld;
   }
   FUNC_4(VAR_11, VAR_25);
   VAR_21++;
   VAR_18->copied_seq = 0;
   if (VAR_22 >= VAR_23 &&
       !FUNC_15(&VAR_11->sk_receive_queue))
    break;
  }
 } while (VAR_13 > 0);

 if (VAR_21)
  FUNC_3(VAR_11, VAR_22);
 FUNC_10(VAR_11);
 return VAR_22;
}
