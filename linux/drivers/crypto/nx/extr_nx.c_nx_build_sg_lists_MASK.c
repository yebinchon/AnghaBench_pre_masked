
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct scatterlist {int dummy; } ;
struct nx_sg {int dummy; } ;
struct TYPE_7__ {void* outlen; void* inlen; } ;
struct nx_crypto_ctx {struct nx_sg* out_sg; TYPE_3__ op; struct nx_sg* in_sg; TYPE_2__* ap; } ;
struct blkcipher_desc {int info; } ;
struct TYPE_5__ {int max_sg_len; } ;
struct TYPE_8__ {TYPE_1__ of; } ;
struct TYPE_6__ {unsigned int sglen; int databytelen; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int) ;
 unsigned int FUNC_1 (int ,unsigned int,int) ;
 TYPE_4__ VAR_2 ;
 struct nx_sg* FUNC_2 (struct nx_sg*,unsigned int,struct scatterlist*,unsigned int,unsigned int*) ;
 void* FUNC_3 (struct nx_sg*,struct nx_sg*,unsigned int,unsigned int*) ;
 int VAR_3 ;

int FUNC_4(struct nx_crypto_ctx *VAR_4,
        struct blkcipher_desc *VAR_5,
        struct scatterlist *VAR_6,
        struct scatterlist *VAR_7,
        unsigned int *VAR_8,
        unsigned int VAR_9,
        u8 *VAR_10)
{
 unsigned int VAR_11 = 0;
 unsigned int VAR_12 = *VAR_8;
 struct nx_sg *VAR_13 = VAR_4->in_sg;
 struct nx_sg *VAR_14 = VAR_4->out_sg;
 unsigned int VAR_15;

 VAR_15 = FUNC_1(VAR_3, VAR_4->ap->sglen,
   VAR_2.of.max_sg_len/sizeof(struct nx_sg));
 VAR_15 = FUNC_1(VAR_3, VAR_15,
   VAR_4->ap->databytelen/VAR_1);

 if (VAR_10)
  FUNC_0(VAR_10, VAR_5->info, VAR_0);

 *VAR_8 = FUNC_1(VAR_3, *VAR_8, VAR_4->ap->databytelen);

 VAR_14 = FUNC_2(VAR_14, VAR_15, VAR_6,
     VAR_9, VAR_8);
 VAR_13 = FUNC_2(VAR_13, VAR_15, VAR_7,
     VAR_9, VAR_8);

 if (*VAR_8 < VAR_12)
  VAR_11 = *VAR_8 - (*VAR_8 & ~(VAR_0 - 1));




 VAR_4->op.inlen = FUNC_3(VAR_4->in_sg, VAR_13, VAR_11, VAR_8);
 VAR_4->op.outlen = FUNC_3(VAR_4->out_sg, VAR_14, VAR_11, VAR_8);

 return 0;
}
