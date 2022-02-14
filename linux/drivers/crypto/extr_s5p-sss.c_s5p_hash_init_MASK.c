
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_hash_reqctx {int error; int finup; int nregs; int engine; scalar_t__ skip; scalar_t__ total; scalar_t__ digcnt; scalar_t__ bufcnt; TYPE_1__* dd; } ;
struct s5p_hash_ctx {TYPE_1__* dd; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct s5p_hash_reqctx* FUNC_0 (struct ahash_request*) ;
 struct s5p_hash_ctx* FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_3 (struct ahash_request*) ;
 int FUNC_4 (int ,char*,int) ;

__attribute__((used)) static int FUNC_5(struct ahash_request *VAR_7)
{
 struct s5p_hash_reqctx *VAR_8 = FUNC_0(VAR_7);
 struct crypto_ahash *VAR_9 = FUNC_3(VAR_7);
 struct s5p_hash_ctx *VAR_10 = FUNC_1(VAR_9);

 VAR_8->dd = VAR_10->dd;
 VAR_8->error = 0;
 VAR_8->finup = 0;
 VAR_8->bufcnt = 0;
 VAR_8->digcnt = 0;
 VAR_8->total = 0;
 VAR_8->skip = 0;

 FUNC_4(VAR_10->dd->dev, "init: digest size: %d\n",
  FUNC_2(VAR_9));

 switch (FUNC_2(VAR_9)) {
 case 130:
  VAR_8->engine = VAR_4;
  VAR_8->nregs = VAR_1;
  break;
 case 129:
  VAR_8->engine = VAR_5;
  VAR_8->nregs = VAR_2;
  break;
 case 128:
  VAR_8->engine = VAR_6;
  VAR_8->nregs = VAR_3;
  break;
 default:
  VAR_8->error = 1;
  return -VAR_0;
 }

 return 0;
}
