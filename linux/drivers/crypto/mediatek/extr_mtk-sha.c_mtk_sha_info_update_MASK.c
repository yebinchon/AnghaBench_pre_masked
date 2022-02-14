
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_info {int * ctrl; int * cmd; } ;
struct mtk_sha_reqctx {int ct_dma; int tfm_dma; scalar_t__ digcnt; int ct_hdr; struct mtk_sha_info info; } ;
struct mtk_sha_rec {int req; } ;
struct mtk_cryp {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtk_sha_reqctx* FUNC_0 (int ) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,struct mtk_sha_info*,int,int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mtk_cryp *VAR_4,
          struct mtk_sha_rec *VAR_5,
          size_t VAR_6, size_t VAR_7)
{
 struct mtk_sha_reqctx *VAR_8 = FUNC_0(VAR_5->req);
 struct mtk_sha_info *VAR_9 = &VAR_8->info;

 VAR_8->ct_hdr &= ~VAR_2;
 VAR_8->ct_hdr |= FUNC_1(VAR_6 + VAR_7);
 VAR_9->cmd[0] &= ~VAR_2;
 VAR_9->cmd[0] |= FUNC_1(VAR_6 + VAR_7);


 if (VAR_8->digcnt)
  VAR_9->ctrl[0] &= ~VAR_3;

 VAR_8->digcnt += VAR_6;

 VAR_8->ct_dma = FUNC_3(VAR_4->dev, VAR_9, sizeof(*VAR_9),
         VAR_0);
 if (FUNC_5(FUNC_4(VAR_4->dev, VAR_8->ct_dma))) {
  FUNC_2(VAR_4->dev, "dma %zu bytes error\n", sizeof(*VAR_9));
  return -VAR_1;
 }

 VAR_8->tfm_dma = VAR_8->ct_dma + sizeof(VAR_9->ctrl) + sizeof(VAR_9->cmd);

 return 0;
}
