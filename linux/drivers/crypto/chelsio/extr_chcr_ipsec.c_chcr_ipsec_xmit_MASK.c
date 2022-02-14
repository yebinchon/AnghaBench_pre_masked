
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_10__ {scalar_t__ offload_handle; } ;
struct xfrm_state {TYPE_1__ xso; } ;
struct ulptx_sgl {int dummy; } ;
struct sk_buff {int queue_mapping; } ;
struct TYPE_13__ {size_t pidx; int size; TYPE_3__* sdesc; int * desc; scalar_t__ stat; } ;
struct sge_eth_txq {TYPE_4__ q; int mapping_err; } ;
struct sec_path {int len; } ;
struct port_info {int first_qset; struct adapter* adapter; } ;
struct net_device {int name; } ;
struct ipsec_sa_entry {int dummy; } ;
struct TYPE_11__ {struct sge_eth_txq* ethtxq; } ;
struct adapter {int pdev_dev; TYPE_2__ sge; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {struct ulptx_sgl* sgl; struct sk_buff* skb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct sk_buff*,struct ipsec_sa_entry*,int*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct net_device*,void*,int,struct ipsec_sa_entry*) ;
 int FUNC_2 (struct sk_buff*,TYPE_4__*,int *) ;
 scalar_t__ FUNC_3 (int ,struct sk_buff*,int *) ;
 int FUNC_4 (struct adapter*,TYPE_4__*,int) ;
 int FUNC_5 (struct adapter*,TYPE_4__*,unsigned int) ;
 int FUNC_6 (struct sk_buff*,TYPE_4__*,void*,int *,int ,int *) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,char*,int ,int,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sge_eth_txq*) ;
 unsigned int FUNC_11 (unsigned int) ;
 struct port_info* FUNC_12 (struct net_device*) ;
 int FUNC_13 (struct sk_buff*) ;
 struct sec_path* FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (TYPE_4__*,unsigned int) ;
 unsigned int FUNC_16 (TYPE_4__*) ;
 scalar_t__ FUNC_17 (int) ;
 struct xfrm_state* FUNC_18 (struct sk_buff*) ;

int FUNC_19(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct xfrm_state *VAR_5 = FUNC_18(VAR_3);
 struct ipsec_sa_entry *VAR_6;
 u64 *VAR_7, *VAR_8, *VAR_9, *VAR_10;
 int VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14 = 0, VAR_15;
 struct adapter *VAR_16;
 struct sge_eth_txq *VAR_17;
 struct port_info *VAR_18;
 dma_addr_t VAR_19[VAR_0 + 1];
 struct sec_path *VAR_20;
 bool VAR_21 = 0;

 if (!VAR_5->xso.offload_handle)
  return VAR_1;

 VAR_6 = (struct ipsec_sa_entry *)VAR_5->xso.offload_handle;

 VAR_20 = FUNC_14(VAR_3);
 if (VAR_20->len != 1) {
out_free: FUNC_9(VAR_3);
  return VAR_2;
 }

 VAR_18 = FUNC_12(VAR_4);
 VAR_16 = VAR_18->adapter;
 VAR_11 = VAR_3->queue_mapping;
 VAR_17 = &VAR_16->sge.ethtxq[VAR_11 + VAR_18->first_qset];

 FUNC_4(VAR_16, &VAR_17->q, 1);

 VAR_14 = FUNC_0(VAR_3, VAR_6, &VAR_21);
 VAR_15 = FUNC_11(VAR_14);
 VAR_13 = FUNC_16(&VAR_17->q) - VAR_15;

 if (FUNC_17(VAR_13 < 0)) {
  FUNC_10(VAR_17);
  FUNC_8(VAR_16->pdev_dev,
   "%s: Tx ring %u full while queue awake! cred:%d %d %d flits:%d\n",
   VAR_4->name, VAR_11, VAR_13, VAR_15, FUNC_16(&VAR_17->q),
   VAR_14);
  return VAR_1;
 }

 if (!VAR_21 &&
     FUNC_17(FUNC_3(VAR_16->pdev_dev, VAR_3, VAR_19) < 0)) {
  VAR_17->mapping_err++;
  goto out_free;
 }

 VAR_7 = (u64 *)&VAR_17->q.desc[VAR_17->q.pidx];
 VAR_9 = (u64 *)VAR_7;
 VAR_8 = (u64 *)VAR_7 + VAR_14;

 VAR_7 = (void *)FUNC_1(VAR_3, VAR_4, (void *)VAR_7,
           VAR_13, VAR_6);
 if (VAR_9 > (u64 *)VAR_7) {
  VAR_12 = (u8 *)VAR_8 - (u8 *)VAR_17->q.stat;
  VAR_8 = (void *)VAR_17->q.desc + VAR_12;
 }
 if (VAR_7 == (u64 *)VAR_17->q.stat) {
  VAR_12 = (u8 *)VAR_8 - (u8 *)VAR_17->q.stat;
  VAR_8 = (void *)VAR_17->q.desc + VAR_12;
  VAR_7 = (void *)VAR_17->q.desc;
 }

 VAR_10 = (void *)VAR_7;
 if (VAR_21) {
  FUNC_2(VAR_3, &VAR_17->q, VAR_10);
  FUNC_7(VAR_3);
 } else {
  int VAR_22;

  FUNC_6(VAR_3, &VAR_17->q, (void *)VAR_10, VAR_8,
    0, VAR_19);
  FUNC_13(VAR_3);

  VAR_22 = VAR_17->q.pidx + VAR_15 - 1;
  if (VAR_22 >= VAR_17->q.size)
   VAR_22 -= VAR_17->q.size;
  VAR_17->q.sdesc[VAR_22].skb = VAR_3;
  VAR_17->q.sdesc[VAR_22].sgl = (struct ulptx_sgl *)VAR_10;
 }
 FUNC_15(&VAR_17->q, VAR_15);

 FUNC_5(VAR_16, &VAR_17->q, VAR_15);
 return VAR_2;
}
