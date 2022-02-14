
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int length; int offset; } ;
struct mtk_sha_reqctx {size_t bufcnt; int offset; int bs; int flags; struct scatterlist* sg; int dma_addr; int buffer; scalar_t__ total; } ;
struct mtk_sha_rec {int flags; int req; } ;
struct mtk_cryp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mtk_sha_reqctx* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct mtk_sha_reqctx*) ;
 int FUNC_8 (struct mtk_sha_reqctx*,int) ;
 int FUNC_9 (struct mtk_cryp*,struct mtk_sha_rec*) ;
 int FUNC_10 (struct mtk_cryp*,struct mtk_sha_rec*,int ,int,int ,size_t) ;
 int FUNC_11 (struct scatterlist*) ;
 scalar_t__ FUNC_12 (struct scatterlist*) ;
 scalar_t__ FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct mtk_cryp *VAR_6,
    struct mtk_sha_rec *VAR_7)
{
 struct mtk_sha_reqctx *VAR_8 = FUNC_1(VAR_7->req);
 u32 VAR_9, VAR_10, VAR_11;
 struct scatterlist *VAR_12;

 if (!VAR_8->total)
  return 0;

 if (VAR_8->bufcnt || VAR_8->offset)
  return FUNC_9(VAR_6, VAR_7);

 VAR_12 = VAR_8->sg;

 if (!FUNC_0(VAR_12->offset, sizeof(u32)))
  return FUNC_9(VAR_6, VAR_7);

 if (!FUNC_12(VAR_12) && !FUNC_0(VAR_12->length, VAR_8->bs))

  return FUNC_9(VAR_6, VAR_7);

 VAR_9 = FUNC_6(VAR_8->total, VAR_12->length);

 if (FUNC_12(VAR_12)) {
  if (!(VAR_8->flags & VAR_4)) {

   VAR_11 = VAR_9 & (VAR_8->bs - 1);
   VAR_9 -= VAR_11;
  }
 }

 VAR_8->total -= VAR_9;
 VAR_8->offset = VAR_9;

 VAR_10 = (VAR_8->flags & VAR_4) && !VAR_8->total;


 if (VAR_10) {
  size_t VAR_13;

  VAR_11 = VAR_9 & (VAR_8->bs - 1);
  VAR_9 -= VAR_11;
  VAR_8->total += VAR_11;
  VAR_8->offset = VAR_9;

  VAR_12 = VAR_8->sg;
  FUNC_7(VAR_8);
  FUNC_8(VAR_8, VAR_9);

  VAR_8->dma_addr = FUNC_4(VAR_6->dev, VAR_8->buffer,
            VAR_2, VAR_0);
  if (FUNC_13(FUNC_5(VAR_6->dev, VAR_8->dma_addr))) {
   FUNC_2(VAR_6->dev, "dma map bytes error\n");
   return -VAR_1;
  }

  VAR_7->flags |= VAR_3;
  VAR_13 = VAR_8->bufcnt;
  VAR_8->bufcnt = 0;

  if (VAR_9 == 0) {
   VAR_8->flags &= ~VAR_5;
   return FUNC_10(VAR_6, VAR_7, VAR_8->dma_addr,
         VAR_13, 0, 0);

  } else {
   VAR_8->sg = VAR_12;
   if (!FUNC_3(VAR_6->dev, VAR_8->sg, 1, VAR_0)) {
    FUNC_2(VAR_6->dev, "dma_map_sg error\n");
    return -VAR_1;
   }

   VAR_8->flags |= VAR_5;
   return FUNC_10(VAR_6, VAR_7, FUNC_11(VAR_8->sg),
         VAR_9, VAR_8->dma_addr, VAR_13);
  }
 }

 if (!FUNC_3(VAR_6->dev, VAR_8->sg, 1, VAR_0)) {
  FUNC_2(VAR_6->dev, "dma_map_sg  error\n");
  return -VAR_1;
 }

 VAR_8->flags |= VAR_5;

 return FUNC_10(VAR_6, VAR_7, FUNC_11(VAR_8->sg),
       VAR_9, 0, 0);
}
