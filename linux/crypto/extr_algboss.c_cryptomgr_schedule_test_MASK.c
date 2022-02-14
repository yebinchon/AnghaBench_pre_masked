
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct task_struct {int dummy; } ;
struct crypto_test_param {int type; int alg; int driver; } ;
struct crypto_alg {int cra_flags; int cra_name; int cra_driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct task_struct*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct crypto_test_param*) ;
 struct task_struct* FUNC_2 (int ,struct crypto_test_param*,char*) ;
 struct crypto_test_param* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct crypto_alg *VAR_7)
{
 struct task_struct *VAR_8;
 struct crypto_test_param *VAR_9;
 u32 VAR_10;

 if (!FUNC_6(VAR_5))
  goto err;

 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  goto err_put_module;

 FUNC_4(VAR_9->driver, VAR_7->cra_driver_name, sizeof(VAR_9->driver));
 FUNC_4(VAR_9->alg, VAR_7->cra_name, sizeof(VAR_9->alg));
 VAR_10 = VAR_7->cra_flags;


 if (VAR_10 & VAR_0)
  VAR_10 |= VAR_1;

 VAR_9->type = VAR_10;

 VAR_8 = FUNC_2(VAR_6, VAR_9, "cryptomgr_test");
 if (FUNC_0(VAR_8))
  goto err_free_param;

 return VAR_4;

err_free_param:
 FUNC_1(VAR_9);
err_put_module:
 FUNC_5(VAR_5);
err:
 return VAR_3;
}
