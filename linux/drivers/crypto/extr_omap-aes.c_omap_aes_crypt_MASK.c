
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_aes_reqctx {unsigned long mode; } ;
struct omap_aes_dev {int dummy; } ;
struct omap_aes_ctx {int fallback; } ;
struct TYPE_2__ {int flags; } ;
struct ablkcipher_request {scalar_t__ nbytes; int info; int dst; int src; TYPE_1__ base; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct omap_aes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 scalar_t__ VAR_3 ;
 struct omap_aes_ctx* FUNC_2 (int ) ;
 int FUNC_3 (struct ablkcipher_request*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct omap_aes_dev* FUNC_6 (struct omap_aes_reqctx*) ;
 int FUNC_7 (struct omap_aes_dev*,struct ablkcipher_request*) ;
 int FUNC_8 (char*,scalar_t__,int,int) ;
 int FUNC_9 (int ,int ,int *,int *) ;
 int FUNC_10 (int ,int ,int ,scalar_t__,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_13(struct ablkcipher_request *VAR_5, unsigned long VAR_6)
{
 struct omap_aes_ctx *VAR_7 = FUNC_2(
   FUNC_3(VAR_5));
 struct omap_aes_reqctx *VAR_8 = FUNC_1(VAR_5);
 struct omap_aes_dev *VAR_9;
 int VAR_10;

 FUNC_8("nbytes: %d, enc: %d, cbc: %d\n", VAR_5->nbytes,
    !!(VAR_6 & VAR_2),
    !!(VAR_6 & VAR_1));

 if (VAR_5->nbytes < VAR_3) {
  FUNC_0(VAR_4, VAR_7->fallback);

  FUNC_11(VAR_4, VAR_7->fallback);
  FUNC_9(VAR_4, VAR_5->base.flags, ((void*)0),
           ((void*)0));
  FUNC_10(VAR_4, VAR_5->src, VAR_5->dst,
        VAR_5->nbytes, VAR_5->info);

  if (VAR_6 & VAR_2)
   VAR_10 = FUNC_5(VAR_4);
  else
   VAR_10 = FUNC_4(VAR_4);

  FUNC_12(VAR_4);
  return VAR_10;
 }
 VAR_9 = FUNC_6(VAR_8);
 if (!VAR_9)
  return -VAR_0;

 VAR_8->mode = VAR_6;

 return FUNC_7(VAR_9, VAR_5);
}
