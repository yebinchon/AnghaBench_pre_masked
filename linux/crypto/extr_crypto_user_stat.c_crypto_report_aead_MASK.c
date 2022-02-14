
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct crypto_stat_aead {void* stat_err_cnt; void* stat_decrypt_tlen; void* stat_decrypt_cnt; void* stat_encrypt_tlen; void* stat_encrypt_cnt; int type; } ;
struct TYPE_3__ {int err_cnt; int decrypt_tlen; int decrypt_cnt; int encrypt_tlen; int encrypt_cnt; } ;
struct TYPE_4__ {TYPE_1__ aead; } ;
struct crypto_alg {TYPE_2__ stats; } ;
typedef int raead ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct crypto_stat_aead*,int ,int) ;
 int FUNC_2 (struct sk_buff*,int ,int,struct crypto_stat_aead*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct crypto_alg *VAR_2)
{
 struct crypto_stat_aead VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 FUNC_3(VAR_3.type, "aead", sizeof(VAR_3.type));

 VAR_3.stat_encrypt_cnt = FUNC_0(&VAR_2->stats.aead.encrypt_cnt);
 VAR_3.stat_encrypt_tlen = FUNC_0(&VAR_2->stats.aead.encrypt_tlen);
 VAR_3.stat_decrypt_cnt = FUNC_0(&VAR_2->stats.aead.decrypt_cnt);
 VAR_3.stat_decrypt_tlen = FUNC_0(&VAR_2->stats.aead.decrypt_tlen);
 VAR_3.stat_err_cnt = FUNC_0(&VAR_2->stats.aead.err_cnt);

 return FUNC_2(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
