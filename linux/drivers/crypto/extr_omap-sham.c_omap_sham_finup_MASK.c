
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_reqctx {int flags; } ;
struct ahash_request {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct omap_sham_reqctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_3)
{
 struct omap_sham_reqctx *VAR_4 = FUNC_1(VAR_3);
 int VAR_5, VAR_6;

 VAR_4->flags |= FUNC_0(VAR_2);

 VAR_5 = FUNC_3(VAR_3);
 if (VAR_5 == -VAR_1 || VAR_5 == -VAR_0)
  return VAR_5;




 VAR_6 = FUNC_2(VAR_3);

 return VAR_5 ?: VAR_6;
}
