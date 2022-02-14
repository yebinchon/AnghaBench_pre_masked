
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_fd {int dummy; } ;
struct device {int dummy; } ;
struct caam_drv_req {TYPE_1__* drv_ctx; int * fd_sgt; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int req_fq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,int *,int,int ) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct qm_fd*,int ) ;
 int FUNC_5 (struct qm_fd*) ;
 int FUNC_6 (struct qm_fd*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,struct qm_fd*) ;

int FUNC_9(struct device *VAR_4, struct caam_drv_req *VAR_5)
{
 struct qm_fd VAR_6;
 dma_addr_t VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 FUNC_5(&VAR_6);
 FUNC_6(&VAR_6, FUNC_7(&VAR_5->fd_sgt[1]));

 VAR_7 = FUNC_1(VAR_4, VAR_5->fd_sgt, sizeof(VAR_5->fd_sgt),
         VAR_1);
 if (FUNC_2(VAR_4, VAR_7)) {
  FUNC_0(VAR_4, "DMA mapping error for QI enqueue request\n");
  return -VAR_3;
 }
 FUNC_4(&VAR_6, VAR_7);

 do {
  VAR_8 = FUNC_8(VAR_5->drv_ctx->req_fq, &VAR_6);
  if (FUNC_3(!VAR_8))
   return 0;

  if (VAR_8 != -VAR_2)
   break;
  VAR_9++;
 } while (VAR_9 < VAR_0);

 FUNC_0(VAR_4, "qman_enqueue failed: %d\n", VAR_8);

 return VAR_8;
}
