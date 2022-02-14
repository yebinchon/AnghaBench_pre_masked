
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct TYPE_5__ {int size; } ;
struct TYPE_6__ {int sg_dma_cnt; TYPE_1__ chunk_list; struct scatterlist* sgl; int pbl_buf_size_in_pages; } ;
struct TYPE_7__ {TYPE_2__ indirect; } ;
struct pbl_context {TYPE_3__ phys; int pbl_buf_size_in_bytes; int pbl_buf; } ;
struct efa_dev {TYPE_4__* pdev; int ibdev; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int *,struct scatterlist*,int ,int ) ;
 int FUNC_3 (int *,struct scatterlist*,int ,int ) ;
 struct scatterlist* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,char*,int,...) ;
 int FUNC_6 (struct scatterlist*) ;
 int FUNC_7 (struct efa_dev*,struct pbl_context*) ;

__attribute__((used)) static int FUNC_8(struct efa_dev *VAR_5, struct pbl_context *VAR_6)
{
 u32 VAR_7 = FUNC_1(VAR_6->pbl_buf_size_in_bytes, VAR_4);
 struct scatterlist *VAR_8;
 int VAR_9, VAR_10;

 FUNC_0(VAR_1 > VAR_4);
 VAR_8 = FUNC_4(VAR_6->pbl_buf, VAR_7);
 if (!VAR_8)
  return -VAR_3;

 VAR_9 = FUNC_2(&VAR_5->pdev->dev, VAR_8, VAR_7, VAR_0);
 if (!VAR_9) {
  VAR_10 = -VAR_2;
  goto err_map;
 }

 VAR_6->phys.indirect.pbl_buf_size_in_pages = VAR_7;
 VAR_6->phys.indirect.sgl = VAR_8;
 VAR_6->phys.indirect.sg_dma_cnt = VAR_9;
 VAR_10 = FUNC_7(VAR_5, VAR_6);
 if (VAR_10) {
  FUNC_5(&VAR_5->ibdev,
     "chunk_list creation failed[%d]\n", VAR_10);
  goto err_chunk;
 }

 FUNC_5(&VAR_5->ibdev,
    "pbl indirect - size[%u], chunks[%u]\n",
    VAR_6->pbl_buf_size_in_bytes,
    VAR_6->phys.indirect.chunk_list.size);

 return 0;

err_chunk:
 FUNC_3(&VAR_5->pdev->dev, VAR_8, VAR_7, VAR_0);
err_map:
 FUNC_6(VAR_8);
 return VAR_10;
}
