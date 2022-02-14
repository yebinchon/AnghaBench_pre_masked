
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_aes_reqctx {int mode; struct omap_aes_dev* dd; } ;
struct omap_aes_dev {int flags; struct aead_request* aead_req; struct omap_aes_ctx* ctx; int lock; int aead_queue; } ;
struct omap_aes_ctx {int dummy; } ;
struct TYPE_2__ {int (* complete ) (TYPE_1__*,int ) ;} ;
struct aead_request {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct aead_request* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct aead_request*) ;
 struct aead_request* FUNC_2 (int *) ;
 struct omap_aes_reqctx* FUNC_3 (struct aead_request*) ;
 struct omap_aes_ctx* FUNC_4 (int ) ;
 int FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct omap_aes_dev*) ;
 int FUNC_7 (struct omap_aes_dev*,struct aead_request*) ;
 int FUNC_8 (struct omap_aes_dev*,int) ;
 int FUNC_9 (struct omap_aes_dev*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_13(struct omap_aes_dev *VAR_3,
         struct aead_request *VAR_4)
{
 struct omap_aes_ctx *VAR_5;
 struct aead_request *VAR_6;
 struct omap_aes_reqctx *VAR_7;
 unsigned long VAR_8;
 int VAR_9, VAR_10 = 0;

 FUNC_10(&VAR_3->lock, VAR_8);
 if (VAR_4)
  VAR_10 = FUNC_1(&VAR_3->aead_queue, VAR_4);
 if (VAR_3->flags & VAR_1) {
  FUNC_11(&VAR_3->lock, VAR_8);
  return VAR_10;
 }

 VAR_6 = FUNC_2(&VAR_3->aead_queue);
 VAR_4 = FUNC_0(&VAR_3->aead_queue);
 if (VAR_4)
  VAR_3->flags |= VAR_1;
 FUNC_11(&VAR_3->lock, VAR_8);

 if (!VAR_4)
  return VAR_10;

 if (VAR_6)
  VAR_6->base.complete(&VAR_6->base, -VAR_0);

 VAR_5 = FUNC_4(FUNC_5(VAR_4));
 VAR_7 = FUNC_3(VAR_4);

 VAR_3->ctx = VAR_5;
 VAR_7->dd = VAR_3;
 VAR_3->aead_req = VAR_4;

 VAR_7->mode &= VAR_2;
 VAR_3->flags = (VAR_3->flags & ~VAR_2) | VAR_7->mode;

 VAR_9 = FUNC_7(VAR_3, VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_9(VAR_3);
 if (!VAR_9)
  VAR_9 = FUNC_6(VAR_3);

 if (VAR_9) {
  FUNC_8(VAR_3, VAR_9);
  FUNC_13(VAR_3, ((void*)0));
 }

 return VAR_10;
}
