
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct talitos_private {int dummy; } ;
struct TYPE_2__ {int hdr; } ;
struct talitos_edesc {TYPE_1__ desc; } ;
struct talitos_ctx {scalar_t__ keylen; int desc_hdr_template; struct device* dev; } ;
struct talitos_ahash_req_ctx {size_t buf_idx; unsigned int nbuf; unsigned int to_hash_later; scalar_t__ last; scalar_t__ first; int swinit; int ** buf; int psrc; int bufsl; } ;
struct device {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct talitos_edesc*) ;
 int FUNC_1 (struct talitos_edesc*) ;
 int VAR_4 ;
 struct talitos_edesc* FUNC_2 (struct ahash_request*,unsigned int) ;
 struct talitos_ahash_req_ctx* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct talitos_edesc*,struct ahash_request*,unsigned int,int ) ;
 struct talitos_ctx* FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 int FUNC_7 (struct crypto_ahash*) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (struct device*,char*) ;
 struct talitos_private* FUNC_10 (struct device*) ;
 int FUNC_11 (struct talitos_private*) ;
 int FUNC_12 (int ,int ,int) ;
 int FUNC_13 (int ,int,int ) ;
 int FUNC_14 (int ,int,int *,int) ;
 int FUNC_15 (int ,unsigned int) ;
 int FUNC_16 (int ,unsigned int) ;
 int FUNC_17 (int ,int,int *,unsigned int,unsigned int) ;
 int FUNC_18 (int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_19(struct ahash_request *VAR_5, unsigned int VAR_6)
{
 struct crypto_ahash *VAR_7 = FUNC_6(VAR_5);
 struct talitos_ctx *VAR_8 = FUNC_5(VAR_7);
 struct talitos_ahash_req_ctx *VAR_9 = FUNC_3(VAR_5);
 struct talitos_edesc *VAR_10;
 unsigned int VAR_11 =
   FUNC_8(FUNC_7(VAR_7));
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 int VAR_15;
 struct device *VAR_16 = VAR_8->dev;
 struct talitos_private *VAR_17 = FUNC_10(VAR_16);
 bool VAR_18 = FUNC_11(VAR_17);
 u8 *VAR_19 = VAR_9->buf[VAR_9->buf_idx];

 if (!VAR_9->last && (VAR_6 + VAR_9->nbuf <= VAR_11)) {

  VAR_15 = FUNC_16(VAR_5->src, VAR_6);
  if (VAR_15 < 0) {
   FUNC_9(VAR_8->dev, "Invalid number of src SG.\n");
   return VAR_15;
  }
  FUNC_14(VAR_5->src, VAR_15,
      VAR_19 + VAR_9->nbuf, VAR_6);
  VAR_9->nbuf += VAR_6;
  return 0;
 }


 VAR_12 = VAR_6 + VAR_9->nbuf;
 VAR_13 = VAR_12 & (VAR_11 - 1);

 if (VAR_9->last)
  VAR_13 = 0;
 else if (VAR_13)

  VAR_12 -= VAR_13;
 else {

  VAR_12 -= VAR_11;
  VAR_13 = VAR_11;
 }


 if (!VAR_18 && VAR_9->nbuf) {
  VAR_14 = (VAR_9->nbuf < VAR_12) ? 2 : 1;
  FUNC_15(VAR_9->bufsl, VAR_14);
  FUNC_18(VAR_9->bufsl, VAR_19, VAR_9->nbuf);
  if (VAR_14 > 1)
   FUNC_13(VAR_9->bufsl, 2, VAR_5->src);
  VAR_9->psrc = VAR_9->bufsl;
 } else if (VAR_18 && VAR_9->nbuf && VAR_9->nbuf < VAR_11) {
  int VAR_20;

  if (VAR_12 > VAR_11)
   VAR_20 = VAR_11 - VAR_9->nbuf;
  else
   VAR_20 = VAR_12 - VAR_9->nbuf;
  VAR_15 = FUNC_16(VAR_5->src, VAR_20);
  if (VAR_15 < 0) {
   FUNC_9(VAR_8->dev, "Invalid number of src SG.\n");
   return VAR_15;
  }
  FUNC_14(VAR_5->src, VAR_15,
      VAR_19 + VAR_9->nbuf, VAR_20);
  VAR_9->nbuf += VAR_20;
  VAR_9->psrc = FUNC_12(VAR_9->bufsl, VAR_5->src,
       VAR_20);
 } else
  VAR_9->psrc = VAR_5->src;

 if (VAR_13) {
  VAR_15 = FUNC_16(VAR_5->src, VAR_6);
  if (VAR_15 < 0) {
   FUNC_9(VAR_8->dev, "Invalid number of src SG.\n");
   return VAR_15;
  }
  FUNC_17(VAR_5->src, VAR_15,
       VAR_9->buf[(VAR_9->buf_idx + 1) & 1],
          VAR_13,
          VAR_6 - VAR_13);
 }
 VAR_9->to_hash_later = VAR_13;


 VAR_10 = FUNC_2(VAR_5, VAR_12);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_10->desc.hdr = VAR_8->desc_hdr_template;


 if (VAR_9->last)
  VAR_10->desc.hdr |= VAR_3;
 else
  VAR_10->desc.hdr |= VAR_0;


 if (VAR_9->first && !VAR_9->swinit)
  VAR_10->desc.hdr |= VAR_2;




 if (VAR_8->keylen && (VAR_9->first || VAR_9->last))
  VAR_10->desc.hdr |= VAR_1;

 return FUNC_4(VAR_10, VAR_5, VAR_12, VAR_4);
}
