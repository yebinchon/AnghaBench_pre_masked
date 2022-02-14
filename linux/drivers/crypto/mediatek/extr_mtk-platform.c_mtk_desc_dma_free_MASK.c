
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_cryp {TYPE_1__** ring; int dev; } ;
struct TYPE_2__ {int cmd_dma; int cmd_base; int res_dma; int res_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct mtk_cryp *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_0(VAR_2->dev, VAR_0,
      VAR_2->ring[VAR_3]->res_base,
      VAR_2->ring[VAR_3]->res_dma);
  FUNC_0(VAR_2->dev, VAR_0,
      VAR_2->ring[VAR_3]->cmd_base,
      VAR_2->ring[VAR_3]->cmd_dma);
  FUNC_1(VAR_2->ring[VAR_3]);
 }
}
