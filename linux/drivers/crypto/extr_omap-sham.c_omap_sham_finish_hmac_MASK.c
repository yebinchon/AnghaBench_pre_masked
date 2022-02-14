
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct omap_sham_hmac_ctx {int opad; int shash; } ;
struct omap_sham_ctx {struct omap_sham_hmac_ctx* base; } ;
struct TYPE_7__ {int tfm; } ;
struct ahash_request {int result; TYPE_1__ base; } ;
struct TYPE_8__ {int tfm; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,int,int ) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int ,int) ;
 struct omap_sham_ctx* FUNC_6 (int ) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static int FUNC_7(struct ahash_request *VAR_1)
{
 struct omap_sham_ctx *VAR_2 = FUNC_6(VAR_1->base.tfm);
 struct omap_sham_hmac_ctx *VAR_3 = VAR_2->base;
 int VAR_4 = FUNC_1(VAR_3->shash);
 int VAR_5 = FUNC_2(VAR_3->shash);
 FUNC_0(VAR_0, VAR_3->shash);

 VAR_0->tfm = VAR_3->shash;

 return FUNC_4(VAR_0) ?:
        FUNC_5(VAR_0, VAR_3->opad, VAR_4) ?:
        FUNC_3(VAR_0, VAR_1->result, VAR_5, VAR_1->result);
}
