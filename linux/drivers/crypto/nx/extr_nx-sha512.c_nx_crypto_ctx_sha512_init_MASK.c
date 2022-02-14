
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx_crypto_ctx {int csbcpb; int * props; int * ap; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct nx_crypto_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (struct nx_crypto_ctx*,int ) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_3)
{
 struct nx_crypto_ctx *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_4, VAR_0);

 VAR_4->ap = &VAR_4->props[VAR_2];

 FUNC_0(VAR_4->csbcpb, VAR_1);

 return 0;
}
