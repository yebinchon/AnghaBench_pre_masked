
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_sham_reqctx {scalar_t__ bufcnt; scalar_t__ buffer; TYPE_1__* dd; int flags; } ;
struct omap_sham_ctx {int fallback; } ;
struct TYPE_4__ {int flags; int tfm; } ;
struct ahash_request {int result; TYPE_2__ base; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct omap_sham_reqctx* FUNC_0 (struct ahash_request*) ;
 struct omap_sham_ctx* FUNC_1 (int ) ;
 int FUNC_2 (struct omap_sham_reqctx*) ;
 int FUNC_3 (int ,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_2)
{
 struct omap_sham_ctx *VAR_3 = FUNC_1(VAR_2->base.tfm);
 struct omap_sham_reqctx *VAR_4 = FUNC_0(VAR_2);
 int VAR_5 = 0;






 if (FUNC_4(VAR_1, &VAR_4->flags) &&
     !FUNC_4(VAR_0, &VAR_4->dd->flags))
  VAR_5 = FUNC_2(VAR_4);

 return FUNC_3(VAR_3->fallback, VAR_2->base.flags,
          VAR_4->buffer + VAR_5,
          VAR_4->bufcnt - VAR_5, VAR_2->result);
}
