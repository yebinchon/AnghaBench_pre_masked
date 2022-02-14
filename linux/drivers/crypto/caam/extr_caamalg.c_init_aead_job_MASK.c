
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sec4_sg_entry {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct caam_ctx {int authsize; int sh_desc_enc_dma; int sh_desc_dec_dma; scalar_t__* sh_desc_dec; scalar_t__* sh_desc_enc; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; scalar_t__ cryptlen; scalar_t__ assoclen; } ;
struct aead_edesc {int sec4_sg_dma; int mapped_dst_nents; scalar_t__ mapped_src_nents; scalar_t__* hw_desc; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int,scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__*,int,scalar_t__,scalar_t__) ;
 struct caam_ctx* FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__*,int,int,int) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct aead_request *VAR_3,
     struct aead_edesc *VAR_4,
     bool VAR_5, bool VAR_6)
{
 struct crypto_aead *VAR_7 = FUNC_3(VAR_3);
 struct caam_ctx *VAR_8 = FUNC_2(VAR_7);
 int VAR_9 = VAR_8->authsize;
 u32 *VAR_10 = VAR_4->hw_desc;
 u32 VAR_11, VAR_12;
 dma_addr_t VAR_13, VAR_14;
 int VAR_15, VAR_16 = 0;
 dma_addr_t VAR_17;
 u32 *VAR_18;

 VAR_18 = VAR_6 ? VAR_8->sh_desc_enc : VAR_8->sh_desc_dec;
 VAR_17 = VAR_6 ? VAR_8->sh_desc_enc_dma : VAR_8->sh_desc_dec_dma;

 VAR_15 = FUNC_4(VAR_18);
 FUNC_5(VAR_10, VAR_17, VAR_15, VAR_1 | VAR_0);

 if (VAR_5) {
  VAR_14 = VAR_4->mapped_src_nents ? FUNC_6(VAR_3->src) :
          0;
  VAR_12 = 0;
 } else {
  VAR_14 = VAR_4->sec4_sg_dma;
  VAR_16 += VAR_4->mapped_src_nents;
  VAR_12 = VAR_2;
 }

 FUNC_0(VAR_10, VAR_14, VAR_3->assoclen + VAR_3->cryptlen,
     VAR_12);

 VAR_13 = VAR_14;
 VAR_11 = VAR_12;

 if (FUNC_7(VAR_3->src != VAR_3->dst)) {
  if (!VAR_4->mapped_dst_nents) {
   VAR_13 = 0;
   VAR_11 = 0;
  } else if (VAR_4->mapped_dst_nents == 1) {
   VAR_13 = FUNC_6(VAR_3->dst);
   VAR_11 = 0;
  } else {
   VAR_13 = VAR_4->sec4_sg_dma +
      VAR_16 *
      sizeof(struct sec4_sg_entry);
   VAR_11 = VAR_2;
  }
 }

 if (VAR_6)
  FUNC_1(VAR_10, VAR_13,
       VAR_3->assoclen + VAR_3->cryptlen + VAR_9,
       VAR_11);
 else
  FUNC_1(VAR_10, VAR_13,
       VAR_3->assoclen + VAR_3->cryptlen - VAR_9,
       VAR_11);
}
