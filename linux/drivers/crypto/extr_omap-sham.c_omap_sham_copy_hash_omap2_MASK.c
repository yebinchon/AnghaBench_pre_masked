
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_sham_reqctx {scalar_t__ digest; struct omap_sham_dev* dd; } ;
struct omap_sham_dev {TYPE_1__* pdata; } ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {int digest_size; } ;


 int FUNC_0 (struct omap_sham_dev*,int) ;
 struct omap_sham_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct omap_sham_dev*,int ) ;
 int FUNC_3 (struct omap_sham_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct ahash_request *VAR_0, int VAR_1)
{
 struct omap_sham_reqctx *VAR_2 = FUNC_1(VAR_0);
 struct omap_sham_dev *VAR_3 = VAR_2->dd;
 u32 *VAR_4 = (u32 *)VAR_2->digest;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->pdata->digest_size / sizeof(u32); VAR_5++) {
  if (VAR_1)
   VAR_4[VAR_5] = FUNC_2(VAR_3, FUNC_0(VAR_3, VAR_5));
  else
   FUNC_3(VAR_3, FUNC_0(VAR_3, VAR_5), VAR_4[VAR_5]);
 }
}
