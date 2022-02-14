
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_4__ {int n_sg; struct fit_sg_descriptor* sksg_list; int sksg_dma_address; int id; } ;
struct skd_special_context {TYPE_2__ req; int db_dma_address; int mb_dma_address; scalar_t__ msg_buf; } ;
struct skd_device {int dbg_level; TYPE_1__* pdev; } ;
struct fit_sg_descriptor {int byte_count; int next_desc_ptr; int host_side_addr; int control; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct skd_device*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct skd_device *VAR_6,
        struct skd_special_context *VAR_7)
{
 u64 VAR_8;

 FUNC_1(VAR_7->req.n_sg != 1);

 if (FUNC_5(VAR_6->dbg_level > 1)) {
  u8 *VAR_9 = (u8 *)VAR_7->msg_buf;
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10 += 8) {
   FUNC_2(&VAR_6->pdev->dev, " spcl[%2d] %8ph\n", VAR_10,
    &VAR_9[VAR_10]);
   if (VAR_10 == 0)
    VAR_10 = 64 - 8;
  }

  FUNC_2(&VAR_6->pdev->dev,
   "skspcl=%p id=%04x sksg_list=%p sksg_dma=%pad\n",
   VAR_7, VAR_7->req.id, VAR_7->req.sksg_list,
   &VAR_7->req.sksg_dma_address);
  for (VAR_10 = 0; VAR_10 < VAR_7->req.n_sg; VAR_10++) {
   struct fit_sg_descriptor *VAR_11 =
    &VAR_7->req.sksg_list[VAR_10];

   FUNC_2(&VAR_6->pdev->dev,
    "  sg[%d] count=%u ctrl=0x%x addr=0x%llx next=0x%llx\n",
    VAR_10, VAR_11->byte_count, VAR_11->control,
    VAR_11->host_side_addr, VAR_11->next_desc_ptr);
  }
 }





 VAR_8 = VAR_7->mb_dma_address;
 VAR_8 |= VAR_3 + VAR_2;

 FUNC_3(&VAR_6->pdev->dev, VAR_7->mb_dma_address,
       VAR_5, VAR_1);
 FUNC_3(&VAR_6->pdev->dev,
       VAR_7->req.sksg_dma_address,
       1 * sizeof(struct fit_sg_descriptor),
       VAR_1);
 FUNC_3(&VAR_6->pdev->dev,
       VAR_7->db_dma_address,
       VAR_7->req.sksg_list[0].byte_count,
       VAR_0);


 FUNC_4();

 FUNC_0(VAR_6, VAR_8, VAR_4);
}
