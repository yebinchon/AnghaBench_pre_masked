
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ix_sa_dir {int npe_ctx_idx; int npe_mode; int npe_ctx_phys; } ;
struct ixp_ctx {struct ix_sa_dir decrypt; struct ix_sa_dir encrypt; int configuring; } ;
struct device {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct TYPE_5__ {struct ablkcipher_request* ablk_req; } ;
struct crypt_ctl {unsigned int crypt_len; int ctl_flags; int dst_buf; int src_buf; int mode; int iv; scalar_t__ crypt_offs; int init_len; int crypto_ctx; TYPE_2__ data; } ;
struct buffer_desc {int phys_next; int * next; } ;
struct TYPE_4__ {int flags; } ;
struct ablkcipher_request {unsigned int nbytes; int dst; int src; int info; TYPE_1__ base; } ;
struct ablk_ctx {int * dst; int * src; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct ablk_ctx* FUNC_1 (struct ablkcipher_request*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int ,unsigned int,struct buffer_desc*,int ,int) ;
 int FUNC_4 (struct crypt_ctl*) ;
 struct ixp_ctx* FUNC_5 (struct crypto_ablkcipher*) ;
 unsigned int FUNC_6 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_7 (struct ablkcipher_request*) ;
 int FUNC_8 (struct device*,int *,int ) ;
 struct crypt_ctl* FUNC_9 () ;
 int FUNC_10 (int ,int ,unsigned int) ;
 TYPE_3__* VAR_13 ;
 int FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int FUNC_14(struct ablkcipher_request *VAR_14, int VAR_15)
{
 struct crypto_ablkcipher *VAR_16 = FUNC_7(VAR_14);
 struct ixp_ctx *VAR_17 = FUNC_5(VAR_16);
 unsigned VAR_18 = FUNC_6(VAR_16);
 struct ix_sa_dir *VAR_19;
 struct crypt_ctl *VAR_20;
 unsigned int VAR_21 = VAR_14->nbytes;
 enum dma_data_direction VAR_22 = VAR_3;
 struct ablk_ctx *VAR_23 = FUNC_1(VAR_14);
 struct buffer_desc VAR_24;
 struct device *VAR_25 = &VAR_13->dev;
 gfp_t VAR_26 = VAR_14->base.flags & VAR_0 ?
    VAR_10 : VAR_9;

 if (FUNC_12(VAR_12))
  return -VAR_6;
 if (FUNC_2(&VAR_17->configuring))
  return -VAR_6;

 VAR_19 = VAR_15 ? &VAR_17->encrypt : &VAR_17->decrypt;

 VAR_20 = FUNC_9();
 if (!VAR_20)
  return -VAR_8;

 VAR_20->data.ablk_req = VAR_14;
 VAR_20->crypto_ctx = VAR_19->npe_ctx_phys;
 VAR_20->mode = VAR_19->npe_mode;
 VAR_20->init_len = VAR_19->npe_ctx_idx;

 VAR_20->crypt_offs = 0;
 VAR_20->crypt_len = VAR_21;

 FUNC_0(VAR_18 && !VAR_14->info);
 FUNC_10(VAR_20->iv, VAR_14->info, VAR_18);
 if (VAR_14->src != VAR_14->dst) {
  struct buffer_desc VAR_27;
  VAR_20->mode |= VAR_11;


  VAR_23->dst = ((void*)0);
  if (!FUNC_3(VAR_25, VAR_14->dst, VAR_21, &VAR_27,
     VAR_26, VAR_4))
   goto free_buf_dest;
  VAR_22 = VAR_5;
  VAR_23->dst = VAR_27.next;
  VAR_20->dst_buf = VAR_27.phys_next;
 } else {
  VAR_23->dst = ((void*)0);
 }
 VAR_23->src = ((void*)0);
 if (!FUNC_3(VAR_25, VAR_14->src, VAR_21, &VAR_24,
    VAR_26, VAR_22))
  goto free_buf_src;

 VAR_23->src = VAR_24.next;
 VAR_20->src_buf = VAR_24.phys_next;
 VAR_20->ctl_flags |= VAR_1;
 FUNC_11(VAR_12, FUNC_4(VAR_20));
 FUNC_0(FUNC_13(VAR_12));
 return -VAR_7;

free_buf_src:
 FUNC_8(VAR_25, VAR_23->src, VAR_20->src_buf);
free_buf_dest:
 if (VAR_14->src != VAR_14->dst) {
  FUNC_8(VAR_25, VAR_23->dst, VAR_20->dst_buf);
 }
 VAR_20->ctl_flags = VAR_2;
 return -VAR_8;
}
