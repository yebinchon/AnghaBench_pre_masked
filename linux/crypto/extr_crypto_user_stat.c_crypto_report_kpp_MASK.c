
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct crypto_stat_kpp {void* stat_err_cnt; void* stat_compute_shared_secret_cnt; void* stat_generate_public_key_cnt; void* stat_setsecret_cnt; int type; } ;
struct TYPE_3__ {int err_cnt; int compute_shared_secret_cnt; int generate_public_key_cnt; int setsecret_cnt; } ;
struct TYPE_4__ {TYPE_1__ kpp; } ;
struct crypto_alg {TYPE_2__ stats; } ;
typedef int rkpp ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct crypto_stat_kpp*,int ,int) ;
 int FUNC_2 (struct sk_buff*,int ,int,struct crypto_stat_kpp*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct crypto_alg *VAR_2)
{
 struct crypto_stat_kpp VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 FUNC_3(VAR_3.type, "kpp", sizeof(VAR_3.type));

 VAR_3.stat_setsecret_cnt = FUNC_0(&VAR_2->stats.kpp.setsecret_cnt);
 VAR_3.stat_generate_public_key_cnt = FUNC_0(&VAR_2->stats.kpp.generate_public_key_cnt);
 VAR_3.stat_compute_shared_secret_cnt = FUNC_0(&VAR_2->stats.kpp.compute_shared_secret_cnt);
 VAR_3.stat_err_cnt = FUNC_0(&VAR_2->stats.kpp.err_cnt);

 return FUNC_2(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
