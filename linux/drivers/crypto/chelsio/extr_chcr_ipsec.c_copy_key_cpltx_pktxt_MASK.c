
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {unsigned int queue_mapping; } ;
struct TYPE_4__ {void* desc; int size; scalar_t__ stat; } ;
struct sge_eth_txq {TYPE_2__ q; } ;
struct port_info {unsigned int first_qset; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ipsec_sa_entry {int kctx_len; scalar_t__ key; scalar_t__ salt; int key_ctx_hdr; } ;
struct TYPE_3__ {struct sge_eth_txq* ethtxq; } ;
struct adapter {TYPE_1__ sge; } ;
struct _key_ctx {void* salt; void* key; int ctx_hdr; } ;


 int VAR_0 ;
 void* FUNC_0 (struct sk_buff*,struct net_device*,void*,struct ipsec_sa_entry*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (void*,scalar_t__,int) ;
 struct port_info* FUNC_3 (struct net_device*) ;

inline void *FUNC_4(struct sk_buff *VAR_1,
    struct net_device *VAR_2,
    void *VAR_3,
    struct ipsec_sa_entry *VAR_4)
{
 struct _key_ctx *VAR_5;
 int VAR_6, VAR_7, VAR_8;
 struct sge_eth_txq *VAR_9;
 struct adapter *VAR_10;
 struct port_info *VAR_11;
 unsigned int VAR_12;

 VAR_11 = FUNC_3(VAR_2);
 VAR_10 = VAR_11->adapter;
 VAR_12 = VAR_1->queue_mapping;
 VAR_9 = &VAR_10->sge.ethtxq[VAR_12 + VAR_11->first_qset];
 VAR_8 = VAR_4->kctx_len;


 VAR_7 = (void *)VAR_9->q.stat - VAR_3;
 VAR_6 = VAR_7;
 if (!VAR_7) {
  VAR_3 = VAR_9->q.desc;
  VAR_6 = 64 * VAR_9->q.size;
 }


 VAR_5 = (struct _key_ctx *)VAR_3;
 VAR_5->ctx_hdr = VAR_4->key_ctx_hdr;
 FUNC_2(VAR_5->salt, VAR_4->salt, VAR_0);
 VAR_3 += sizeof(struct _key_ctx);
 VAR_6 -= sizeof(struct _key_ctx);

 if (FUNC_1(VAR_8 <= VAR_6)) {
  FUNC_2(VAR_5->key, VAR_4->key, VAR_8);
  VAR_3 += VAR_8;
 } else {
  FUNC_2(VAR_3, VAR_4->key, VAR_6);
  FUNC_2(VAR_9->q.desc, VAR_4->key + VAR_6,
         VAR_8 - VAR_6);
  VAR_3 = (u8 *)VAR_9->q.desc + (VAR_8 - VAR_6);
 }

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_3;
}
