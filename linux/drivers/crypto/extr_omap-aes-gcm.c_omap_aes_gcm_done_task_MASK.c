
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct omap_aes_reqctx {scalar_t__ auth_tag; } ;
struct omap_aes_dev {int assoc_len; int total; int flags; int authsize; int dev; int * in_sgl; TYPE_1__* aead_req; int * orig_out; int * out_sg; int out_sg_len; int in_sg_len; int * in_sg; } ;
struct TYPE_2__ {int assoclen; int dst; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct omap_aes_reqctx* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int *,int ,int ) ;
 int FUNC_4 (int ,int *,int ,int ) ;
 int FUNC_5 (struct omap_aes_dev*) ;
 int FUNC_6 (struct omap_aes_dev*,int) ;
 int FUNC_7 (struct omap_aes_dev*,int *) ;
 int FUNC_8 (int *,int *,int,int,int ,int) ;
 int FUNC_9 (scalar_t__,int ,int,int,int) ;

__attribute__((used)) static void FUNC_10(struct omap_aes_dev *VAR_8)
{
 u8 *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0, VAR_14;
 struct omap_aes_reqctx *VAR_15;

 VAR_10 = FUNC_0(VAR_8->assoc_len, VAR_0);
 VAR_11 = FUNC_0(VAR_8->total, VAR_0);
 VAR_15 = FUNC_1(VAR_8->aead_req);

 VAR_14 = !!(VAR_8->assoc_len && VAR_8->total);

 FUNC_3(VAR_8->dev, VAR_8->out_sg, VAR_8->out_sg_len,
          VAR_1);
 FUNC_4(VAR_8->dev, VAR_8->in_sg, VAR_8->in_sg_len, VAR_2);
 FUNC_4(VAR_8->dev, VAR_8->out_sg, VAR_8->out_sg_len, VAR_1);
 FUNC_5(VAR_8);

 FUNC_8(VAR_8->out_sg, VAR_8->orig_out,
       VAR_8->aead_req->assoclen, VAR_8->total,
       VAR_7, VAR_8->flags);

 if (VAR_8->flags & VAR_5)
  FUNC_9(VAR_15->auth_tag,
      VAR_8->aead_req->dst,
      VAR_8->total + VAR_8->aead_req->assoclen,
      VAR_8->authsize, 1);

 FUNC_8(&VAR_8->in_sgl[0], ((void*)0), 0, VAR_10,
       VAR_4, VAR_8->flags);

 FUNC_8(&VAR_8->in_sgl[VAR_14], ((void*)0), 0, VAR_11,
       VAR_6, VAR_8->flags);

 if (!(VAR_8->flags & VAR_5)) {
  VAR_9 = (u8 *)VAR_15->auth_tag;
  for (VAR_12 = 0; VAR_12 < VAR_8->authsize; VAR_12++) {
   if (VAR_9[VAR_12]) {
    FUNC_2(VAR_8->dev, "GCM decryption: Tag Message is wrong\n");
    VAR_13 = -VAR_3;
   }
  }
 }

 FUNC_6(VAR_8, VAR_13);
 FUNC_7(VAR_8, ((void*)0));
}
