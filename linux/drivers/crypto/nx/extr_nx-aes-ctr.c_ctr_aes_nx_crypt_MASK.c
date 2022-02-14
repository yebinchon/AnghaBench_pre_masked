
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct TYPE_10__ {int processed_byte_count; } ;
struct TYPE_8__ {int cv; } ;
struct TYPE_7__ {int iv; } ;
struct TYPE_9__ {TYPE_2__ aes_cbc; TYPE_1__ aes_ctr; } ;
struct nx_csbcpb {TYPE_4__ csb; TYPE_3__ cpb; } ;
struct TYPE_12__ {int outlen; int inlen; } ;
struct nx_crypto_ctx {int lock; TYPE_5__* stats; TYPE_6__ op; struct nx_csbcpb* csbcpb; } ;
struct blkcipher_desc {int flags; int info; int tfm; } ;
struct TYPE_11__ {int aes_bytes; int aes_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 struct nx_crypto_ctx* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct nx_crypto_ctx*,struct blkcipher_desc*,struct scatterlist*,struct scatterlist*,unsigned int*,unsigned int,int ) ;
 int FUNC_5 (struct nx_crypto_ctx*,TYPE_6__*,int) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct blkcipher_desc *VAR_3,
       struct scatterlist *VAR_4,
       struct scatterlist *VAR_5,
       unsigned int VAR_6)
{
 struct nx_crypto_ctx *VAR_7 = FUNC_2(VAR_3->tfm);
 struct nx_csbcpb *VAR_8 = VAR_7->csbcpb;
 unsigned long VAR_9;
 unsigned int VAR_10 = 0, VAR_11;
 int VAR_12;

 FUNC_6(&VAR_7->lock, VAR_9);

 do {
  VAR_11 = VAR_6 - VAR_10;

  VAR_12 = FUNC_4(VAR_7, VAR_3, VAR_4, VAR_5, &VAR_11,
           VAR_10, VAR_8->cpb.aes_ctr.iv);
  if (VAR_12)
   goto out;

  if (!VAR_7->op.inlen || !VAR_7->op.outlen) {
   VAR_12 = -VAR_2;
   goto out;
  }

  VAR_12 = FUNC_5(VAR_7, &VAR_7->op,
       VAR_3->flags & VAR_1);
  if (VAR_12)
   goto out;

  FUNC_3(VAR_3->info, VAR_8->cpb.aes_cbc.cv, VAR_0);

  FUNC_1(&(VAR_7->stats->aes_ops));
  FUNC_0(VAR_8->csb.processed_byte_count,
        &(VAR_7->stats->aes_bytes));

  VAR_10 += VAR_11;
 } while (VAR_10 < VAR_6);
out:
 FUNC_7(&VAR_7->lock, VAR_9);
 return VAR_12;
}
