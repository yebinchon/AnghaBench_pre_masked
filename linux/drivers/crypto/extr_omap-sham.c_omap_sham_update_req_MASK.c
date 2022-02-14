
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_reqctx {int flags; scalar_t__ total; int digcnt; } ;
struct omap_sham_dev {scalar_t__ fallback_sz; int dev; struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct omap_sham_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int ,char*,int,int ,...) ;
 scalar_t__ FUNC_3 (struct omap_sham_reqctx*) ;
 int FUNC_4 (struct omap_sham_dev*,scalar_t__,int) ;
 int FUNC_5 (struct omap_sham_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_6(struct omap_sham_dev *VAR_2)
{
 struct ahash_request *VAR_3 = VAR_2->req;
 struct omap_sham_reqctx *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;
 bool VAR_6 = VAR_4->flags & FUNC_0(VAR_1);

 FUNC_2(VAR_2->dev, "update_req: total: %u, digcnt: %d, finup: %d\n",
   VAR_4->total, VAR_4->digcnt, (VAR_4->flags & FUNC_0(VAR_1)) != 0);

 if (VAR_4->total < FUNC_3(VAR_4) ||
     VAR_4->total < VAR_2->fallback_sz)
  VAR_4->flags |= FUNC_0(VAR_0);

 if (VAR_4->flags & FUNC_0(VAR_0))
  VAR_5 = FUNC_4(VAR_2, VAR_4->total, VAR_6);
 else
  VAR_5 = FUNC_5(VAR_2, VAR_4->total, VAR_6);


 FUNC_2(VAR_2->dev, "update: err: %d, digcnt: %d\n", VAR_5, VAR_4->digcnt);

 return VAR_5;
}
