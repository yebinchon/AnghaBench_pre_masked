
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_reqctx {int flags; int bufcnt; scalar_t__ digcnt; struct omap_sham_dev* dd; } ;
struct omap_sham_dev {int dev; int flags; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct omap_sham_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int ,char*,scalar_t__,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct ahash_request*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ahash_request *VAR_2)
{
 struct omap_sham_reqctx *VAR_3 = FUNC_1(VAR_2);
 struct omap_sham_dev *VAR_4 = VAR_3->dd;
 int VAR_5 = 0;

 if (VAR_3->digcnt) {
  FUNC_3(VAR_2);
  if ((VAR_3->flags & FUNC_0(VAR_1)) &&
    !FUNC_5(VAR_0, &VAR_4->flags))
   VAR_5 = FUNC_4(VAR_2);
 }

 FUNC_2(VAR_4->dev, "digcnt: %d, bufcnt: %d\n", VAR_3->digcnt, VAR_3->bufcnt);

 return VAR_5;
}
