
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_sham_reqctx {unsigned int op; } ;
struct omap_sham_dev {int dummy; } ;
struct omap_sham_ctx {struct omap_sham_dev* dd; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct omap_sham_reqctx* FUNC_0 (struct ahash_request*) ;
 struct omap_sham_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct omap_sham_dev*,struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, unsigned int VAR_1)
{
 struct omap_sham_reqctx *VAR_2 = FUNC_0(VAR_0);
 struct omap_sham_ctx *VAR_3 = FUNC_1(VAR_0->base.tfm);
 struct omap_sham_dev *VAR_4 = VAR_3->dd;

 VAR_2->op = VAR_1;

 return FUNC_2(VAR_4, VAR_0);
}
