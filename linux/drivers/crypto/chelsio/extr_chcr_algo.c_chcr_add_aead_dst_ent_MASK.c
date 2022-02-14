
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dsgl_walk {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct chcr_context {int pci_chan_id; } ;
struct chcr_aead_reqctx {scalar_t__ op; int iv_dma; scalar_t__ b0_len; } ;
struct aead_request {int dst; scalar_t__ cryptlen; scalar_t__ assoclen; } ;


 scalar_t__ VAR_0 ;
 struct chcr_context* FUNC_0 (struct crypto_aead*) ;
 struct chcr_aead_reqctx* FUNC_1 (struct aead_request*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (struct dsgl_walk*,scalar_t__,int ) ;
 int FUNC_5 (struct dsgl_walk*,int ,scalar_t__,int ) ;
 int FUNC_6 (struct dsgl_walk*,unsigned short,int ) ;
 int FUNC_7 (struct dsgl_walk*,struct cpl_rx_phys_dsgl*) ;

void FUNC_8(struct aead_request *VAR_1,
      struct cpl_rx_phys_dsgl *VAR_2,
      unsigned short VAR_3)
{
 struct chcr_aead_reqctx *VAR_4 = FUNC_1(VAR_1);
 struct crypto_aead *VAR_5 = FUNC_3(VAR_1);
 struct dsgl_walk VAR_6;
 unsigned int VAR_7 = FUNC_2(VAR_5);
 struct chcr_context *VAR_8 = FUNC_0(VAR_5);
 u32 VAR_9;

 FUNC_7(&VAR_6, VAR_2);
 FUNC_4(&VAR_6, VAR_0 + VAR_4->b0_len, VAR_4->iv_dma);
 VAR_9 = VAR_1->assoclen + VAR_1->cryptlen +
  (VAR_4->op ? -VAR_7 : VAR_7);
 FUNC_5(&VAR_6, VAR_1->dst, VAR_9, 0);
 FUNC_6(&VAR_6, VAR_3, VAR_8->pci_chan_id);
}
