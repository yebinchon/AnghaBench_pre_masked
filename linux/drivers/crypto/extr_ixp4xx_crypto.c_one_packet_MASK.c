
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


typedef int u32 ;
struct TYPE_8__ {scalar_t__ npe_ctx; } ;
struct ixp_ctx {int completion; int configuring; TYPE_2__ decrypt; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int tfm; struct ablkcipher_request* ablk_req; struct aead_request* aead_req; } ;
struct crypt_ctl {int ctl_flags; TYPE_1__ data; int src_buf; TYPE_6__* regist_buf; TYPE_6__* regist_ptr; int dst_buf; } ;
struct TYPE_10__ {int (* complete ) (TYPE_4__*,int) ;} ;
struct aead_request {TYPE_4__ base; } ;
struct aead_ctx {int hmac_virt; int dst; int src; } ;
struct TYPE_9__ {int (* complete ) (TYPE_3__*,int) ;} ;
struct ablkcipher_request {TYPE_3__ base; } ;
struct ablk_ctx {int src; int dst; } ;
typedef int dma_addr_t ;
struct TYPE_12__ {int phys_addr; } ;
struct TYPE_11__ {struct device dev; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct ablk_ctx* FUNC_1 (struct ablkcipher_request*) ;
 struct aead_ctx* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct crypt_ctl* FUNC_6 (int) ;
 struct ixp_ctx* FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 (int ,TYPE_6__*,int ) ;
 int FUNC_9 (struct crypt_ctl*) ;
 int FUNC_10 (struct device*,int ,int ) ;
 TYPE_5__* VAR_6 ;
 int FUNC_11 (TYPE_4__*,int) ;
 int FUNC_12 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_13(dma_addr_t VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct crypt_ctl *VAR_9;
 struct ixp_ctx *VAR_10;
 int VAR_11;

 VAR_11 = VAR_7 & 0x1 ? -VAR_3 : 0;
 VAR_7 &= ~0x3;
 VAR_9 = FUNC_6(VAR_7);

 switch (VAR_9->ctl_flags & VAR_1) {
 case 128: {
  struct aead_request *VAR_12 = VAR_9->data.aead_req;
  struct aead_ctx *VAR_13 = FUNC_2(VAR_12);

  FUNC_10(VAR_8, VAR_13->src, VAR_9->src_buf);
  FUNC_10(VAR_8, VAR_13->dst, VAR_9->dst_buf);
  if (VAR_13->hmac_virt) {
   FUNC_9(VAR_9);
  }
  VAR_12->base.complete(&VAR_12->base, VAR_11);
  break;
 }
 case 129: {
  struct ablkcipher_request *VAR_14 = VAR_9->data.ablk_req;
  struct ablk_ctx *VAR_15 = FUNC_1(VAR_14);

  if (VAR_15->dst) {
   FUNC_10(VAR_8, VAR_15->dst, VAR_9->dst_buf);
  }
  FUNC_10(VAR_8, VAR_15->src, VAR_9->src_buf);
  VAR_14->base.complete(&VAR_14->base, VAR_11);
  break;
 }
 case 131:
  VAR_10 = FUNC_7(VAR_9->data.tfm);
  FUNC_8(VAR_5, VAR_9->regist_ptr,
    VAR_9->regist_buf->phys_addr);
  FUNC_8(VAR_4, VAR_9->regist_buf, VAR_9->src_buf);
  if (FUNC_3(&VAR_10->configuring))
   FUNC_4(&VAR_10->completion);
  break;
 case 130:
  VAR_10 = FUNC_7(VAR_9->data.tfm);
  *(u32*)VAR_10->decrypt.npe_ctx &= FUNC_5(~VAR_0);
  if (FUNC_3(&VAR_10->configuring))
   FUNC_4(&VAR_10->completion);
  break;
 default:
  FUNC_0();
 }
 VAR_9->ctl_flags = VAR_2;
}
