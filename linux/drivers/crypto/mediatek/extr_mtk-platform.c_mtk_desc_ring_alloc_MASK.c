
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_ring {int cmd_dma; void* cmd_base; int res_dma; void* res_base; void* res_next; void* cmd_next; } ;
struct mtk_cryp {int dev; struct mtk_ring** ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ,int ,void*,int ) ;
 int FUNC_2 (struct mtk_ring*) ;
 struct mtk_ring* FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct mtk_cryp *VAR_4)
{
 struct mtk_ring **VAR_5 = VAR_4->ring;
 int VAR_6, VAR_7 = VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_5[VAR_6] = FUNC_3(sizeof(**VAR_5), VAR_1);
  if (!VAR_5[VAR_6])
   goto err_cleanup;

  VAR_5[VAR_6]->cmd_base = FUNC_0(VAR_4->dev,
             VAR_2,
             &VAR_5[VAR_6]->cmd_dma,
             VAR_1);
  if (!VAR_5[VAR_6]->cmd_base)
   goto err_cleanup;

  VAR_5[VAR_6]->res_base = FUNC_0(VAR_4->dev,
             VAR_2,
             &VAR_5[VAR_6]->res_dma,
             VAR_1);
  if (!VAR_5[VAR_6]->res_base)
   goto err_cleanup;

  VAR_5[VAR_6]->cmd_next = VAR_5[VAR_6]->cmd_base;
  VAR_5[VAR_6]->res_next = VAR_5[VAR_6]->res_base;
 }
 return 0;

err_cleanup:
 for (; VAR_6--; ) {
  FUNC_1(VAR_4->dev, VAR_2,
      VAR_5[VAR_6]->res_base, VAR_5[VAR_6]->res_dma);
  FUNC_1(VAR_4->dev, VAR_2,
      VAR_5[VAR_6]->cmd_base, VAR_5[VAR_6]->cmd_dma);
  FUNC_2(VAR_5[VAR_6]);
 }
 return VAR_7;
}
