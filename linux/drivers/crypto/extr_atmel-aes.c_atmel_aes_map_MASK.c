
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_4__ {int nents; struct scatterlist* sg; void* sg_len; scalar_t__ remainder; } ;
struct atmel_aes_dev {size_t total; size_t buflen; TYPE_2__ src; int dev; TYPE_2__ dst; int buf; struct scatterlist aligned_sg; TYPE_1__* ctx; struct scatterlist* real_dst; } ;
struct TYPE_3__ {int block_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct atmel_aes_dev*,struct scatterlist*,size_t,TYPE_2__*) ;
 size_t FUNC_1 (size_t,int ) ;
 void* FUNC_2 (int ,struct scatterlist*,int,int ) ;
 int FUNC_3 (int ,struct scatterlist*,int,int ) ;
 int FUNC_4 (struct scatterlist*,int ,int ,size_t) ;
 int FUNC_5 (struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*,int ,size_t) ;

__attribute__((used)) static int FUNC_8(struct atmel_aes_dev *VAR_5,
    struct scatterlist *VAR_6,
    struct scatterlist *VAR_7,
    size_t VAR_8)
{
 bool VAR_9, VAR_10;
 size_t VAR_11;

 VAR_5->total = VAR_8;
 VAR_5->src.sg = VAR_6;
 VAR_5->dst.sg = VAR_7;
 VAR_5->real_dst = VAR_7;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_8, &VAR_5->src);
 if (VAR_6 == VAR_7)
  VAR_10 = VAR_9;
 else
  VAR_10 = FUNC_0(VAR_5, VAR_7, VAR_8, &VAR_5->dst);
 if (!VAR_9 || !VAR_10) {
  VAR_11 = FUNC_1(VAR_8, VAR_5->ctx->block_size);

  if (VAR_5->buflen < VAR_8 + VAR_11)
   return -VAR_4;

  if (!VAR_9) {
   FUNC_4(VAR_6, FUNC_6(VAR_6), VAR_5->buf, VAR_8);
   VAR_5->src.sg = &VAR_5->aligned_sg;
   VAR_5->src.nents = 1;
   VAR_5->src.remainder = 0;
  }

  if (!VAR_10) {
   VAR_5->dst.sg = &VAR_5->aligned_sg;
   VAR_5->dst.nents = 1;
   VAR_5->dst.remainder = 0;
  }

  FUNC_5(&VAR_5->aligned_sg, 1);
  FUNC_7(&VAR_5->aligned_sg, VAR_5->buf, VAR_8 + VAR_11);
 }

 if (VAR_5->src.sg == VAR_5->dst.sg) {
  VAR_5->src.sg_len = FUNC_2(VAR_5->dev, VAR_5->src.sg, VAR_5->src.nents,
         VAR_0);
  VAR_5->dst.sg_len = VAR_5->src.sg_len;
  if (!VAR_5->src.sg_len)
   return -VAR_3;
 } else {
  VAR_5->src.sg_len = FUNC_2(VAR_5->dev, VAR_5->src.sg, VAR_5->src.nents,
         VAR_2);
  if (!VAR_5->src.sg_len)
   return -VAR_3;

  VAR_5->dst.sg_len = FUNC_2(VAR_5->dev, VAR_5->dst.sg, VAR_5->dst.nents,
         VAR_1);
  if (!VAR_5->dst.sg_len) {
   FUNC_3(VAR_5->dev, VAR_5->src.sg, VAR_5->src.nents,
         VAR_2);
   return -VAR_3;
  }
 }

 return 0;
}
