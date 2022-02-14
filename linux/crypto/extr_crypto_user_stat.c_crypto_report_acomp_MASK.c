
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct crypto_stat_compress {void* stat_err_cnt; void* stat_decompress_tlen; void* stat_decompress_cnt; void* stat_compress_tlen; void* stat_compress_cnt; int type; } ;
struct TYPE_3__ {int err_cnt; int decompress_tlen; int decompress_cnt; int compress_tlen; int compress_cnt; } ;
struct TYPE_4__ {TYPE_1__ compress; } ;
struct crypto_alg {TYPE_2__ stats; } ;
typedef int racomp ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct crypto_stat_compress*,int ,int) ;
 int FUNC_2 (struct sk_buff*,int ,int,struct crypto_stat_compress*) ;
 int FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, struct crypto_alg *VAR_2)
{
 struct crypto_stat_compress VAR_3;

 FUNC_1(&VAR_3, 0, sizeof(VAR_3));

 FUNC_3(VAR_3.type, "acomp", sizeof(VAR_3.type));
 VAR_3.stat_compress_cnt = FUNC_0(&VAR_2->stats.compress.compress_cnt);
 VAR_3.stat_compress_tlen = FUNC_0(&VAR_2->stats.compress.compress_tlen);
 VAR_3.stat_decompress_cnt = FUNC_0(&VAR_2->stats.compress.decompress_cnt);
 VAR_3.stat_decompress_tlen = FUNC_0(&VAR_2->stats.compress.decompress_tlen);
 VAR_3.stat_err_cnt = FUNC_0(&VAR_2->stats.compress.err_cnt);

 return FUNC_2(VAR_1, VAR_0, sizeof(VAR_3), &VAR_3);
}
