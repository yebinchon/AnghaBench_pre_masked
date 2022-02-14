
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct skd_fitmsg_context {uintptr_t mb_dma_address; int * msg_buf; scalar_t__ id; } ;
struct skd_device {int num_fitmsg_context; TYPE_1__* pdev; struct skd_fitmsg_context* skmsg_table; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (uintptr_t,char*,int *,uintptr_t*) ;
 int FUNC_1 (int *,char*,int,int,int) ;
 int * FUNC_2 (int *,int ,uintptr_t*,int ) ;
 struct skd_fitmsg_context* FUNC_3 (int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct skd_device *VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;

 FUNC_1(&VAR_5->pdev->dev,
  "skmsg_table kcalloc, struct %lu, count %u total %lu\n",
  sizeof(struct skd_fitmsg_context), VAR_5->num_fitmsg_context,
  sizeof(struct skd_fitmsg_context) * VAR_5->num_fitmsg_context);

 VAR_5->skmsg_table = FUNC_3(VAR_5->num_fitmsg_context,
         sizeof(struct skd_fitmsg_context),
         VAR_2);
 if (VAR_5->skmsg_table == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto err_out;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_fitmsg_context; VAR_7++) {
  struct skd_fitmsg_context *VAR_8;

  VAR_8 = &VAR_5->skmsg_table[VAR_7];

  VAR_8->id = VAR_7 + VAR_3;

  VAR_8->msg_buf = FUNC_2(&VAR_5->pdev->dev,
          VAR_4,
          &VAR_8->mb_dma_address,
          VAR_2);
  if (VAR_8->msg_buf == ((void*)0)) {
   VAR_6 = -VAR_0;
   goto err_out;
  }

  FUNC_0(((uintptr_t)VAR_8->msg_buf | VAR_8->mb_dma_address) &
       (VAR_1 - 1),
       "not aligned: msg_buf %p mb_dma_address %pad\n",
       VAR_8->msg_buf, &VAR_8->mb_dma_address);
 }

err_out:
 return VAR_6;
}
