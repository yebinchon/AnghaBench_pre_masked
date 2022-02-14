
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hdr; } ;
struct talitos_edesc {TYPE_1__ desc; } ;
struct talitos_ctx {int desc_hdr_template; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {unsigned int nbytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct talitos_edesc*) ;
 int FUNC_1 (struct talitos_edesc*) ;
 int VAR_2 ;
 struct talitos_edesc* FUNC_2 (struct ablkcipher_request*,int) ;
 int FUNC_3 (struct talitos_edesc*,struct ablkcipher_request*,int ) ;
 struct talitos_ctx* FUNC_4 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_5 (struct ablkcipher_request*) ;
 int FUNC_6 (struct crypto_ablkcipher*) ;
 unsigned int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct ablkcipher_request *VAR_3)
{
 struct crypto_ablkcipher *VAR_4 = FUNC_5(VAR_3);
 struct talitos_ctx *VAR_5 = FUNC_4(VAR_4);
 struct talitos_edesc *VAR_6;
 unsigned int VAR_7 =
   FUNC_7(FUNC_6(VAR_4));

 if (!VAR_3->nbytes)
  return 0;

 if (VAR_3->nbytes % VAR_7)
  return -VAR_1;


 VAR_6 = FUNC_2(VAR_3, 0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_6->desc.hdr = VAR_5->desc_hdr_template | VAR_0;

 return FUNC_3(VAR_6, VAR_3, VAR_2);
}
