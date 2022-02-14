
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct talitos_private {int dummy; } ;
struct talitos_desc {int next_desc; int hdr1; TYPE_1__* ptr; int hdr; } ;
struct talitos_edesc {scalar_t__ dma_len; int dma_link_tbl; scalar_t__ buf; scalar_t__ src_nents; struct talitos_desc desc; } ;
struct talitos_ctx {int ch; scalar_t__ keylen; int dma_key; struct device* dev; } ;
struct talitos_ahash_req_ctx {size_t buf_idx; int hw_context; int hw_context_size; scalar_t__ last; int psrc; scalar_t__ nbuf; int * buf; scalar_t__ first; scalar_t__ swinit; } ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int result; } ;
typedef int dma_addr_t ;
struct TYPE_9__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct talitos_ahash_req_ctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct device*,struct talitos_edesc*,struct ahash_request*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (int ) ;
 struct talitos_ctx* FUNC_4 (struct crypto_ahash*) ;
 scalar_t__ FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 struct talitos_private* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*,int ,int,int ) ;
 int FUNC_9 (struct device*,int *,int ,int ) ;
 int FUNC_10 (struct device*,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (TYPE_1__*,int) ;
 int FUNC_12 (struct talitos_private*) ;
 int FUNC_13 (struct talitos_edesc*) ;
 int FUNC_14 (struct device*,TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_15 (struct device*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_16 (struct talitos_desc*,int ,int) ;
 int FUNC_17 (int ,int,scalar_t__,unsigned int) ;
 int FUNC_18 (struct talitos_ctx*,struct talitos_edesc*,TYPE_1__*) ;
 int FUNC_19 (struct device*,int ,unsigned int,struct talitos_edesc*,TYPE_1__*,int,int ,int ) ;
 int FUNC_20 (struct device*,int ,struct talitos_desc*,void (*) (struct device*,struct talitos_desc*,void*,int),struct ahash_request*) ;
 int FUNC_21 (TYPE_1__*,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_22(struct talitos_edesc *VAR_9,
    struct ahash_request *VAR_10, unsigned int VAR_11,
    void (*VAR_12) (struct device *VAR_13,
        struct talitos_desc *VAR_14,
        void *VAR_15, int VAR_16))
{
 struct crypto_ahash *VAR_17 = FUNC_6(VAR_10);
 struct talitos_ctx *VAR_18 = FUNC_4(VAR_17);
 struct talitos_ahash_req_ctx *VAR_19 = FUNC_0(VAR_10);
 struct device *VAR_20 = VAR_18->dev;
 struct talitos_desc *VAR_21 = &VAR_9->desc;
 int VAR_22;
 bool VAR_23 = 0;
 struct talitos_private *VAR_24 = FUNC_7(VAR_20);
 bool VAR_25 = FUNC_12(VAR_24);
 int VAR_26;




 if (!VAR_19->first || VAR_19->swinit) {
  FUNC_15(VAR_20, &VAR_21->ptr[1],
           VAR_19->hw_context_size,
           VAR_19->hw_context,
           VAR_6);
  VAR_19->swinit = 0;
 }

 VAR_19->first = 0;


 if (VAR_18->keylen)
  FUNC_21(&VAR_21->ptr[2], VAR_18->dma_key, VAR_18->keylen,
          VAR_25);

 if (VAR_25 && VAR_19->nbuf)
  VAR_11 -= VAR_19->nbuf;

 VAR_26 = VAR_9->src_nents ?: 1;
 if (VAR_25 && VAR_26 > 1)
  FUNC_17(VAR_19->psrc, VAR_26, VAR_9->buf, VAR_11);
 else if (VAR_11)
  VAR_26 = FUNC_8(VAR_20, VAR_19->psrc, VAR_26,
          VAR_6);



 if (VAR_25 && VAR_19->nbuf) {
  FUNC_14(VAR_20, &VAR_21->ptr[3], VAR_19->nbuf,
           VAR_19->buf[VAR_19->buf_idx],
           VAR_6);
 } else {
  VAR_26 = FUNC_19(VAR_20, VAR_19->psrc, VAR_11, VAR_9,
       &VAR_21->ptr[3], VAR_26, 0, 0);
  if (VAR_26 > 1)
   VAR_23 = 1;
 }




 if (VAR_19->last)
  FUNC_14(VAR_20, &VAR_21->ptr[5],
           FUNC_5(VAR_17),
           VAR_10->result, VAR_5);
 else
  FUNC_15(VAR_20, &VAR_21->ptr[5],
           VAR_19->hw_context_size,
           VAR_19->hw_context,
           VAR_5);



 if (VAR_25 && FUNC_11(&VAR_21->ptr[3], 1) == 0)
  FUNC_18(VAR_18, VAR_9, &VAR_21->ptr[3]);

 if (VAR_25 && VAR_19->nbuf && VAR_11) {
  struct talitos_desc *VAR_27 = (struct talitos_desc *)
          (VAR_9->buf + VAR_9->dma_len);
  dma_addr_t VAR_28;

  FUNC_16(VAR_27, 0, sizeof(*VAR_27));
  VAR_27->hdr = VAR_21->hdr;
  VAR_27->hdr &= ~VAR_2;
  VAR_27->hdr1 = VAR_27->hdr;
  VAR_21->hdr &= ~VAR_3;
  VAR_21->hdr |= VAR_1;
  VAR_21->hdr &= ~VAR_0;

  if (VAR_21->ptr[1].ptr)
   FUNC_2(&VAR_27->ptr[1], &VAR_21->ptr[1],
      VAR_25);
  else
   FUNC_15(VAR_20, &VAR_27->ptr[1],
            VAR_19->hw_context_size,
            VAR_19->hw_context,
            VAR_6);
  FUNC_2(&VAR_27->ptr[2], &VAR_21->ptr[2], VAR_25);
  VAR_26 = FUNC_19(VAR_20, VAR_19->psrc, VAR_11, VAR_9,
       &VAR_27->ptr[3], VAR_26, 0, 0);
  if (VAR_26 > 1)
   VAR_23 = 1;
  FUNC_2(&VAR_27->ptr[5], &VAR_21->ptr[5], VAR_25);
  if (VAR_19->last)
   FUNC_15(VAR_20, &VAR_21->ptr[5],
            VAR_19->hw_context_size,
            VAR_19->hw_context,
            VAR_5);

  VAR_28 = FUNC_9(VAR_20, &VAR_27->hdr1, VAR_8,
        VAR_4);
  VAR_21->next_desc = FUNC_3(VAR_28);
 }

 if (VAR_23)
  FUNC_10(VAR_20, VAR_9->dma_link_tbl,
        VAR_9->dma_len, VAR_4);

 VAR_22 = FUNC_20(VAR_20, VAR_18->ch, VAR_21, VAR_12, VAR_10);
 if (VAR_22 != -VAR_7) {
  FUNC_1(VAR_20, VAR_9, VAR_10);
  FUNC_13(VAR_9);
 }
 return VAR_22;
}
