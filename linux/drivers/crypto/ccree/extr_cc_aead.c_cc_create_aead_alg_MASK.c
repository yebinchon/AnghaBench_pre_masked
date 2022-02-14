
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct TYPE_2__ {int cra_ctxsize; int cra_flags; int cra_priority; int cra_module; int cra_driver_name; int cra_name; } ;
struct aead_alg {int exit; int init; TYPE_1__ base; } ;
struct cc_crypto_alg {int auth_mode; int flow_mode; int cipher_mode; struct aead_alg aead_alg; } ;
struct cc_alg_template {char* name; char* driver_name; int auth_mode; int flow_mode; int cipher_mode; struct aead_alg template_aead; } ;
struct cc_aead_ctx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cc_crypto_alg* FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct cc_crypto_alg* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,char*,char*) ;

__attribute__((used)) static struct cc_crypto_alg *FUNC_3(struct cc_alg_template *VAR_9,
      struct device *VAR_10)
{
 struct cc_crypto_alg *VAR_11;
 struct aead_alg *VAR_12;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_5);
 if (!VAR_11)
  return FUNC_0(-VAR_4);

 VAR_12 = &VAR_9->template_aead;

 FUNC_2(VAR_12->base.cra_name, VAR_3, "%s", VAR_9->name);
 FUNC_2(VAR_12->base.cra_driver_name, VAR_3, "%s",
   VAR_9->driver_name);
 VAR_12->base.cra_module = VAR_6;
 VAR_12->base.cra_priority = VAR_0;

 VAR_12->base.cra_ctxsize = sizeof(struct cc_aead_ctx);
 VAR_12->base.cra_flags = VAR_1 | VAR_2;
 VAR_12->init = VAR_8;
 VAR_12->exit = VAR_7;

 VAR_11->aead_alg = *VAR_12;

 VAR_11->cipher_mode = VAR_9->cipher_mode;
 VAR_11->flow_mode = VAR_9->flow_mode;
 VAR_11->auth_mode = VAR_9->auth_mode;

 return VAR_11;
}
