
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {scalar_t__ keylen; } ;
struct caam_ctx {TYPE_1__ cdata; scalar_t__ key; } ;
struct aead_request {scalar_t__ iv; scalar_t__ cryptlen; scalar_t__ assoclen; } ;
struct aead_edesc {int * hw_desc; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,scalar_t__,unsigned int) ;
 int FUNC_2 (int *,int ,int ,int ,scalar_t__) ;
 struct caam_ctx* FUNC_3 (struct crypto_aead*) ;
 unsigned int FUNC_4 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_5 (struct aead_request*) ;
 int FUNC_6 (struct aead_request*,struct aead_edesc*,int,int) ;

__attribute__((used)) static void FUNC_7(struct aead_request *VAR_10,
    struct aead_edesc *VAR_11,
    bool VAR_12, bool VAR_13)
{
 struct crypto_aead *VAR_14 = FUNC_5(VAR_10);
 struct caam_ctx *VAR_15 = FUNC_3(VAR_14);
 unsigned int VAR_16 = FUNC_4(VAR_14);
 u32 *VAR_17 = VAR_11->hw_desc;
 bool VAR_18 = (VAR_16 == VAR_5);
 unsigned int VAR_19;

 FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13);
 FUNC_2(VAR_17, VAR_8, VAR_9, VAR_6, VAR_10->assoclen);


 VAR_19 = 0;
 if (VAR_13 && VAR_18 && !(VAR_10->assoclen + VAR_10->cryptlen))
  VAR_19 = VAR_4;


 FUNC_0(VAR_17, VAR_0 | VAR_1 | VAR_7 |
    VAR_3 | VAR_2 | VAR_5 | VAR_19);

 if (!VAR_18)
  FUNC_1(VAR_17, VAR_15->key + VAR_15->cdata.keylen, 4);

 FUNC_1(VAR_17, VAR_10->iv, VAR_16);

}
