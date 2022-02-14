
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_reqctx {scalar_t__ total; scalar_t__ bufcnt; } ;
struct omap_sham_dev {int dev; scalar_t__ polling_mode; struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 struct omap_sham_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct omap_sham_reqctx*) ;
 int FUNC_3 (struct omap_sham_dev*,scalar_t__,int) ;
 int FUNC_4 (struct omap_sham_dev*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_5(struct omap_sham_dev *VAR_0)
{
 struct ahash_request *VAR_1 = VAR_0->req;
 struct omap_sham_reqctx *VAR_2 = FUNC_0(VAR_1);
 int VAR_3 = 0, VAR_4 = 1;

 if ((VAR_2->total <= FUNC_2(VAR_2)) || VAR_0->polling_mode)




  VAR_4 = 0;

 if (VAR_4)
  VAR_3 = FUNC_4(VAR_0, VAR_2->total, 1);
 else
  VAR_3 = FUNC_3(VAR_0, VAR_2->total, 1);

 VAR_2->bufcnt = 0;

 FUNC_1(VAR_0->dev, "final_req: err: %d\n", VAR_3);

 return VAR_3;
}
