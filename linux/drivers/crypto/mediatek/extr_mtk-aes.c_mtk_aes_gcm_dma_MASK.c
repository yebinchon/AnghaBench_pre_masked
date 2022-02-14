
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scatterlist {int dummy; } ;
struct mtk_cryp {int dummy; } ;
struct TYPE_2__ {int nents; scalar_t__ remainder; struct scatterlist* sg; } ;
struct mtk_aes_rec {scalar_t__ total; int buf; struct scatterlist aligned_sg; TYPE_1__ dst; TYPE_1__ src; struct scatterlist* real_dst; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scatterlist*,size_t,TYPE_1__*) ;
 int FUNC_1 (struct mtk_cryp*,struct mtk_aes_rec*,int ) ;
 int FUNC_2 (struct mtk_cryp*,struct mtk_aes_rec*,size_t) ;
 int FUNC_3 (struct mtk_cryp*,struct mtk_aes_rec*) ;
 int FUNC_4 (struct scatterlist*,int ,int ,size_t) ;
 int FUNC_5 (struct scatterlist*,int) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct scatterlist*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct mtk_cryp *VAR_2, struct mtk_aes_rec *VAR_3,
      struct scatterlist *VAR_4, struct scatterlist *VAR_5,
      size_t VAR_6)
{
 bool VAR_7, VAR_8;

 VAR_3->src.sg = VAR_4;
 VAR_3->dst.sg = VAR_5;
 VAR_3->real_dst = VAR_5;

 VAR_7 = FUNC_0(VAR_4, VAR_6, &VAR_3->src);
 if (VAR_4 == VAR_5)
  VAR_8 = VAR_7;
 else
  VAR_8 = FUNC_0(VAR_5, VAR_6, &VAR_3->dst);

 if (!VAR_7 || !VAR_8) {
  if (VAR_3->total > VAR_0)
   return FUNC_1(VAR_2, VAR_3, -VAR_1);

  if (!VAR_7) {
   FUNC_4(VAR_4, FUNC_6(VAR_4), VAR_3->buf, VAR_6);
   VAR_3->src.sg = &VAR_3->aligned_sg;
   VAR_3->src.nents = 1;
   VAR_3->src.remainder = 0;
  }

  if (!VAR_8) {
   VAR_3->dst.sg = &VAR_3->aligned_sg;
   VAR_3->dst.nents = 1;
   VAR_3->dst.remainder = 0;
  }

  FUNC_5(&VAR_3->aligned_sg, 1);
  FUNC_7(&VAR_3->aligned_sg, VAR_3->buf, VAR_3->total);
 }

 FUNC_2(VAR_2, VAR_3, VAR_6);

 return FUNC_3(VAR_2, VAR_3);
}
