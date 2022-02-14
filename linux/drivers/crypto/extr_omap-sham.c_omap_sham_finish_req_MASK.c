
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct omap_sham_reqctx {int flags; TYPE_3__* sg; scalar_t__ bufcnt; struct omap_sham_dev* dd; } ;
struct omap_sham_dev {int flags; int dev; TYPE_1__* pdata; } ;
struct TYPE_6__ {int (* complete ) (TYPE_2__*,int) ;} ;
struct ahash_request {TYPE_2__ base; } ;
struct TYPE_7__ {scalar_t__ length; } ;
struct TYPE_5__ {int (* copy_hash ) (struct ahash_request*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct omap_sham_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (struct ahash_request*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct ahash_request*,int) ;
 int FUNC_10 (TYPE_2__*,int) ;
 scalar_t__ FUNC_11 (int ,int*) ;

__attribute__((used)) static void FUNC_12(struct ahash_request *VAR_8, int VAR_9)
{
 struct omap_sham_reqctx *VAR_10 = FUNC_1(VAR_8);
 struct omap_sham_dev *VAR_11 = VAR_10->dd;

 if (FUNC_11(VAR_7, &VAR_11->flags))
  FUNC_2((unsigned long)FUNC_8(VAR_10->sg),
      FUNC_3(VAR_10->sg->length + VAR_10->bufcnt));

 if (FUNC_11(VAR_6, &VAR_11->flags))
  FUNC_4(VAR_10->sg);

 VAR_10->sg = ((void*)0);

 VAR_11->flags &= ~(FUNC_0(VAR_6) | FUNC_0(VAR_7));

 if (!VAR_9) {
  VAR_11->pdata->copy_hash(VAR_8, 1);
  if (FUNC_11(VAR_4, &VAR_11->flags))
   VAR_9 = FUNC_5(VAR_8);
 } else {
  VAR_10->flags |= FUNC_0(VAR_3);
 }


 VAR_11->flags &= ~(FUNC_0(VAR_0) | FUNC_0(VAR_4) | FUNC_0(VAR_1) |
   FUNC_0(VAR_2) | FUNC_0(VAR_5));

 FUNC_6(VAR_11->dev);
 FUNC_7(VAR_11->dev);

 if (VAR_8->base.complete)
  VAR_8->base.complete(&VAR_8->base, VAR_9);
}
