
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iproc_ctx_s {int dummy; } ;
struct TYPE_4__ {int cra_ctxsize; int cra_driver_name; int cra_flags; scalar_t__ cra_alignmask; int cra_priority; int cra_module; } ;
struct aead_alg {TYPE_2__ base; int exit; int init; int decrypt; int encrypt; int setauthsize; } ;
struct TYPE_3__ {struct aead_alg aead; } ;
struct iproc_alg_s {int registered; TYPE_1__ alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aead_alg*) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct iproc_alg_s *VAR_8)
{
 struct aead_alg *VAR_9 = &VAR_8->alg.aead;
 int VAR_10;

 VAR_9->base.cra_module = VAR_1;
 VAR_9->base.cra_priority = VAR_6;
 VAR_9->base.cra_alignmask = 0;
 VAR_9->base.cra_ctxsize = sizeof(struct iproc_ctx_s);

 VAR_9->base.cra_flags |= VAR_0;

 VAR_9->setauthsize = VAR_7;
 VAR_9->encrypt = VAR_5;
 VAR_9->decrypt = VAR_4;
 VAR_9->init = VAR_3;
 VAR_9->exit = VAR_2;

 VAR_10 = FUNC_0(VAR_9);

 if (VAR_10 == 0)
  VAR_8->registered = 1;
 FUNC_1("  registered aead %s\n", VAR_9->base.cra_driver_name);
 return VAR_10;
}
