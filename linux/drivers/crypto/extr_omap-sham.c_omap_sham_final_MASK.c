
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_sham_reqctx {int flags; scalar_t__ bufcnt; TYPE_1__* dd; int digcnt; } ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ fallback_sz; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct omap_sham_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*,int ) ;
 int FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_3)
{
 struct omap_sham_reqctx *VAR_4 = FUNC_1(VAR_3);

 VAR_4->flags |= FUNC_0(VAR_1);

 if (VAR_4->flags & FUNC_0(VAR_0))
  return 0;
 if (!VAR_4->digcnt && VAR_4->bufcnt < VAR_4->dd->fallback_sz)
  return FUNC_3(VAR_3);
 else if (VAR_4->bufcnt)
  return FUNC_2(VAR_3, VAR_2);


 return FUNC_4(VAR_3);
}
