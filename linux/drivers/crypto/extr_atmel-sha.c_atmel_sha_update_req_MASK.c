
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int total; int flags; int * digcnt; } ;
struct atmel_sha_dev {int dev; struct ahash_request* req; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct atmel_sha_dev*) ;
 int FUNC_2 (struct atmel_sha_dev*) ;
 int FUNC_3 (int ,char*,int,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct atmel_sha_dev *VAR_1)
{
 struct ahash_request *VAR_2 = VAR_1->req;
 struct atmel_sha_reqctx *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 FUNC_3(VAR_1->dev, "update_req: total: %u, digcnt: 0x%llx 0x%llx\n",
  VAR_3->total, VAR_3->digcnt[1], VAR_3->digcnt[0]);

 if (VAR_3->flags & VAR_0)
  VAR_4 = FUNC_1(VAR_1);
 else
  VAR_4 = FUNC_2(VAR_1);


 FUNC_3(VAR_1->dev, "update: err: %d, digcnt: 0x%llx 0%llx\n",
   VAR_4, VAR_3->digcnt[1], VAR_3->digcnt[0]);

 return VAR_4;
}
