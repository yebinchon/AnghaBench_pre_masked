
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;
struct ipsec_sa_entry {unsigned int kctx_len; scalar_t__ esn; } ;
struct fw_ulptx_wr {int dummy; } ;
struct cpl_tx_pkt {int dummy; } ;
struct chcr_ipsec_req {int dummy; } ;
struct chcr_ipsec_aadiv {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static inline int FUNC_1(const struct sk_buff *VAR_1,
        struct ipsec_sa_entry *VAR_2)
{
 unsigned int VAR_3;
 int VAR_4;

 VAR_3 = VAR_2->kctx_len;
 VAR_4 = sizeof(struct fw_ulptx_wr) +
   sizeof(struct chcr_ipsec_req) + VAR_3;

 VAR_4 += sizeof(struct cpl_tx_pkt);
 if (VAR_2->esn)
  VAR_4 += (FUNC_0(sizeof(struct chcr_ipsec_aadiv), 16)
      << 4);
 if (VAR_1->len <= VAR_0 - VAR_4)
  return VAR_4;
 return 0;
}
