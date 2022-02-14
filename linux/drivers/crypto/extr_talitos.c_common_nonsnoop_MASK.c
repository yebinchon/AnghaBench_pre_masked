
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_private {int dummy; } ;
struct talitos_desc {int * ptr; } ;
struct talitos_edesc {int dma_len; int dma_link_tbl; scalar_t__ src_nents; scalar_t__ dst_nents; int buf; int iv_dma; struct talitos_desc desc; } ;
struct talitos_ctx {unsigned int keylen; int ch; int iv; int dma_key; struct device* dev; } ;
struct device {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {unsigned int nbytes; scalar_t__ src; scalar_t__ dst; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,struct talitos_edesc*,struct ablkcipher_request*) ;
 struct talitos_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 unsigned int FUNC_2 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_3 (struct ablkcipher_request*) ;
 struct talitos_private* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,scalar_t__,int,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;
 int FUNC_7 (struct talitos_private*) ;
 int FUNC_8 (struct talitos_edesc*) ;
 int FUNC_9 (struct device*,int *,unsigned int,int ,int ) ;
 int FUNC_10 (scalar_t__,int,int ,unsigned int) ;
 int FUNC_11 (struct device*,scalar_t__,unsigned int,struct talitos_edesc*,int *,int,int ,scalar_t__) ;
 int FUNC_12 (struct device*,int ,struct talitos_desc*,void (*) (struct device*,struct talitos_desc*,void*,int),struct ablkcipher_request*) ;
 int FUNC_13 (int *,int ,unsigned int,int) ;

__attribute__((used)) static int FUNC_14(struct talitos_edesc *VAR_4,
      struct ablkcipher_request *VAR_5,
      void (*VAR_6) (struct device *VAR_7,
          struct talitos_desc *VAR_8,
          void *VAR_9, int VAR_10))
{
 struct crypto_ablkcipher *VAR_11 = FUNC_3(VAR_5);
 struct talitos_ctx *VAR_12 = FUNC_1(VAR_11);
 struct device *VAR_13 = VAR_12->dev;
 struct talitos_desc *VAR_14 = &VAR_4->desc;
 unsigned int VAR_15 = VAR_5->nbytes;
 unsigned int VAR_16 = FUNC_2(VAR_11);
 int VAR_17, VAR_18;
 bool VAR_19 = 0;
 struct talitos_private *VAR_20 = FUNC_4(VAR_13);
 bool VAR_21 = FUNC_7(VAR_20);




 FUNC_13(&VAR_14->ptr[1], VAR_4->iv_dma, VAR_16, VAR_21);


 FUNC_13(&VAR_14->ptr[2], VAR_12->dma_key, VAR_12->keylen, VAR_21);

 VAR_17 = VAR_4->src_nents ?: 1;
 if (VAR_21 && VAR_17 > 1)
  FUNC_10(VAR_5->src, VAR_17, VAR_4->buf,
      VAR_15);
 else
  VAR_17 = FUNC_5(VAR_13, VAR_5->src, VAR_17,
          (VAR_5->src == VAR_5->dst) ?
          VAR_0 : VAR_2);



 VAR_17 = FUNC_11(VAR_13, VAR_5->src, VAR_15, VAR_4,
      &VAR_14->ptr[3], VAR_17, 0, 0);
 if (VAR_17 > 1)
  VAR_19 = 1;


 if (VAR_5->src != VAR_5->dst) {
  VAR_17 = VAR_4->dst_nents ? : 1;
  if (!VAR_21 || VAR_17 == 1)
   FUNC_5(VAR_13, VAR_5->dst, VAR_17, VAR_1);
 }

 VAR_18 = FUNC_11(VAR_13, VAR_5->dst, VAR_15, VAR_4, &VAR_14->ptr[4],
        VAR_17, 0, (VAR_4->src_nents + 1));
 if (VAR_18 > 1)
  VAR_19 = 1;


 FUNC_9(VAR_13, &VAR_14->ptr[5], VAR_16, VAR_12->iv,
          VAR_1);



 if (VAR_19)
  FUNC_6(VAR_13, VAR_4->dma_link_tbl,
        VAR_4->dma_len, VAR_0);

 VAR_18 = FUNC_12(VAR_13, VAR_12->ch, VAR_14, VAR_6, VAR_5);
 if (VAR_18 != -VAR_3) {
  FUNC_0(VAR_13, VAR_4, VAR_5);
  FUNC_8(VAR_4);
 }
 return VAR_18;
}
