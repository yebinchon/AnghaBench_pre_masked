
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pbl_chunk_list {int size; TYPE_4__* chunks; } ;
struct TYPE_6__ {struct pbl_chunk_list chunk_list; } ;
struct TYPE_7__ {TYPE_2__ indirect; } ;
struct pbl_context {TYPE_3__ phys; } ;
struct efa_dev {TYPE_1__* pdev; } ;
struct TYPE_8__ {struct TYPE_8__* buf; int length; int dma_addr; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_2(struct efa_dev *VAR_1, struct pbl_context *VAR_2)
{
 struct pbl_chunk_list *VAR_3 = &VAR_2->phys.indirect.chunk_list;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++) {
  FUNC_0(&VAR_1->pdev->dev, VAR_3->chunks[VAR_4].dma_addr,
     VAR_3->chunks[VAR_4].length, VAR_0);
  FUNC_1(VAR_3->chunks[VAR_4].buf);
 }

 FUNC_1(VAR_3->chunks);
}
