
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct crypto_alg {int cra_flags; char* cra_driver_name; int cra_init; int cra_ctxsize; int * cra_exit; int cra_alignmask; void* cra_module; void* cra_priority; } ;
struct chcr_context {int dummy; } ;
struct TYPE_9__ {struct crypto_alg base; int statesize; } ;
struct ahash_alg {TYPE_2__ halg; int init; int setkey; int import; int export; int digest; int finup; int final; int update; } ;
struct ablk_ctx {int dummy; } ;
struct TYPE_8__ {int cra_flags; char* cra_driver_name; void* cra_module; } ;
struct TYPE_13__ {TYPE_1__ base; int exit; int init; int decrypt; int encrypt; } ;
struct TYPE_12__ {int cra_flags; int cra_ctxsize; char* cra_driver_name; int * cra_type; int cra_alignmask; void* cra_module; void* cra_priority; } ;
struct TYPE_10__ {struct ahash_alg hash; TYPE_6__ aead; TYPE_5__ crypto; } ;
struct TYPE_11__ {int is_registered; int type; TYPE_3__ alg; } ;


 int FUNC_0 (TYPE_4__*) ;
 void* VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 () ;
 int VAR_25 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (struct ahash_alg*) ;
 int FUNC_4 (TYPE_5__*) ;
 TYPE_4__* VAR_26 ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static int FUNC_6(void)
{
 struct crypto_alg VAR_27;
 struct ahash_alg *VAR_28;
 int VAR_29 = 0, VAR_30;
 char *VAR_31 = ((void*)0);

 for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_26); VAR_30++) {
  if (VAR_26[VAR_30].is_registered)
   continue;
  switch (VAR_26[VAR_30].type & VAR_4) {
  case 130:
   VAR_26[VAR_30].alg.crypto.cra_priority =
    VAR_0;
   VAR_26[VAR_30].alg.crypto.cra_module = VAR_8;
   VAR_26[VAR_30].alg.crypto.cra_flags =
    130 | VAR_1 |
    VAR_2;
   VAR_26[VAR_30].alg.crypto.cra_ctxsize =
    sizeof(struct chcr_context) +
    sizeof(struct ablk_ctx);
   VAR_26[VAR_30].alg.crypto.cra_alignmask = 0;
   VAR_26[VAR_30].alg.crypto.cra_type =
    &VAR_25;
   VAR_29 = FUNC_4(&VAR_26[VAR_30].alg.crypto);
   VAR_31 = VAR_26[VAR_30].alg.crypto.cra_driver_name;
   break;
  case 129:
   VAR_26[VAR_30].alg.aead.base.cra_flags =
    VAR_1 | VAR_2;
   VAR_26[VAR_30].alg.aead.encrypt = VAR_12;
   VAR_26[VAR_30].alg.aead.decrypt = VAR_11;
   VAR_26[VAR_30].alg.aead.init = VAR_10;
   VAR_26[VAR_30].alg.aead.exit = VAR_9;
   VAR_26[VAR_30].alg.aead.base.cra_module = VAR_8;
   VAR_29 = FUNC_2(&VAR_26[VAR_30].alg.aead);
   VAR_31 = VAR_26[VAR_30].alg.aead.base.cra_driver_name;
   break;
  case 128:
   VAR_28 = &VAR_26[VAR_30].alg.hash;
   VAR_28->update = VAR_19;
   VAR_28->final = VAR_15;
   VAR_28->finup = VAR_16;
   VAR_28->digest = VAR_13;
   VAR_28->export = VAR_14;
   VAR_28->import = VAR_17;
   VAR_28->halg.statesize = VAR_7;
   VAR_28->halg.base.cra_priority = VAR_0;
   VAR_28->halg.base.cra_module = VAR_8;
   VAR_28->halg.base.cra_flags = VAR_1;
   VAR_28->halg.base.cra_alignmask = 0;
   VAR_28->halg.base.cra_exit = ((void*)0);

   if (VAR_26[VAR_30].type == VAR_3) {
    VAR_28->halg.base.cra_init = VAR_21;
    VAR_28->halg.base.cra_exit = VAR_20;
    VAR_28->init = VAR_22;
    VAR_28->setkey = VAR_18;
    VAR_28->halg.base.cra_ctxsize = VAR_6;
   } else {
    VAR_28->init = VAR_24;
    VAR_28->halg.base.cra_ctxsize = VAR_5;
    VAR_28->halg.base.cra_init = VAR_23;
   }
   VAR_29 = FUNC_3(&VAR_26[VAR_30].alg.hash);
   VAR_27 = VAR_26[VAR_30].alg.hash.halg.base;
   VAR_31 = VAR_27.cra_driver_name;
   break;
  }
  if (VAR_29) {
   FUNC_5("chcr : %s : Algorithm registration failed\n",
          VAR_31);
   goto register_err;
  } else {
   VAR_26[VAR_30].is_registered = 1;
  }
 }
 return 0;

register_err:
 FUNC_1();
 return VAR_29;
}
