
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ix_sa_dir {int npe_ctx_idx; int npe_mode; int npe_ctx_phys; } ;
struct ixp_ctx {struct ix_sa_dir decrypt; struct ix_sa_dir encrypt; int configuring; } ;
struct device {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_5__ {struct aead_request* aead_req; } ;
struct crypt_ctl {int crypt_offs; int crypt_len; int ctl_flags; int src_buf; int dst_buf; scalar_t__ icv_rev_aes; scalar_t__ auth_len; int mode; int iv; scalar_t__ auth_offs; int init_len; int crypto_ctx; TYPE_2__ data; } ;
struct buffer_desc {unsigned int buf_len; scalar_t__ phys_addr; int phys_next; int * next; } ;
struct TYPE_4__ {int flags; } ;
struct aead_request {unsigned int cryptlen; int src; int dst; int iv; scalar_t__ assoclen; TYPE_1__ base; } ;
struct aead_ctx {int encrypt; int * src; int * dst; int * hmac_virt; } ;
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
 struct aead_ctx* FUNC_1 (struct aead_request*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_13 ;
 struct buffer_desc* FUNC_3 (struct device*,int ,scalar_t__,struct buffer_desc*,int ,int) ;
 int FUNC_4 (struct crypt_ctl*) ;
 unsigned int FUNC_5 (struct crypto_aead*) ;
 struct ixp_ctx* FUNC_6 (struct crypto_aead*) ;
 unsigned int FUNC_7 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_8 (struct aead_request*) ;
 int * FUNC_9 (int ,int ,scalar_t__*) ;
 int FUNC_10 (struct device*,int *,int ) ;
 struct crypt_ctl* FUNC_11 () ;
 int FUNC_12 (int ,int ,unsigned int) ;
 TYPE_3__* VAR_14 ;
 int FUNC_13 (int ,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int ,unsigned int,unsigned int,int ) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct aead_request *VAR_15, int VAR_16,
  int VAR_17, int VAR_18, u8 *VAR_19)
{
 struct crypto_aead *VAR_20 = FUNC_8(VAR_15);
 struct ixp_ctx *VAR_21 = FUNC_6(VAR_20);
 unsigned VAR_22 = FUNC_7(VAR_20);
 unsigned VAR_23 = FUNC_5(VAR_20);
 struct ix_sa_dir *VAR_24;
 struct crypt_ctl *VAR_25;
 unsigned int VAR_26;
 struct buffer_desc *VAR_27, VAR_28;
 struct aead_ctx *VAR_29 = FUNC_1(VAR_15);
 struct device *VAR_30 = &VAR_14->dev;
 gfp_t VAR_31 = VAR_15->base.flags & VAR_0 ?
    VAR_10 : VAR_9;
 enum dma_data_direction VAR_32 = VAR_3;
 unsigned int VAR_33;

 if (FUNC_14(VAR_12))
  return -VAR_6;
 if (FUNC_2(&VAR_21->configuring))
  return -VAR_6;

 if (VAR_16) {
  VAR_24 = &VAR_21->encrypt;
  VAR_26 = VAR_15->cryptlen;
 } else {
  VAR_24 = &VAR_21->decrypt;

  VAR_26 = VAR_15->cryptlen -VAR_23;
  VAR_18 -= VAR_23;
 }
 VAR_25 = FUNC_11();
 if (!VAR_25)
  return -VAR_8;

 VAR_25->data.aead_req = VAR_15;
 VAR_25->crypto_ctx = VAR_24->npe_ctx_phys;
 VAR_25->mode = VAR_24->npe_mode;
 VAR_25->init_len = VAR_24->npe_ctx_idx;

 VAR_25->crypt_offs = VAR_17;
 VAR_25->crypt_len = VAR_18;

 VAR_25->auth_offs = 0;
 VAR_25->auth_len = VAR_15->assoclen + VAR_26;
 FUNC_0(VAR_22 && !VAR_15->iv);
 FUNC_12(VAR_25->iv, VAR_15->iv, VAR_22);

 VAR_27 = FUNC_3(VAR_30, VAR_15->src, VAR_25->auth_len,
         &VAR_28, VAR_31, VAR_32);
 VAR_29->src = VAR_28.next;
 VAR_25->src_buf = VAR_28.phys_next;
 if (!VAR_27)
  goto free_buf_src;

 VAR_33 = VAR_27->buf_len;
 if (VAR_33 >= VAR_23)
  VAR_25->icv_rev_aes = VAR_27->phys_addr +
         VAR_27->buf_len - VAR_23;

 VAR_29->dst = ((void*)0);

 if (VAR_15->src != VAR_15->dst) {
  struct buffer_desc VAR_34;

  VAR_25->mode |= VAR_11;
  VAR_32 = VAR_5;

  VAR_27 = FUNC_3(VAR_30, VAR_15->dst, VAR_25->auth_len,
          &VAR_34, VAR_31, VAR_4);
  VAR_29->dst = VAR_34.next;
  VAR_25->dst_buf = VAR_34.phys_next;

  if (!VAR_27)
   goto free_buf_dst;

  if (VAR_16) {
   VAR_33 = VAR_27->buf_len;
   if (VAR_33 >= VAR_23)
    VAR_25->icv_rev_aes = VAR_27->phys_addr +
           VAR_27->buf_len - VAR_23;
  }
 }

 if (FUNC_17(VAR_33 < VAR_23)) {


  VAR_29->hmac_virt = FUNC_9(VAR_13, VAR_31,
    &VAR_25->icv_rev_aes);
  if (FUNC_17(!VAR_29->hmac_virt))
   goto free_buf_dst;
  if (!VAR_16) {
   FUNC_16(VAR_29->hmac_virt,
    VAR_15->src, VAR_26, VAR_23, 0);
  }
  VAR_29->encrypt = VAR_16;
 } else {
  VAR_29->hmac_virt = ((void*)0);
 }

 VAR_25->ctl_flags |= VAR_1;
 FUNC_13(VAR_12, FUNC_4(VAR_25));
 FUNC_0(FUNC_15(VAR_12));
 return -VAR_7;

free_buf_dst:
 FUNC_10(VAR_30, VAR_29->dst, VAR_25->dst_buf);
free_buf_src:
 FUNC_10(VAR_30, VAR_29->src, VAR_25->src_buf);
 VAR_25->ctl_flags = VAR_2;
 return -VAR_8;
}
