
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct nx842_driver {int workmem_size; } ;
struct nx842_crypto_ctx {int * dbounce; int * sbounce; int wmem; struct nx842_driver* driver; int lock; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 struct nx842_crypto_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct crypto_tfm *VAR_3, struct nx842_driver *VAR_4)
{
 struct nx842_crypto_ctx *VAR_5 = FUNC_1(VAR_3);

 FUNC_5(&VAR_5->lock);
 VAR_5->driver = VAR_4;
 VAR_5->wmem = FUNC_4(VAR_4->workmem_size, VAR_2);
 VAR_5->sbounce = (u8 *)FUNC_0(VAR_2, VAR_0);
 VAR_5->dbounce = (u8 *)FUNC_0(VAR_2, VAR_0);
 if (!VAR_5->wmem || !VAR_5->sbounce || !VAR_5->dbounce) {
  FUNC_3(VAR_5->wmem);
  FUNC_2((unsigned long)VAR_5->sbounce);
  FUNC_2((unsigned long)VAR_5->dbounce);
  return -VAR_1;
 }

 return 0;
}
