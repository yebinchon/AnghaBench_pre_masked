
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_rfc4543_ctx {int null; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int flags; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; int dst; int src; TYPE_1__ base; } ;


 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (struct crypto_aead*) ;
 struct crypto_rfc4543_ctx* FUNC_2 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_3 (struct aead_request*) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int FUNC_5 (int ,int ,int *,int *) ;
 int FUNC_6 (int ,int ,int ,unsigned int,int *) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct aead_request *VAR_1, bool VAR_2)
{
 struct crypto_aead *VAR_3 = FUNC_3(VAR_1);
 struct crypto_rfc4543_ctx *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5 = FUNC_1(VAR_3);
 unsigned int VAR_6 = VAR_1->assoclen + VAR_1->cryptlen -
         (VAR_2 ? 0 : VAR_5);
 FUNC_0(VAR_0, VAR_4->null);

 FUNC_7(VAR_0, VAR_4->null);
 FUNC_5(VAR_0, VAR_1->base.flags, ((void*)0), ((void*)0));
 FUNC_6(VAR_0, VAR_1->src, VAR_1->dst, VAR_6, ((void*)0));

 return FUNC_4(VAR_0);
}
