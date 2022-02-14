
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_reqctx {int dma_addr; int flags; int buffer; } ;
struct mtk_sha_rec {int dummy; } ;
struct mtk_cryp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct mtk_cryp*,struct mtk_sha_rec*,int ,size_t,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct mtk_cryp *VAR_4,
      struct mtk_sha_rec *VAR_5,
      struct mtk_sha_reqctx *VAR_6,
      size_t VAR_7)
{
 VAR_6->dma_addr = FUNC_1(VAR_4->dev, VAR_6->buffer,
           VAR_2, VAR_0);
 if (FUNC_4(FUNC_2(VAR_4->dev, VAR_6->dma_addr))) {
  FUNC_0(VAR_4->dev, "dma map error\n");
  return -VAR_1;
 }

 VAR_6->flags &= ~VAR_3;

 return FUNC_3(VAR_4, VAR_5, VAR_6->dma_addr, VAR_7, 0, 0);
}
