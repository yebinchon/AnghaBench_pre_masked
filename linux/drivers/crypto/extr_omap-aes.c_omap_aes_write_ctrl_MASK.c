
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct omap_aes_reqctx {scalar_t__ iv; } ;
struct omap_aes_dev {int flags; TYPE_2__* ctx; TYPE_3__* aead_req; TYPE_1__* req; } ;
struct TYPE_6__ {scalar_t__ iv; } ;
struct TYPE_5__ {int keylen; int * key; } ;
struct TYPE_4__ {int* info; } ;


 int FUNC_0 (struct omap_aes_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct omap_aes_dev*,int ) ;
 int FUNC_2 (struct omap_aes_dev*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int ) ;
 struct omap_aes_reqctx* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct omap_aes_dev*) ;
 int FUNC_7 (struct omap_aes_dev*,int,int) ;
 int FUNC_8 (struct omap_aes_dev*,int ,int,int ) ;
 int FUNC_9 (struct omap_aes_dev*,int ,int*,int) ;

int FUNC_10(struct omap_aes_dev *VAR_10)
{
 struct omap_aes_reqctx *VAR_11;
 unsigned int VAR_12;
 int VAR_13, VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_6(VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_12 = VAR_10->ctx->keylen / sizeof(u32);


 if (VAR_10->flags & VAR_9)
  for (VAR_13 = 0; VAR_13 < 0x40; VAR_13 = VAR_13 + 4)
   FUNC_7(VAR_10, VAR_13, 0x0);

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_7(VAR_10, FUNC_2(VAR_10, VAR_13),
   FUNC_4(VAR_10->ctx->key[VAR_13]));
 }

 if ((VAR_10->flags & (VAR_6 | VAR_7)) && VAR_10->req->info)
  FUNC_9(VAR_10, FUNC_1(VAR_10, 0), VAR_10->req->info, 4);

 if ((VAR_10->flags & (VAR_9)) && VAR_10->aead_req->iv) {
  VAR_11 = FUNC_5(VAR_10->aead_req);
  FUNC_9(VAR_10, FUNC_1(VAR_10, 0), (u32 *)VAR_11->iv, 4);
 }

 VAR_15 = FUNC_3(((VAR_10->ctx->keylen >> 3) - 1), 4, 3);
 if (VAR_10->flags & VAR_6)
  VAR_15 |= VAR_0;

 if (VAR_10->flags & (VAR_7 | VAR_9))
  VAR_15 |= VAR_1 | VAR_2;

 if (VAR_10->flags & VAR_9)
  VAR_15 |= VAR_4;

 if (VAR_10->flags & VAR_8)
  VAR_15 |= VAR_3;

 FUNC_8(VAR_10, FUNC_0(VAR_10), VAR_15, VAR_5);

 return 0;
}
