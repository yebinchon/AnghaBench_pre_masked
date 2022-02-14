
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int op; } ;
struct atmel_sha_dev {int resume; struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;




 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*,int) ;
 int VAR_1 ;
 int FUNC_2 (struct atmel_sha_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct atmel_sha_dev*,int ) ;
 int FUNC_4 (struct atmel_sha_dev*) ;
 int FUNC_5 (struct atmel_sha_dev*) ;

__attribute__((used)) static int FUNC_6(struct atmel_sha_dev *VAR_5)
{
 struct ahash_request *VAR_6 = VAR_5->req;
 struct atmel_sha_reqctx *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 VAR_8 = FUNC_4(VAR_5);
 if (VAR_8)
  return FUNC_1(VAR_5, VAR_8);

 switch (VAR_7->op) {
 case 129:
  VAR_8 = FUNC_3(VAR_5, VAR_4);
  break;

 case 128:
  VAR_5->resume = VAR_1;
  VAR_8 = FUNC_5(VAR_5);
  break;

 case 130:
  VAR_5->resume = VAR_3;
  VAR_8 = FUNC_2(VAR_5);
  break;

 case 131:
  VAR_8 = FUNC_3(VAR_5, VAR_2);
  break;

 default:
  return FUNC_1(VAR_5, -VAR_0);
 }

 return VAR_8;
}
