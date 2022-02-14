
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_reqctx {scalar_t__ bufcnt; scalar_t__ buflen; scalar_t__ buffer; int flags; struct omap_sham_dev* dd; } ;
struct omap_sham_dev {scalar_t__ polling_mode; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct omap_sham_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*,int ) ;
 int FUNC_3 (scalar_t__,int ,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_2)
{
 struct omap_sham_reqctx *VAR_3 = FUNC_1(VAR_2);
 struct omap_sham_dev *VAR_4 = VAR_3->dd;

 if (!VAR_2->nbytes)
  return 0;

 if (VAR_3->bufcnt + VAR_2->nbytes <= VAR_3->buflen) {
  FUNC_3(VAR_3->buffer + VAR_3->bufcnt, VAR_2->src,
      0, VAR_2->nbytes, 0);
  VAR_3->bufcnt += VAR_2->nbytes;
  return 0;
 }

 if (VAR_4->polling_mode)
  VAR_3->flags |= FUNC_0(VAR_0);

 return FUNC_2(VAR_2, VAR_1);
}
