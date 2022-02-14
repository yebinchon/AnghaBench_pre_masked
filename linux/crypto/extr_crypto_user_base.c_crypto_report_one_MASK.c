
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct crypto_user_alg {int cru_flags; int type; int cru_refcnt; scalar_t__ cru_mask; scalar_t__ cru_type; int cru_module_name; int cru_driver_name; int cru_name; } ;
struct crypto_report_larval {int cru_flags; int type; int cru_refcnt; scalar_t__ cru_mask; scalar_t__ cru_type; int cru_module_name; int cru_driver_name; int cru_name; } ;
struct crypto_alg {char* cra_name; char* cra_driver_name; int cra_flags; TYPE_1__* cra_type; int cra_priority; int cra_refcnt; int cra_module; } ;
typedef int rl ;
struct TYPE_2__ {scalar_t__ (* report ) (struct sk_buff*,struct crypto_alg*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct crypto_alg*) ;
 int FUNC_1 (struct sk_buff*,struct crypto_alg*) ;
 int FUNC_2 (struct crypto_user_alg*,int ,int) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct crypto_user_alg*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int) ;
 scalar_t__ FUNC_8 (struct sk_buff*,struct crypto_alg*) ;

__attribute__((used)) static int FUNC_9(struct crypto_alg *VAR_5,
        struct crypto_user_alg *VAR_6, struct sk_buff *VAR_7)
{
 FUNC_2(VAR_6, 0, sizeof(*VAR_6));

 FUNC_7(VAR_6->cru_name, VAR_5->cra_name, sizeof(VAR_6->cru_name));
 FUNC_7(VAR_6->cru_driver_name, VAR_5->cra_driver_name,
  sizeof(VAR_6->cru_driver_name));
 FUNC_7(VAR_6->cru_module_name, FUNC_3(VAR_5->cra_module),
  sizeof(VAR_6->cru_module_name));

 VAR_6->cru_type = 0;
 VAR_6->cru_mask = 0;
 VAR_6->cru_flags = VAR_5->cra_flags;
 VAR_6->cru_refcnt = FUNC_6(&VAR_5->cra_refcnt);

 if (FUNC_5(VAR_7, VAR_0, VAR_5->cra_priority))
  goto nla_put_failure;
 if (VAR_5->cra_flags & VAR_2) {
  struct crypto_report_larval VAR_8;

  FUNC_2(&VAR_8, 0, sizeof(VAR_8));
  FUNC_7(VAR_8.type, "larval", sizeof(VAR_8.type));
  if (FUNC_4(VAR_7, VAR_1, sizeof(VAR_8), &VAR_8))
   goto nla_put_failure;
  goto out;
 }

 if (VAR_5->cra_type && VAR_5->cra_type->report) {
  if (VAR_5->cra_type->report(VAR_7, VAR_5))
   goto nla_put_failure;

  goto out;
 }

 switch (VAR_5->cra_flags & (VAR_3 | VAR_2)) {
 case 129:
  if (FUNC_0(VAR_7, VAR_5))
   goto nla_put_failure;

  break;
 case 128:
  if (FUNC_1(VAR_7, VAR_5))
   goto nla_put_failure;

  break;
 }

out:
 return 0;

nla_put_failure:
 return -VAR_4;
}
