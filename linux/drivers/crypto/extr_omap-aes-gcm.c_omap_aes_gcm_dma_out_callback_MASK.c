
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_aes_reqctx {scalar_t__ auth_tag; } ;
struct omap_aes_dev {int flags; TYPE_1__* aead_req; int authsize; scalar_t__ total; } ;
struct TYPE_2__ {scalar_t__ assoclen; int src; } ;


 int FUNC_0 (struct omap_aes_dev*,int) ;
 int VAR_0 ;
 struct omap_aes_reqctx* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct omap_aes_dev*) ;
 int FUNC_3 (struct omap_aes_dev*,int ) ;
 int FUNC_4 (int*,int ,scalar_t__,int ,int ) ;

void FUNC_5(void *VAR_1)
{
 struct omap_aes_dev *VAR_2 = VAR_1;
 struct omap_aes_reqctx *VAR_3;
 int VAR_4, VAR_5;
 u32 *VAR_6, VAR_7[4];

 if (!(VAR_2->flags & VAR_0))
  FUNC_4(VAR_7, VAR_2->aead_req->src,
      VAR_2->total + VAR_2->aead_req->assoclen,
      VAR_2->authsize, 0);

 VAR_3 = FUNC_1(VAR_2->aead_req);
 VAR_6 = (u32 *)VAR_3->auth_tag;
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_5 = FUNC_3(VAR_2, FUNC_0(VAR_2, VAR_4));
  VAR_6[VAR_4] = VAR_5 ^ VAR_6[VAR_4];
  if (!(VAR_2->flags & VAR_0))
   VAR_6[VAR_4] = VAR_6[VAR_4] ^ VAR_7[VAR_4];
 }

 FUNC_2(VAR_2);
}
