
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dh_ctx {int xa; } ;
struct dh {int key_size; int key; } ;
struct crypto_kpp {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void const*,unsigned int,struct dh*) ;
 int FUNC_1 (struct dh_ctx*) ;
 struct dh_ctx* FUNC_2 (struct crypto_kpp*) ;
 scalar_t__ FUNC_3 (struct dh_ctx*,struct dh*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct crypto_kpp *VAR_1, const void *VAR_2,
    unsigned int VAR_3)
{
 struct dh_ctx *VAR_4 = FUNC_2(VAR_1);
 struct dh VAR_5;


 FUNC_1(VAR_4);

 if (FUNC_0(VAR_2, VAR_3, &VAR_5) < 0)
  goto err_clear_ctx;

 if (FUNC_3(VAR_4, &VAR_5) < 0)
  goto err_clear_ctx;

 VAR_4->xa = FUNC_4(VAR_5.key, VAR_5.key_size);
 if (!VAR_4->xa)
  goto err_clear_ctx;

 return 0;

err_clear_ctx:
 FUNC_1(VAR_4);
 return -VAR_0;
}
