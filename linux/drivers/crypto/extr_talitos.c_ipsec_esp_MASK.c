
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ptr {int dummy; } ;
struct talitos_private {int dummy; } ;
struct talitos_desc {int hdr; struct talitos_ptr* ptr; } ;
struct talitos_edesc {unsigned int dma_link_tbl; unsigned int dma_len; unsigned int iv_dma; struct talitos_ptr* link_tbl; scalar_t__ dst_nents; int buf; scalar_t__ src_nents; struct talitos_desc desc; } ;
struct talitos_ctx {unsigned int dma_key; unsigned int authkeylen; unsigned int enckeylen; int ch; int iv; struct device* dev; } ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {unsigned int cryptlen; scalar_t__ src; unsigned int assoclen; scalar_t__ dst; } ;
typedef unsigned int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (struct crypto_aead*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_aead*) ;
 unsigned int FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 struct talitos_private* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,scalar_t__,int,int ) ;
 int FUNC_6 (struct device*,unsigned int,unsigned int,int ) ;
 int FUNC_7 (struct talitos_private*) ;
 int FUNC_8 (struct device*,struct talitos_edesc*,struct aead_request*,int) ;
 int FUNC_9 (struct talitos_edesc*) ;
 int FUNC_10 (struct device*,struct talitos_ptr*,unsigned int,int ,int ) ;
 int FUNC_11 (scalar_t__,int,int ,unsigned int) ;
 int FUNC_12 (struct device*,scalar_t__,unsigned int,struct talitos_edesc*,struct talitos_ptr*,int,unsigned int,int) ;
 int FUNC_13 (struct device*,scalar_t__,unsigned int,struct talitos_edesc*,struct talitos_ptr*,int,unsigned int,int,int,int) ;
 int FUNC_14 (struct device*,int ,struct talitos_desc*,void (*) (struct device*,struct talitos_desc*,void*,int),struct aead_request*) ;
 int FUNC_15 (struct talitos_ptr*,unsigned int,unsigned int,int) ;
 int FUNC_16 (struct talitos_ptr*,unsigned int,int) ;
 int FUNC_17 (struct talitos_ptr*,int ,int) ;

__attribute__((used)) static int FUNC_18(struct talitos_edesc *VAR_7, struct aead_request *VAR_8,
       bool VAR_9,
       void (*VAR_10)(struct device *VAR_11,
          struct talitos_desc *VAR_12,
          void *VAR_13, int VAR_14))
{
 struct crypto_aead *VAR_15 = FUNC_3(VAR_8);
 unsigned int VAR_16 = FUNC_0(VAR_15);
 struct talitos_ctx *VAR_17 = FUNC_1(VAR_15);
 struct device *VAR_18 = VAR_17->dev;
 struct talitos_desc *VAR_19 = &VAR_7->desc;
 unsigned int VAR_20 = VAR_8->cryptlen - (VAR_9 ? 0 : VAR_16);
 unsigned int VAR_21 = FUNC_2(VAR_15);
 int VAR_22 = 0;
 int VAR_23, VAR_24;
 int VAR_25 = 0;
 bool VAR_26 = 0;
 struct talitos_private *VAR_27 = FUNC_4(VAR_18);
 bool VAR_28 = FUNC_7(VAR_27);
 bool VAR_29 = VAR_19->hdr & VAR_1;
 struct talitos_ptr *VAR_30 = &VAR_19->ptr[VAR_29 ? 2 : 3];
 struct talitos_ptr *VAR_31 = &VAR_19->ptr[VAR_29 ? 3 : 2];
 dma_addr_t VAR_32 = VAR_7->dma_link_tbl + VAR_7->dma_len - VAR_16;


 FUNC_15(&VAR_19->ptr[0], VAR_17->dma_key, VAR_17->authkeylen, VAR_28);

 VAR_23 = VAR_7->src_nents ?: 1;
 if (VAR_28 && VAR_23 > 1)
  FUNC_11(VAR_8->src, VAR_23, VAR_7->buf,
      VAR_8->assoclen + VAR_20);
 else
  VAR_23 = FUNC_5(VAR_18, VAR_8->src, VAR_23,
          (VAR_8->src == VAR_8->dst) ?
          VAR_3 : VAR_5);


 VAR_24 = FUNC_12(VAR_18, VAR_8->src, VAR_8->assoclen, VAR_7,
        &VAR_19->ptr[1], VAR_23, 0, VAR_22);

 if (VAR_24 > 1) {
  VAR_22 += VAR_24;
  VAR_26 = 1;
 }


 FUNC_15(VAR_30, VAR_7->iv_dma, VAR_21, VAR_28);


 FUNC_15(VAR_31, VAR_17->dma_key + VAR_17->authkeylen,
         VAR_17->enckeylen, VAR_28);







 if (VAR_29 && (VAR_19->hdr & VAR_0))
  VAR_25 = VAR_16;

 VAR_24 = FUNC_13(VAR_18, VAR_8->src, VAR_20, VAR_7, &VAR_19->ptr[4],
     VAR_23, VAR_8->assoclen, VAR_22, VAR_25,
     0);

 if (VAR_24 > 1) {
  VAR_22 += VAR_24;
  VAR_26 = 1;
 }


 if (VAR_8->src != VAR_8->dst) {
  VAR_23 = VAR_7->dst_nents ? : 1;
  if (!VAR_28 || VAR_23 == 1)
   FUNC_5(VAR_18, VAR_8->dst, VAR_23, VAR_4);
 }

 if (VAR_29 && VAR_9)
  VAR_25 = VAR_16;
 else
  VAR_25 = 0;
 VAR_24 = FUNC_13(VAR_18, VAR_8->dst, VAR_20, VAR_7, &VAR_19->ptr[5],
     VAR_23, VAR_8->assoclen, VAR_22, VAR_25,
     VAR_29 && !VAR_9);
 VAR_22 += VAR_24;

 if (!VAR_9 && VAR_29) {
  struct talitos_ptr *VAR_33 = &VAR_7->link_tbl[VAR_22];


  FUNC_17(VAR_33 - 1, 0, VAR_28);
  FUNC_17(VAR_33, VAR_2, VAR_28);


  FUNC_15(VAR_33, VAR_32, VAR_16, VAR_28);
  FUNC_16(&VAR_19->ptr[5], VAR_16, VAR_28);
  VAR_26 = 1;
 } else if (!VAR_9) {
  FUNC_15(&VAR_19->ptr[6], VAR_32, VAR_16, VAR_28);
  VAR_26 = 1;
 } else if (!VAR_29) {
  FUNC_12(VAR_18, VAR_8->dst, VAR_16, VAR_7, &VAR_19->ptr[6],
          VAR_23, VAR_8->assoclen + VAR_20, VAR_22);
 }


 if (VAR_29)
  FUNC_10(VAR_18, &VAR_19->ptr[6], VAR_21, VAR_17->iv,
           VAR_4);

 if (VAR_26)
  FUNC_6(VAR_18, VAR_7->dma_link_tbl,
        VAR_7->dma_len,
        VAR_3);

 VAR_24 = FUNC_14(VAR_18, VAR_17->ch, VAR_19, VAR_10, VAR_8);
 if (VAR_24 != -VAR_6) {
  FUNC_8(VAR_18, VAR_7, VAR_8, VAR_9);
  FUNC_9(VAR_7);
 }
 return VAR_24;
}
