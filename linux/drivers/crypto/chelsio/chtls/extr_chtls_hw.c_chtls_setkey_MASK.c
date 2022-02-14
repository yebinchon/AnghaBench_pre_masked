
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_9__ {void* len; void* cmd_more; } ;
struct TYPE_8__ {void* lock_addr; void* dlen; void* len16; void* cmd; } ;
struct TYPE_7__ {int reneg_to_write_rx; int mfs; scalar_t__ protocol; void* flowid_len16; void* op_to_compl; } ;
struct tls_key_req {TYPE_4__ sc_imm; TYPE_3__ req; TYPE_2__ wr; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_10__ {int rxkey; int txkey; scalar_t__ tx_seq_no; int txqid; } ;
struct chtls_sock {int tid; int wr_credits; int wr_unacked; TYPE_5__ tlshws; int egress_dev; int txq; struct sock* sk; struct chtls_dev* cdev; } ;
struct TYPE_6__ {int start; } ;
struct chtls_dev {TYPE_1__ kmap; } ;
struct _key_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_15 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_16 (int,int ) ;
 int FUNC_17 (struct chtls_sock*,struct _key_ctx*,int,int) ;
 int FUNC_18 (struct chtls_sock*,int ) ;
 int FUNC_19 (struct chtls_sock*) ;
 int FUNC_20 (struct sock*,int ,int ,int ) ;
 int FUNC_21 (struct sock*,int) ;
 int FUNC_22 (struct sock*,int ) ;
 int FUNC_23 (struct sock*) ;
 void* FUNC_24 (int) ;
 int FUNC_25 (int ,struct sk_buff*) ;
 int FUNC_26 (struct chtls_sock*,struct sk_buff*) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct chtls_sock*,int) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ,int) ;
 int FUNC_31 (struct sk_buff*) ;
 int FUNC_32 (struct sock*) ;
 int FUNC_33 (struct sock*) ;
 int FUNC_34 (int,int) ;
 int FUNC_35 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_36 (int *) ;

int FUNC_37(struct chtls_sock *VAR_13, u32 VAR_14, u32 VAR_15)
{
 struct tls_key_req *VAR_16;
 struct chtls_dev *VAR_17;
 struct _key_ctx *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 struct sk_buff *VAR_22;
 struct sock *VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26;

 VAR_17 = VAR_13->cdev;
 VAR_23 = VAR_13->sk;

 VAR_20 = FUNC_34((VAR_14 + VAR_0) + sizeof(*VAR_18), 32);
 VAR_19 = FUNC_34(sizeof(*VAR_16), 16);
 VAR_21 = VAR_20 + VAR_19;


 if (VAR_15 == VAR_10) {
  FUNC_32(VAR_23);
  if (FUNC_36(&VAR_13->txq))
   FUNC_18(VAR_13, 0);
  FUNC_33(VAR_23);
 }

 VAR_22 = FUNC_16(VAR_21, VAR_6);
 if (!VAR_22)
  return -VAR_2;

 VAR_24 = FUNC_28(VAR_13, VAR_15);
 if (VAR_24 < 0) {
  VAR_26 = -VAR_3;
  goto out_nokey;
 }

 VAR_25 = FUNC_30(VAR_17->kmap.start, VAR_24);
 VAR_16 = (struct tls_key_req *)FUNC_15(VAR_22, VAR_21);
 VAR_16->wr.op_to_compl =
  FUNC_24(FUNC_4(VAR_4) | VAR_5 |
        FUNC_1(1U));
 VAR_16->wr.flowid_len16 =
  FUNC_24(FUNC_3(FUNC_0(VAR_21, 16) |
       FUNC_2(VAR_13->tid)));
 VAR_16->wr.protocol = 0;
 VAR_16->wr.mfs = FUNC_29(VAR_8);
 VAR_16->wr.reneg_to_write_rx = VAR_15;


 VAR_16->req.cmd = FUNC_24(FUNC_12(VAR_11) |
       FUNC_6(1) |
       FUNC_5(1));
 VAR_16->req.len16 = FUNC_24((VAR_13->tid << 8) |
         FUNC_0(VAR_21 - sizeof(VAR_16->wr), 16));
 VAR_16->req.dlen = FUNC_24(FUNC_14(VAR_20 >> 5));
 VAR_16->req.lock_addr = FUNC_24(FUNC_13(VAR_25));


 VAR_16->sc_imm.cmd_more = FUNC_24(FUNC_12(VAR_12));
 VAR_16->sc_imm.len = FUNC_24(VAR_20);


 VAR_18 = (struct _key_ctx *)(VAR_16 + 1);
 VAR_26 = FUNC_17(VAR_13, VAR_18, VAR_14, VAR_15);
 if (VAR_26)
  goto out_notcb;

 FUNC_35(VAR_22, VAR_1, VAR_13->tlshws.txqid);
 VAR_13->wr_credits -= FUNC_0(VAR_21, 16);
 VAR_13->wr_unacked += FUNC_0(VAR_21, 16);
 FUNC_26(VAR_13, VAR_22);
 FUNC_25(VAR_13->egress_dev, VAR_22);

 FUNC_19(VAR_13);

 if (VAR_15 == VAR_9) {
  VAR_26 = FUNC_21(VAR_23, VAR_24);
  if (VAR_26)
   goto out_notcb;
  VAR_26 = FUNC_20(VAR_23, 0,
       FUNC_7(VAR_7),
       FUNC_7((FUNC_11(1) |
       FUNC_9(1) |
       FUNC_8(1) |
       FUNC_10(1))));
  if (VAR_26)
   goto out_notcb;
  VAR_26 = FUNC_23(VAR_23);
  if (VAR_26)
   goto out_notcb;
  VAR_26 = FUNC_22(VAR_23, 0);
  if (VAR_26)
   goto out_notcb;
  VAR_13->tlshws.rxkey = VAR_24;
 } else {
  VAR_13->tlshws.tx_seq_no = 0;
  VAR_13->tlshws.txkey = VAR_24;
 }

 return VAR_26;
out_notcb:
 FUNC_27(VAR_23);
out_nokey:
 FUNC_31(VAR_22);
 return VAR_26;
}
