
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct crypto_report_cipher {int max_keysize; int min_keysize; int blocksize; int type; } ;
struct TYPE_2__ {int cia_max_keysize; int cia_min_keysize; } ;
struct crypto_alg {TYPE_1__ cra_cipher; int cra_blocksize; } ;
typedef int rcipher ;


 int VAR_0 ;
 int FUNC_0 (struct crypto_report_cipher*,int ,int) ;
 int FUNC_1 (struct sk_buff*,int ,int,struct crypto_report_cipher*) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, struct crypto_alg *VAR_2)
{
 struct crypto_report_cipher VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));

 FUNC_2(VAR_3.type, "cipher", sizeof(VAR_3.type));

 VAR_3.blocksize = VAR_2->cra_blocksize;
 VAR_3.min_keysize = VAR_2->cra_cipher.cia_min_keysize;
 VAR_3.max_keysize = VAR_2->cra_cipher.cia_max_keysize;

 return FUNC_1(VAR_1, VAR_0,
         sizeof(VAR_3), &VAR_3);
}
