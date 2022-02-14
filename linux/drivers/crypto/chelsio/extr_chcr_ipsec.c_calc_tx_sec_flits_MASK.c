
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct ipsec_sa_entry {unsigned int kctx_len; scalar_t__ esn; } ;
struct fw_ulptx_wr {int dummy; } ;
struct cpl_tx_pkt_core {int dummy; } ;
struct chcr_ipsec_req {int dummy; } ;
struct chcr_ipsec_aadiv {int dummy; } ;
typedef int __be64 ;
struct TYPE_2__ {scalar_t__ nr_frags; } ;


 unsigned int FUNC_0 (int,int) ;
 int FUNC_1 (struct sk_buff const*,struct ipsec_sa_entry*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 TYPE_1__* FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static inline unsigned int FUNC_4(const struct sk_buff *VAR_0,
          struct ipsec_sa_entry *VAR_1,
          bool *VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;
 int VAR_5;
 int VAR_6;

 VAR_3 = VAR_1->kctx_len;
 VAR_6 = FUNC_1(VAR_0, VAR_1);
 VAR_5 = VAR_1->esn ? FUNC_0(sizeof(struct chcr_ipsec_aadiv),
      16) : 0;
 VAR_5 <<= 4;






 if (VAR_6) {
  *VAR_2 = 1;
  return FUNC_0(VAR_0->len + VAR_6, sizeof(__be64));
 }

 VAR_4 = FUNC_2(FUNC_3(VAR_0)->nr_frags + 1);
 VAR_4 += (sizeof(struct fw_ulptx_wr) +
    sizeof(struct chcr_ipsec_req) +
    VAR_3 +
    sizeof(struct cpl_tx_pkt_core) +
    VAR_5) / sizeof(__be64);
 return VAR_4;
}
