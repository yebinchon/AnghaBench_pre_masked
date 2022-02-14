
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcrypt_request {int dummy; } ;
struct pcrypt_aead_ctx {int cb_cpu; int child; } ;
struct padata_priv {int serial; int parallel; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int assoclen; int iv; int cryptlen; int dst; int src; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcrypt_request* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*) ;
 int FUNC_2 (struct aead_request*,int ) ;
 int FUNC_3 (struct aead_request*,int,int ,struct aead_request*) ;
 int FUNC_4 (struct aead_request*,int ,int ,int ,int ) ;
 int FUNC_5 (struct aead_request*,int ) ;
 struct pcrypt_aead_ctx* FUNC_6 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_7 (struct aead_request*) ;
 int FUNC_8 (struct padata_priv*,int ,int) ;
 int FUNC_9 (int ,struct padata_priv*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct aead_request* FUNC_10 (struct pcrypt_request*) ;
 struct padata_priv* FUNC_11 (struct pcrypt_request*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_12(struct aead_request *VAR_6)
{
 int VAR_7;
 struct pcrypt_request *VAR_8 = FUNC_0(VAR_6);
 struct aead_request *VAR_9 = FUNC_10(VAR_8);
 struct padata_priv *VAR_10 = FUNC_11(VAR_8);
 struct crypto_aead *VAR_11 = FUNC_7(VAR_6);
 struct pcrypt_aead_ctx *VAR_12 = FUNC_6(VAR_11);
 u32 VAR_13 = FUNC_1(VAR_6);

 FUNC_8(VAR_10, 0, sizeof(struct padata_priv));

 VAR_10->parallel = VAR_3;
 VAR_10->serial = VAR_4;

 FUNC_5(VAR_9, VAR_12->child);
 FUNC_3(VAR_9, VAR_13 & ~VAR_0,
      VAR_2, VAR_6);
 FUNC_4(VAR_9, VAR_6->src, VAR_6->dst,
          VAR_6->cryptlen, VAR_6->iv);
 FUNC_2(VAR_9, VAR_6->assoclen);

 VAR_7 = FUNC_9(VAR_5, VAR_10, &VAR_12->cb_cpu);
 if (!VAR_7)
  return -VAR_1;

 return VAR_7;
}
