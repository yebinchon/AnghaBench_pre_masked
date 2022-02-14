
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {scalar_t__ op; int flags; } ;
struct atmel_sha_dev {int dev; int resume; struct ahash_request* req; } ;
struct ahash_request {int nbytes; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct atmel_sha_dev*) ;
 int FUNC_3 (struct ahash_request*,int) ;
 int FUNC_4 (struct atmel_sha_dev*) ;
 int FUNC_5 (struct atmel_sha_dev*) ;
 int FUNC_6 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_7(struct atmel_sha_dev *VAR_4)
{
 struct ahash_request *VAR_5 = VAR_4->req;
 struct atmel_sha_reqctx *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 FUNC_6(VAR_4->dev, "handling new req, op: %lu, nbytes: %d\n",
      VAR_6->op, VAR_5->nbytes);

 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7)
  return FUNC_1(VAR_4, VAR_7);
 VAR_4->resume = VAR_3;
 if (VAR_6->op == VAR_2) {
  VAR_7 = FUNC_5(VAR_4);
  if (!VAR_7 && (VAR_6->flags & VAR_0))

   VAR_7 = FUNC_2(VAR_4);
 } else if (VAR_6->op == VAR_1) {
  VAR_7 = FUNC_2(VAR_4);
 }

 if (!VAR_7)

  FUNC_3(VAR_5, VAR_7);

 FUNC_6(VAR_4->dev, "exit, err: %d\n", VAR_7);

 return VAR_7;
}
