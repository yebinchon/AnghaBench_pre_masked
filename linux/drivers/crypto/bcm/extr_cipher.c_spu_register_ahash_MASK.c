
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct spu_hw {scalar_t__ spu_type; scalar_t__ spu_subtype; } ;
struct spu_hash_export_s {int dummy; } ;
struct iproc_ctx_s {int dummy; } ;
struct TYPE_7__ {scalar_t__ alg; scalar_t__ mode; } ;
struct TYPE_8__ {int cra_ctxsize; int cra_driver_name; int cra_flags; int cra_exit; int cra_init; scalar_t__ cra_alignmask; int cra_priority; int cra_module; } ;
struct TYPE_9__ {int statesize; TYPE_3__ base; } ;
struct ahash_alg {TYPE_4__ halg; int import; int export; int digest; int finup; int final; int update; int init; int setkey; } ;
struct TYPE_6__ {struct ahash_alg hash; } ;
struct iproc_alg_s {int registered; TYPE_2__ auth_info; TYPE_1__ alg; } ;
struct TYPE_10__ {struct spu_hw spu; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct ahash_alg*) ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_5__ VAR_26 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct iproc_alg_s *VAR_27)
{
 struct spu_hw *VAR_28 = &VAR_26.spu;
 struct ahash_alg *VAR_29 = &VAR_27->alg.hash;
 int VAR_30;


 if ((VAR_27->auth_info.alg == VAR_1) &&
     (VAR_27->auth_info.mode != VAR_5) &&
     (VAR_28->spu_type == VAR_7))
  return 0;


 if ((VAR_27->auth_info.alg >= VAR_2) &&
     (VAR_28->spu_subtype != VAR_6))
  return 0;

 VAR_29->halg.base.cra_module = VAR_8;
 VAR_29->halg.base.cra_priority = VAR_25;
 VAR_29->halg.base.cra_alignmask = 0;
 VAR_29->halg.base.cra_ctxsize = sizeof(struct iproc_ctx_s);
 VAR_29->halg.base.cra_init = VAR_9;
 VAR_29->halg.base.cra_exit = VAR_24;
 VAR_29->halg.base.cra_flags = VAR_0;
 VAR_29->halg.statesize = sizeof(struct spu_hash_export_s);

 if (VAR_27->auth_info.mode != VAR_4) {
  VAR_29->init = VAR_21;
  VAR_29->update = VAR_23;
  VAR_29->final = VAR_12;
  VAR_29->finup = VAR_13;
  VAR_29->digest = VAR_10;
  if ((VAR_27->auth_info.alg == VAR_1) &&
      ((VAR_27->auth_info.mode == VAR_5) ||
      (VAR_27->auth_info.mode == VAR_3))) {
   VAR_29->setkey = VAR_22;
  }
 } else {
  VAR_29->setkey = VAR_18;
  VAR_29->init = VAR_17;
  VAR_29->update = VAR_19;
  VAR_29->final = VAR_15;
  VAR_29->finup = VAR_16;
  VAR_29->digest = VAR_14;
 }
 VAR_29->export = VAR_11;
 VAR_29->import = VAR_20;

 VAR_30 = FUNC_0(VAR_29);

 if (VAR_30 == 0)
  VAR_27->registered = 1;
 FUNC_1("  registered ahash %s\n",
   VAR_29->halg.base.cra_driver_name);
 return VAR_30;
}
