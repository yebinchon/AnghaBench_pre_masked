
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcp_sock {int write_seq; } ;
struct sock {int sk_wmem_queued; TYPE_1__* sk_socket; } ;
struct sk_buff {int len; int data_len; int truesize; } ;
struct page {int dummy; } ;
struct chtls_sock {int mss; int txq; struct chtls_dev* cdev; } ;
struct chtls_dev {int dummy; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {int nr_frags; int * frags; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sock*,int) ;
 scalar_t__ FUNC_2 (struct tcp_sock*,int) ;
 scalar_t__ FUNC_3 (struct chtls_sock*) ;
 int FUNC_4 (struct chtls_dev*,struct sock*) ;
 int FUNC_5 (struct chtls_sock*,int ) ;
 int FUNC_6 (struct chtls_sock*,int ) ;
 int FUNC_7 (struct chtls_dev*,struct sock*,long*) ;
 int FUNC_8 (struct page*) ;
 struct sk_buff* FUNC_9 (struct sock*,int ,int) ;
 struct sk_buff* FUNC_10 (struct sock*,int ) ;
 scalar_t__ FUNC_11 (struct chtls_sock*) ;
 int FUNC_12 (struct sock*) ;
 struct chtls_sock* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct sock*,size_t,int,int ) ;
 int FUNC_16 (int ,int *) ;
 int FUNC_17 (struct sock*,int) ;
 int FUNC_18 (struct sock*,int,int) ;
 scalar_t__ FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*,long*) ;
 scalar_t__ FUNC_21 (struct sock*) ;
 scalar_t__ FUNC_22 (struct sk_buff*,int,struct page*,int) ;
 int FUNC_23 (struct sk_buff*,int,struct page*,int,int) ;
 int FUNC_24 (int *,int) ;
 struct sk_buff* FUNC_25 (int *) ;
 TYPE_2__* FUNC_26 (struct sk_buff*) ;
 long FUNC_27 (struct sock*,int) ;
 struct tcp_sock* FUNC_28 (struct sock*) ;
 int FUNC_29 (struct sk_buff*) ;
 scalar_t__ FUNC_30 (int) ;

int FUNC_31(struct sock *VAR_8, struct page *VAR_9,
     int VAR_10, size_t VAR_11, int VAR_12)
{
 struct chtls_sock *VAR_13;
 struct chtls_dev *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 struct tcp_sock *VAR_18;
 long VAR_19;

 VAR_18 = FUNC_28(VAR_8);
 VAR_17 = 0;
 VAR_13 = FUNC_13(VAR_8);
 VAR_14 = VAR_13->cdev;
 VAR_19 = FUNC_27(VAR_8, VAR_12 & VAR_2);

 VAR_16 = FUNC_20(VAR_8, &VAR_19);
 if (!FUNC_17(VAR_8, VAR_5 | VAR_4) &&
     VAR_16 != 0)
  goto out_err;

 VAR_15 = VAR_13->mss;
 FUNC_6(VAR_13, VAR_0);

 while (VAR_11 > 0) {
  struct sk_buff *VAR_20 = FUNC_25(&VAR_13->txq);
  int VAR_21, VAR_22;

  if (!VAR_20 || (FUNC_0(VAR_20)->flags & VAR_7) ||
      (VAR_21 = VAR_15 - VAR_20->len) <= 0) {
new_buf:
   if (!FUNC_4(VAR_14, VAR_8))
    goto wait_for_sndbuf;

   if (FUNC_11(VAR_13)) {
    VAR_20 = FUNC_9(VAR_8,
           FUNC_15(VAR_8, VAR_11,
         VAR_12,
         VAR_6),
           1);
   } else {
    VAR_20 = FUNC_10(VAR_8, 0);
   }
   if (!VAR_20)
    goto wait_for_memory;
   VAR_21 = VAR_15;
  }
  if (VAR_21 > VAR_11)
   VAR_21 = VAR_11;

  VAR_22 = FUNC_26(VAR_20)->nr_frags;
  if (FUNC_22(VAR_20, VAR_22, VAR_9, VAR_10)) {
   FUNC_24(&FUNC_26(VAR_20)->frags[VAR_22 - 1], VAR_21);
  } else if (VAR_22 < VAR_1) {
   FUNC_8(VAR_9);
   FUNC_23(VAR_20, VAR_22, VAR_9, VAR_10, VAR_21);
  } else {
   FUNC_29(VAR_20);
   FUNC_12(VAR_8);
   goto new_buf;
  }

  VAR_20->len += VAR_21;
  if (VAR_20->len == VAR_15)
   FUNC_29(VAR_20);
  VAR_20->data_len += VAR_21;
  VAR_20->truesize += VAR_21;
  VAR_8->sk_wmem_queued += VAR_21;
  VAR_18->write_seq += VAR_21;
  VAR_17 += VAR_21;
  VAR_10 += VAR_21;
  VAR_11 -= VAR_21;

  if (FUNC_2(VAR_18, VAR_12) &&
      (FUNC_21(VAR_8) < FUNC_19(VAR_8)))
   FUNC_0(VAR_20)->flags |= VAR_7;

  if (!VAR_11)
   break;

  if (FUNC_30(FUNC_0(VAR_20)->flags & VAR_7))
   FUNC_12(VAR_8);
  continue;
wait_for_sndbuf:
  FUNC_16(VAR_3, &VAR_8->sk_socket->flags);
wait_for_memory:
  VAR_16 = FUNC_7(VAR_14, VAR_8, &VAR_19);
  if (VAR_16)
   goto do_error;
 }
out:
 FUNC_5(VAR_13, VAR_0);
 if (VAR_17)
  FUNC_1(VAR_8, VAR_12);
done:
 FUNC_14(VAR_8);
 return VAR_17;

do_error:
 if (VAR_17)
  goto out;

out_err:
 if (FUNC_3(VAR_13))
  FUNC_5(VAR_13, VAR_0);
 VAR_17 = FUNC_18(VAR_8, VAR_12, VAR_16);
 goto done;
}
