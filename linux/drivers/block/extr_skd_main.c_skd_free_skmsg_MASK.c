
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct skd_fitmsg_context {scalar_t__ mb_dma_address; int * msg_buf; } ;
struct skd_device {size_t num_fitmsg_context; struct skd_fitmsg_context* skmsg_table; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int *,scalar_t__) ;
 int FUNC_1 (struct skd_fitmsg_context*) ;

__attribute__((used)) static void FUNC_2(struct skd_device *VAR_1)
{
 u32 VAR_2;

 if (VAR_1->skmsg_table == ((void*)0))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_fitmsg_context; VAR_2++) {
  struct skd_fitmsg_context *VAR_3;

  VAR_3 = &VAR_1->skmsg_table[VAR_2];

  if (VAR_3->msg_buf != ((void*)0)) {
   FUNC_0(&VAR_1->pdev->dev, VAR_0,
       VAR_3->msg_buf,
         VAR_3->mb_dma_address);
  }
  VAR_3->msg_buf = ((void*)0);
  VAR_3->mb_dma_address = 0;
 }

 FUNC_1(VAR_1->skmsg_table);
 VAR_1->skmsg_table = ((void*)0);
}
