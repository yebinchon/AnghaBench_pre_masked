
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_sham_reqctx {int flags; scalar_t__ digcnt; } ;
struct omap_sham_hmac_ctx {scalar_t__ ipad; } ;
struct omap_sham_dev {int dev; int req; } ;
struct omap_sham_ctx {struct omap_sham_hmac_ctx* base; } ;
struct crypto_ahash {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct omap_sham_dev*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct omap_sham_dev*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct omap_sham_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct omap_sham_dev*,int ) ;
 struct omap_sham_reqctx* FUNC_5 (int ) ;
 struct omap_sham_ctx* FUNC_6 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int,int) ;
 int FUNC_9 (struct omap_sham_reqctx*) ;
 int FUNC_10 (struct omap_sham_dev*,int ,int ) ;
 int FUNC_11 (struct omap_sham_dev*,int ,int,int) ;
 int FUNC_12 (struct omap_sham_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_13(struct omap_sham_dev *VAR_12, size_t VAR_13,
     int VAR_14, int VAR_15)
{
 struct omap_sham_reqctx *VAR_16 = FUNC_5(VAR_12->req);
 u32 VAR_17, VAR_18;






 VAR_17 = (VAR_16->flags & VAR_1) >> (VAR_2);
 if (!VAR_16->digcnt) {
  struct crypto_ahash *VAR_19 = FUNC_7(VAR_12->req);
  struct omap_sham_ctx *VAR_20 = FUNC_6(VAR_19);
  struct omap_sham_hmac_ctx *VAR_21 = VAR_20->base;
  int VAR_22, VAR_23;

  VAR_17 |= VAR_7;

  if (VAR_16->flags & FUNC_0(VAR_0)) {
   VAR_22 = FUNC_9(VAR_16);
   VAR_23 = VAR_22 / (2 * sizeof(u32));
   VAR_17 |= VAR_10;
   FUNC_12(VAR_12, FUNC_4(VAR_12, 0),
       (u32 *)VAR_21->ipad, VAR_23);
   FUNC_12(VAR_12, FUNC_1(VAR_12, 0),
       (u32 *)VAR_21->ipad + VAR_23, VAR_23);
   VAR_16->digcnt += VAR_22;
  }
 }

 if (VAR_14) {
  VAR_17 |= VAR_9;

  if (VAR_16->flags & FUNC_0(VAR_0))
   VAR_17 |= VAR_11;
 }

 VAR_18 = VAR_7 | VAR_9 |
        VAR_8 | VAR_11 |
        VAR_10;

 FUNC_8(VAR_12->dev, "ctrl: %08x, flags: %08lx\n", VAR_17, VAR_16->flags);
 FUNC_11(VAR_12, FUNC_3(VAR_12), VAR_17, VAR_18);
 FUNC_10(VAR_12, VAR_3, VAR_4);
 FUNC_11(VAR_12, FUNC_2(VAR_12),
        VAR_6 |
         (VAR_15 ? VAR_5 : 0),
        VAR_6 | VAR_5);
}
