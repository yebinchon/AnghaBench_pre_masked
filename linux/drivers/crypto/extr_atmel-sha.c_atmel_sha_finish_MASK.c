
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int bufcnt; scalar_t__* digcnt; struct atmel_sha_dev* dd; } ;
struct atmel_sha_dev {int dev; } ;
struct ahash_request {int dummy; } ;


 struct atmel_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (int ,char*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0)
{
 struct atmel_sha_reqctx *VAR_1 = FUNC_0(VAR_0);
 struct atmel_sha_dev *VAR_2 = VAR_1->dd;

 if (VAR_1->digcnt[0] || VAR_1->digcnt[1])
  FUNC_1(VAR_0);

 FUNC_2(VAR_2->dev, "digcnt: 0x%llx 0x%llx, bufcnt: %zd\n", VAR_1->digcnt[1],
  VAR_1->digcnt[0], VAR_1->bufcnt);

 return 0;
}
