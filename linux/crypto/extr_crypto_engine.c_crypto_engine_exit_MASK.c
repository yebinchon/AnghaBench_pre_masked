
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_engine {int kworker; } ;


 int FUNC_0 (struct crypto_engine*) ;
 int FUNC_1 (int ) ;

int FUNC_2(struct crypto_engine *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return VAR_1;

 FUNC_1(VAR_0->kworker);

 return 0;
}
