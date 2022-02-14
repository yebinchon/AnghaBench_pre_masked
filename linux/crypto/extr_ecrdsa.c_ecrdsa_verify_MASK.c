
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_5__ {int ndigits; int x; } ;
struct ecrdsa_ctx {int digest_len; TYPE_3__* curve; TYPE_2__ pub_key; int digest; } ;
struct ecc_point {int* x; } ;
struct crypto_akcipher {int dummy; } ;
struct akcipher_request {int dst_len; int src_len; int src; } ;
typedef int sig ;
typedef int digest ;
struct TYPE_4__ {int ndigits; } ;
struct TYPE_6__ {int* n; TYPE_1__ g; } ;


 int VAR_0 ;
 struct ecc_point FUNC_0 (int*,int*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int) ;
 struct ecrdsa_ctx* FUNC_2 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_3 (struct akcipher_request*) ;
 int FUNC_4 (struct ecc_point*,int*,TYPE_1__*,int*,TYPE_2__*,TYPE_3__*) ;
 int FUNC_5 (int ,int ,unsigned char*,int) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,unsigned char*,int,int) ;
 int FUNC_8 (int*,int*,unsigned int) ;
 int FUNC_9 (int*,unsigned char*,unsigned int) ;
 int FUNC_10 (int*,unsigned char*,unsigned int) ;
 scalar_t__ FUNC_11 (int*,unsigned int) ;
 int FUNC_12 (int*,int*,int*,unsigned int) ;
 int FUNC_13 (int*,int*,int*,int*,unsigned int) ;
 int FUNC_14 (int*,int*,int*,unsigned int) ;

__attribute__((used)) static int FUNC_15(struct akcipher_request *VAR_5)
{
 struct crypto_akcipher *VAR_6 = FUNC_3(VAR_5);
 struct ecrdsa_ctx *VAR_7 = FUNC_2(VAR_6);
 unsigned char VAR_8[VAR_2];
 unsigned char VAR_9[VAR_4];
 unsigned int VAR_10 = VAR_5->dst_len / sizeof(u64);
 u64 VAR_11[VAR_1];
 u64 VAR_12[VAR_1];
 u64 VAR_13[VAR_1];
 u64 VAR_14[VAR_1];
 u64 *VAR_15 = VAR_14;
 u64 VAR_16[VAR_1];
 u64 *VAR_17 = VAR_12;
 struct ecc_point VAR_18 = FUNC_0(VAR_13, VAR_14, VAR_10);






 if (!VAR_7->curve ||
     !VAR_7->digest ||
     !VAR_5->src ||
     !VAR_7->pub_key.x ||
     VAR_5->dst_len != VAR_7->digest_len ||
     VAR_5->dst_len != VAR_7->curve->g.ndigits * sizeof(u64) ||
     VAR_7->pub_key.ndigits != VAR_7->curve->g.ndigits ||
     VAR_5->dst_len * 2 != VAR_5->src_len ||
     FUNC_1(VAR_5->src_len > sizeof(VAR_8)) ||
     FUNC_1(VAR_5->dst_len > sizeof(VAR_9)))
  return -VAR_0;

 FUNC_5(VAR_5->src, FUNC_6(VAR_5->src, VAR_5->src_len),
     VAR_8, VAR_5->src_len);
 FUNC_7(VAR_5->src,
      FUNC_6(VAR_5->src,
         VAR_5->src_len + VAR_5->dst_len),
      VAR_9, VAR_5->dst_len, VAR_5->src_len);

 FUNC_9(VAR_13, VAR_8, VAR_10);
 FUNC_9(VAR_11, VAR_8 + VAR_10 * sizeof(u64), VAR_10);


 if (FUNC_11(VAR_11, VAR_10) ||
     FUNC_8(VAR_11, VAR_7->curve->n, VAR_10) == 1 ||
     FUNC_11(VAR_13, VAR_10) ||
     FUNC_8(VAR_13, VAR_7->curve->n, VAR_10) == 1)
  return -VAR_3;



 FUNC_10(VAR_14, VAR_9, VAR_10);
 if (FUNC_8(VAR_14, VAR_7->curve->n, VAR_10) == 1)
  FUNC_14(VAR_14, VAR_14, VAR_7->curve->n, VAR_10);
 if (FUNC_11(VAR_14, VAR_10))
  VAR_14[0] = 1;


 FUNC_12(VAR_15, VAR_14, VAR_7->curve->n, VAR_10);


 FUNC_13(VAR_16, VAR_13, VAR_15, VAR_7->curve->n, VAR_10);
 FUNC_14(VAR_12, VAR_7->curve->n, VAR_11, VAR_10);
 FUNC_13(VAR_17, VAR_12, VAR_15, VAR_7->curve->n, VAR_10);


 FUNC_4(&VAR_18, VAR_16, &VAR_7->curve->g, VAR_17, &VAR_7->pub_key,
         VAR_7->curve);
 if (FUNC_8(VAR_18.x, VAR_7->curve->n, VAR_10) == 1)
  FUNC_14(VAR_18.x, VAR_18.x, VAR_7->curve->n, VAR_10);


 if (!FUNC_8(VAR_18.x, VAR_11, VAR_10))
  return 0;
 else
  return -VAR_3;
}
