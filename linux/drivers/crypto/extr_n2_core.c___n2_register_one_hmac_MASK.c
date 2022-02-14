
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct n2_hmac_ctx {int dummy; } ;
struct crypto_alg {int cra_ctxsize; int cra_name; int cra_exit; int cra_init; int cra_driver_name; } ;
struct TYPE_9__ {struct crypto_alg base; } ;
struct ahash_alg {TYPE_4__ halg; int setkey; int digest; } ;
struct TYPE_10__ {int entry; struct ahash_alg alg; } ;
struct n2_hmac_alg {char* child_alg; TYPE_5__ derived; } ;
struct TYPE_6__ {char* cra_name; } ;
struct TYPE_7__ {TYPE_1__ base; } ;
struct TYPE_8__ {TYPE_2__ halg; } ;
struct n2_ahash_alg {TYPE_3__ alg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ahash_alg*) ;
 int VAR_3 ;
 int FUNC_2 (struct n2_hmac_alg*) ;
 struct n2_hmac_alg* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_5__*,struct n2_ahash_alg*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (int ,int ,char*,char*) ;

__attribute__((used)) static int FUNC_10(struct n2_ahash_alg *VAR_8)
{
 struct n2_hmac_alg *VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 struct ahash_alg *VAR_10;
 struct crypto_alg *VAR_11;
 int VAR_12;

 if (!VAR_9)
  return -VAR_1;

 VAR_9->child_alg = VAR_8->alg.halg.base.cra_name;
 FUNC_6(&VAR_9->derived, VAR_8, sizeof(struct n2_ahash_alg));
 FUNC_0(&VAR_9->derived.entry);

 VAR_10 = &VAR_9->derived.alg;
 VAR_10->digest = VAR_4;
 VAR_10->setkey = VAR_5;

 VAR_11 = &VAR_10->halg.base;
 FUNC_9(VAR_11->cra_name, VAR_0, "hmac(%s)", VAR_9->child_alg);
 FUNC_9(VAR_11->cra_driver_name, VAR_0, "hmac-%s-n2", VAR_9->child_alg);

 VAR_11->cra_ctxsize = sizeof(struct n2_hmac_ctx);
 VAR_11->cra_init = VAR_7;
 VAR_11->cra_exit = VAR_6;

 FUNC_4(&VAR_9->derived.entry, &VAR_3);
 VAR_12 = FUNC_1(VAR_10);
 if (VAR_12) {
  FUNC_7("%s alg registration failed\n", VAR_11->cra_name);
  FUNC_5(&VAR_9->derived.entry);
  FUNC_2(VAR_9);
 } else {
  FUNC_8("%s alg registered\n", VAR_11->cra_name);
 }
 return VAR_12;
}
