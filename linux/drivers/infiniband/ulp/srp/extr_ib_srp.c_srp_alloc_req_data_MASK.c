
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {int req_ring_size; int indirect_size; int mr_per_cmd; TYPE_1__* srp_host; } ;
struct srp_request {int indirect_dma_addr; int indirect_desc; void* map_page; void* fmr_list; void* fr_list; } ;
struct srp_rdma_ch {struct srp_request* req_ring; struct srp_target_port* target; } ;
struct srp_device {int max_pages_per_mr; scalar_t__ use_fast_reg; struct ib_device* dev; } ;
struct ib_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {struct srp_device* srp_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ib_device*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct ib_device*,int ) ;
 struct srp_request* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int ,int ) ;
 void* FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct srp_rdma_ch *VAR_3)
{
 struct srp_target_port *VAR_4 = VAR_3->target;
 struct srp_device *VAR_5 = VAR_4->srp_host->srp_dev;
 struct ib_device *VAR_6 = VAR_5->dev;
 struct srp_request *VAR_7;
 void *VAR_8;
 dma_addr_t VAR_9;
 int VAR_10, VAR_11 = -VAR_1;

 VAR_3->req_ring = FUNC_2(VAR_4->req_ring_size, sizeof(*VAR_3->req_ring),
          VAR_2);
 if (!VAR_3->req_ring)
  goto out;

 for (VAR_10 = 0; VAR_10 < VAR_4->req_ring_size; ++VAR_10) {
  VAR_7 = &VAR_3->req_ring[VAR_10];
  VAR_8 = FUNC_4(VAR_4->mr_per_cmd, sizeof(void *),
     VAR_2);
  if (!VAR_8)
   goto out;
  if (VAR_5->use_fast_reg) {
   VAR_7->fr_list = VAR_8;
  } else {
   VAR_7->fmr_list = VAR_8;
   VAR_7->map_page = FUNC_4(VAR_5->max_pages_per_mr,
            sizeof(void *),
            VAR_2);
   if (!VAR_7->map_page)
    goto out;
  }
  VAR_7->indirect_desc = FUNC_3(VAR_4->indirect_size, VAR_2);
  if (!VAR_7->indirect_desc)
   goto out;

  VAR_9 = FUNC_0(VAR_6, VAR_7->indirect_desc,
          VAR_4->indirect_size,
          VAR_0);
  if (FUNC_1(VAR_6, VAR_9))
   goto out;

  VAR_7->indirect_dma_addr = VAR_9;
 }
 VAR_11 = 0;

out:
 return VAR_11;
}
