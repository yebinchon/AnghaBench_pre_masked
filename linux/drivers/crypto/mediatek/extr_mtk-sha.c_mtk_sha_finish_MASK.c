
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int * digest; } ;
struct mtk_sha_reqctx {int flags; int ds; TYPE_1__ info; } ;
struct ahash_request {scalar_t__ result; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mtk_sha_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_1)
{
 struct mtk_sha_reqctx *VAR_2 = FUNC_1(VAR_1);
 __le32 *VAR_3 = VAR_2->info.digest;
 u32 *VAR_4 = (u32 *)VAR_1->result;
 int VAR_5;


 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2->ds); VAR_5++)
  VAR_4[VAR_5] = FUNC_2(VAR_3[VAR_5]);

 if (VAR_2->flags & VAR_0)
  return FUNC_3(VAR_1);

 return 0;
}
