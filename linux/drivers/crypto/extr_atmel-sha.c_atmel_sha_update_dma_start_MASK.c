
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int length; int offset; } ;
struct atmel_sha_reqctx {unsigned int bufcnt; unsigned int offset; int block_size; int flags; struct scatterlist* sg; int dma_addr; scalar_t__ buflen; int buffer; scalar_t__ total; int * digcnt; } ;
struct atmel_sha_dev {int dev; int req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct atmel_sha_reqctx* FUNC_1 (int ) ;
 int FUNC_2 (struct atmel_sha_reqctx*) ;
 int FUNC_3 (struct atmel_sha_dev*,int ) ;
 int FUNC_4 (struct atmel_sha_reqctx*,unsigned int) ;
 int FUNC_5 (struct atmel_sha_dev*) ;
 int FUNC_6 (struct atmel_sha_dev*,int ,unsigned int,int ,unsigned int,unsigned int) ;
 int FUNC_7 (int ,char*,int ,int ,unsigned int,scalar_t__) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ,struct scatterlist*,int,int ) ;
 int FUNC_10 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 unsigned int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (struct scatterlist*) ;
 scalar_t__ FUNC_14 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_15(struct atmel_sha_dev *VAR_4)
{
 struct atmel_sha_reqctx *VAR_5 = FUNC_1(VAR_4->req);
 unsigned int VAR_6, VAR_7, VAR_8;
 struct scatterlist *VAR_9;
 unsigned int VAR_10;

 if (!VAR_5->total)
  return 0;

 if (VAR_5->bufcnt || VAR_5->offset)
  return FUNC_5(VAR_4);

 FUNC_7(VAR_4->dev, "fast: digcnt: 0x%llx 0x%llx, bufcnt: %zd, total: %u\n",
  VAR_5->digcnt[1], VAR_5->digcnt[0], VAR_5->bufcnt, VAR_5->total);

 VAR_9 = VAR_5->sg;

 if (!FUNC_0(VAR_9->offset, sizeof(u32)))
  return FUNC_5(VAR_4);

 if (!FUNC_14(VAR_9) && !FUNC_0(VAR_9->length, VAR_5->block_size))

  return FUNC_5(VAR_4);

 VAR_6 = FUNC_12(VAR_5->total, VAR_9->length);

 if (FUNC_14(VAR_9)) {
  if (!(VAR_5->flags & VAR_2)) {

   VAR_8 = VAR_6 & (VAR_5->block_size - 1);
   VAR_6 -= VAR_8;
  }
 }

 VAR_5->total -= VAR_6;
 VAR_5->offset = VAR_6;

 VAR_7 = (VAR_5->flags & VAR_2) && !VAR_5->total;


 if (VAR_7) {
  VAR_8 = VAR_6 & (VAR_5->block_size - 1);
  VAR_6 -= VAR_8;
  VAR_5->total += VAR_8;
  VAR_5->offset = VAR_6;

  VAR_9 = VAR_5->sg;
  FUNC_2(VAR_5);

  FUNC_4(VAR_5, VAR_6);

  VAR_5->dma_addr = FUNC_10(VAR_4->dev, VAR_5->buffer,
   VAR_5->buflen + VAR_5->block_size, VAR_0);
  if (FUNC_11(VAR_4->dev, VAR_5->dma_addr)) {
   FUNC_8(VAR_4->dev, "dma %zu bytes error\n",
    VAR_5->buflen + VAR_5->block_size);
   return FUNC_3(VAR_4, -VAR_1);
  }

  if (VAR_6 == 0) {
   VAR_5->flags &= ~VAR_3;
   VAR_10 = VAR_5->bufcnt;
   VAR_5->bufcnt = 0;
   return FUNC_6(VAR_4, VAR_5->dma_addr, VAR_10, 0,
     0, VAR_7);
  } else {
   VAR_5->sg = VAR_9;
   if (!FUNC_9(VAR_4->dev, VAR_5->sg, 1,
    VAR_0)) {
     FUNC_8(VAR_4->dev, "dma_map_sg  error\n");
     return FUNC_3(VAR_4, -VAR_1);
   }

   VAR_5->flags |= VAR_3;

   VAR_10 = VAR_5->bufcnt;
   VAR_5->bufcnt = 0;
   return FUNC_6(VAR_4, FUNC_13(VAR_5->sg),
     VAR_6, VAR_5->dma_addr, VAR_10, VAR_7);
  }
 }

 if (!FUNC_9(VAR_4->dev, VAR_5->sg, 1, VAR_0)) {
  FUNC_8(VAR_4->dev, "dma_map_sg  error\n");
  return FUNC_3(VAR_4, -VAR_1);
 }

 VAR_5->flags |= VAR_3;


 return FUNC_6(VAR_4, FUNC_13(VAR_5->sg), VAR_6, 0,
        0, VAR_7);
}
