
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct spu_hw {scalar_t__ spu_type; } ;
struct iproc_ctx_s {int dummy; } ;
struct TYPE_6__ {scalar_t__ alg; } ;
struct TYPE_7__ {int decrypt; int encrypt; int setkey; } ;
struct crypto_alg {int cra_ctxsize; int cra_flags; int cra_driver_name; TYPE_3__ cra_ablkcipher; int * cra_type; int cra_exit; int cra_init; scalar_t__ cra_alignmask; int cra_priority; int cra_module; } ;
struct TYPE_5__ {struct crypto_alg crypto; } ;
struct iproc_alg_s {int registered; TYPE_2__ cipher_info; TYPE_1__ alg; } ;
struct TYPE_8__ {struct spu_hw spu; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct crypto_alg*) ;
 int VAR_12 ;
 TYPE_4__ VAR_13 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct iproc_alg_s *VAR_14)
{
 struct spu_hw *VAR_15 = &VAR_13.spu;
 struct crypto_alg *VAR_16 = &VAR_14->alg.crypto;
 int VAR_17;


 if ((VAR_14->cipher_info.alg == VAR_0) &&
     (VAR_15->spu_type == VAR_4))
  return 0;

 VAR_16->cra_module = VAR_5;
 VAR_16->cra_priority = VAR_10;
 VAR_16->cra_alignmask = 0;
 VAR_16->cra_ctxsize = sizeof(struct iproc_ctx_s);

 VAR_16->cra_init = VAR_6;
 VAR_16->cra_exit = VAR_12;
 VAR_16->cra_type = &VAR_11;
 VAR_16->cra_flags = VAR_3 | VAR_1 |
    VAR_2;

 VAR_16->cra_ablkcipher.setkey = VAR_9;
 VAR_16->cra_ablkcipher.encrypt = VAR_8;
 VAR_16->cra_ablkcipher.decrypt = VAR_7;

 VAR_17 = FUNC_0(VAR_16);

 if (VAR_17 == 0)
  VAR_14->registered = 1;
 FUNC_1("  registered ablkcipher %s\n", VAR_16->cra_driver_name);
 return VAR_17;
}
