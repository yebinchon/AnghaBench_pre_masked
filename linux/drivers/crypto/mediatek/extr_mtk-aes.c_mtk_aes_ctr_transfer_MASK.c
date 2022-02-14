
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct scatterlist {int dummy; } ;
struct mtk_cryp {int dummy; } ;
struct mtk_aes_rec {scalar_t__ total; int areq; struct mtk_aes_base_ctx* ctx; } ;
struct mtk_aes_ctr_ctx {scalar_t__ offset; int * iv; int dst; int src; } ;
struct TYPE_2__ {scalar_t__ state; } ;
struct mtk_aes_base_ctx {scalar_t__ keylen; TYPE_1__ info; } ;
struct ablkcipher_request {scalar_t__ nbytes; int dst; int src; } ;


 int VAR_0 ;
 int FUNC_0 (size_t,int) ;
 struct ablkcipher_request* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 struct mtk_aes_ctr_ctx* FUNC_5 (struct mtk_aes_base_ctx*) ;
 int FUNC_6 (struct mtk_cryp*,struct mtk_aes_rec*,struct scatterlist*,struct scatterlist*,size_t) ;
 int FUNC_7 (struct mtk_cryp*,struct mtk_aes_rec*) ;
 int FUNC_8 (scalar_t__,int *,int) ;
 struct scatterlist* FUNC_9 (int ,int ,size_t) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct mtk_cryp *VAR_1, struct mtk_aes_rec *VAR_2)
{
 struct mtk_aes_base_ctx *VAR_3 = VAR_2->ctx;
 struct mtk_aes_ctr_ctx *VAR_4 = FUNC_5(VAR_3);
 struct ablkcipher_request *VAR_5 = FUNC_1(VAR_2->areq);
 struct scatterlist *VAR_6, *VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 size_t VAR_12;
 bool VAR_13 = 0;


 VAR_4->offset += VAR_2->total;
 if (VAR_4->offset >= VAR_5->nbytes)
  return FUNC_7(VAR_1, VAR_2);


 VAR_12 = VAR_5->nbytes - VAR_4->offset;
 VAR_11 = FUNC_0(VAR_12, VAR_0);
 VAR_10 = FUNC_2(VAR_4->iv[3]);


 VAR_8 = VAR_10;
 VAR_9 = VAR_8 + VAR_11 - 1;
 if (VAR_9 < VAR_8) {
  VAR_10 |= 0xffffffff;
  VAR_12 = VAR_0 * -VAR_8;
  VAR_13 = 1;
 }


 VAR_6 = FUNC_9(VAR_4->src, VAR_5->src, VAR_4->offset);
 VAR_7 = ((VAR_5->src == VAR_5->dst) ? VAR_6 :
        FUNC_9(VAR_4->dst, VAR_5->dst, VAR_4->offset));


 FUNC_8(VAR_3->info.state + VAR_3->keylen, VAR_4->iv,
          VAR_0);

 if (FUNC_10(VAR_13)) {




  VAR_4->iv[3] = FUNC_3(VAR_10);
  FUNC_4((u8 *)VAR_4->iv, VAR_0);
 }

 return FUNC_6(VAR_1, VAR_2, VAR_6, VAR_7, VAR_12);
}
