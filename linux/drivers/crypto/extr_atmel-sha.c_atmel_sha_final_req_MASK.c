
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int bufcnt; int buffer; } ;
struct atmel_sha_dev {int dev; struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_reqctx*,int ) ;
 int FUNC_2 (struct atmel_sha_dev*,int ,int,int) ;
 int FUNC_3 (struct atmel_sha_dev*,struct atmel_sha_reqctx*,int,int) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct atmel_sha_dev *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1->req;
 struct atmel_sha_reqctx *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;
 int VAR_5;

 if (VAR_3->bufcnt >= VAR_0) {
  FUNC_1(VAR_3, 0);
  VAR_5 = VAR_3->bufcnt;
  VAR_3->bufcnt = 0;
  VAR_4 = FUNC_3(VAR_1, VAR_3, VAR_5, 1);
 }

 else {
  FUNC_1(VAR_3, 0);
  VAR_5 = VAR_3->bufcnt;
  VAR_3->bufcnt = 0;
  VAR_4 = FUNC_2(VAR_1, VAR_3->buffer, VAR_5, 1);
 }

 FUNC_4(VAR_1->dev, "final_req: err: %d\n", VAR_4);

 return VAR_4;
}
