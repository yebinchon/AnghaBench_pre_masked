
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atmel_sha_reqctx {int flags; size_t bufcnt; size_t buflen; int * digcnt; int total; } ;
struct atmel_sha_dev {int dev; int req; } ;


 int VAR_0 ;
 struct atmel_sha_reqctx* FUNC_0 (int ) ;
 int FUNC_1 (struct atmel_sha_reqctx*) ;
 int FUNC_2 (struct atmel_sha_reqctx*,int ) ;
 int FUNC_3 (struct atmel_sha_dev*,struct atmel_sha_reqctx*,size_t,unsigned int) ;
 int FUNC_4 (int ,char*,size_t,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct atmel_sha_dev *VAR_1)
{
 struct atmel_sha_reqctx *VAR_2 = FUNC_0(VAR_1->req);
 unsigned int VAR_3;
 size_t VAR_4;

 FUNC_1(VAR_2);

 VAR_3 = (VAR_2->flags & VAR_0) && !VAR_2->total;

 FUNC_4(VAR_1->dev, "slow: bufcnt: %zu, digcnt: 0x%llx 0x%llx, final: %d\n",
   VAR_2->bufcnt, VAR_2->digcnt[1], VAR_2->digcnt[0], VAR_3);

 if (VAR_3)
  FUNC_2(VAR_2, 0);

 if (VAR_3 || (VAR_2->bufcnt == VAR_2->buflen)) {
  VAR_4 = VAR_2->bufcnt;
  VAR_2->bufcnt = 0;
  return FUNC_3(VAR_1, VAR_2, VAR_4, VAR_3);
 }

 return 0;
}
