
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct crypto_type {unsigned int (* ctxsize ) (struct crypto_alg*,int ,int ) ;} ;
struct crypto_alg {int cra_alignmask; int cra_flags; struct crypto_type* cra_type; } ;


 int FUNC_0 () ;


 int VAR_0 ;
 unsigned int FUNC_1 (struct crypto_alg*) ;
 unsigned int FUNC_2 (struct crypto_alg*) ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (struct crypto_alg*,int ,int ) ;

__attribute__((used)) static unsigned int FUNC_5(struct crypto_alg *VAR_1, u32 VAR_2, u32 VAR_3)
{
 const struct crypto_type *VAR_4 = VAR_1->cra_type;
 unsigned int VAR_5;

 VAR_5 = VAR_1->cra_alignmask & ~(FUNC_3() - 1);
 if (VAR_4)
  return VAR_5 + VAR_4->ctxsize(VAR_1, VAR_2, VAR_3);

 switch (VAR_1->cra_flags & VAR_0) {
 default:
  FUNC_0();

 case 129:
  VAR_5 += FUNC_1(VAR_1);
  break;

 case 128:
  VAR_5 += FUNC_2(VAR_1);
  break;
 }

 return VAR_5;
}
