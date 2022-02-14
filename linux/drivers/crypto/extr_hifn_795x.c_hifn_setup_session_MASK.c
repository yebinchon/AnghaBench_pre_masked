
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct scatterlist {unsigned long offset; int length; } ;
struct TYPE_7__ {int flags; } ;
struct hifn_request_context {scalar_t__ mode; int type; int op; int ivsize; scalar_t__ iv; TYPE_3__ walk; } ;
struct hifn_device {scalar_t__ started; TYPE_2__* pdev; int lock; int active; int snum; } ;
struct hifn_context {int keysize; int key; struct hifn_device* dev; } ;
struct TYPE_5__ {int tfm; } ;
struct ablkcipher_request {unsigned int nbytes; struct scatterlist* dst; int src; TYPE_1__ base; } ;
struct TYPE_6__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (unsigned long,int ) ;
 struct hifn_request_context* FUNC_1 (struct ablkcipher_request*) ;
 struct hifn_context* FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,scalar_t__,int ,int ,int ,scalar_t__,int ,int ,int) ;
 int FUNC_4 (struct ablkcipher_request*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,unsigned int,int ) ;
 int FUNC_6 (struct hifn_device*,struct hifn_context*,struct hifn_request_context*,int ,struct scatterlist*,unsigned int,struct ablkcipher_request*) ;
 unsigned long FUNC_7 (int ,unsigned int) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_10(struct ablkcipher_request *VAR_8)
{
 struct hifn_context *VAR_9 = FUNC_2(VAR_8->base.tfm);
 struct hifn_request_context *VAR_10 = FUNC_1(VAR_8);
 struct hifn_device *VAR_11 = VAR_9->dev;
 unsigned long VAR_12, VAR_13;
 unsigned int VAR_14 = VAR_8->nbytes, VAR_15 = 0;
 int VAR_16 = -VAR_3, VAR_17;
 struct scatterlist *VAR_18;

 if (VAR_10->iv && !VAR_10->ivsize && VAR_10->mode != VAR_0)
  goto err_out_exit;

 VAR_10->walk.flags = 0;

 while (VAR_14) {
  VAR_18 = &VAR_8->dst[VAR_15];
  VAR_12 = FUNC_7(VAR_18->length, VAR_14);

  if (!FUNC_0(VAR_18->offset, VAR_6) ||
      !FUNC_0(VAR_12, VAR_6))
   VAR_10->walk.flags |= VAR_1;

  VAR_14 -= VAR_12;
  VAR_15++;
 }

 if (VAR_10->walk.flags & VAR_1) {
  VAR_16 = FUNC_5(&VAR_10->walk, VAR_15, VAR_4);
  if (VAR_16 < 0)
   return VAR_16;
 }

 VAR_17 = FUNC_4(VAR_8, &VAR_10->walk);
 if (VAR_17 < 0) {
  VAR_16 = VAR_17;
  goto err_out_exit;
 }

 FUNC_8(&VAR_11->lock, VAR_13);
 if (VAR_11->started + VAR_17 > VAR_7) {
  VAR_16 = -VAR_2;
  goto err_out;
 }

 VAR_16 = FUNC_6(VAR_11, VAR_9, VAR_10, VAR_8->src, VAR_8->dst, VAR_8->nbytes, VAR_8);
 if (VAR_16)
  goto err_out;

 VAR_11->snum++;

 VAR_11->active = VAR_5;
 FUNC_9(&VAR_11->lock, VAR_13);

 return 0;

err_out:
 FUNC_9(&VAR_11->lock, VAR_13);
err_out_exit:
 if (VAR_16) {
  FUNC_3(&VAR_11->pdev->dev, "iv: %p [%d], key: %p [%d], mode: %u, op: %u, "
    "type: %u, err: %d.\n",
    VAR_10->iv, VAR_10->ivsize,
    VAR_9->key, VAR_9->keysize,
    VAR_10->mode, VAR_10->op, VAR_10->type, VAR_16);
 }

 return VAR_16;
}
