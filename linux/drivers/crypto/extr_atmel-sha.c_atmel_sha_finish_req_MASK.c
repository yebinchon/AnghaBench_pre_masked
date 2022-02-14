
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int flags; struct atmel_sha_dev* dd; } ;
struct atmel_sha_dev {int flags; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*,int) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static void FUNC_4(struct ahash_request *VAR_2, int VAR_3)
{
 struct atmel_sha_reqctx *VAR_4 = FUNC_0(VAR_2);
 struct atmel_sha_dev *VAR_5 = VAR_4->dd;

 if (!VAR_3) {
  FUNC_2(VAR_2);
  if (VAR_1 & VAR_5->flags)
   VAR_3 = FUNC_3(VAR_2);
 } else {
  VAR_4->flags |= VAR_0;
 }


 (void)FUNC_1(VAR_5, VAR_3);
}
