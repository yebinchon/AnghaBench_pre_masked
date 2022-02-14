
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srp_target_port {int req_ring_size; int indirect_size; TYPE_1__* srp_host; } ;
struct srp_request {struct srp_request* indirect_desc; scalar_t__ indirect_dma_addr; struct srp_request* map_page; struct srp_request* fmr_list; struct srp_request* fr_list; } ;
struct srp_rdma_ch {struct srp_request* req_ring; } ;
struct srp_device {scalar_t__ use_fast_reg; struct ib_device* dev; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {struct srp_device* srp_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct ib_device*,scalar_t__,int ,int ) ;
 int FUNC_1 (struct srp_request*) ;

__attribute__((used)) static void FUNC_2(struct srp_target_port *VAR_1,
         struct srp_rdma_ch *VAR_2)
{
 struct srp_device *VAR_3 = VAR_1->srp_host->srp_dev;
 struct ib_device *VAR_4 = VAR_3->dev;
 struct srp_request *VAR_5;
 int VAR_6;

 if (!VAR_2->req_ring)
  return;

 for (VAR_6 = 0; VAR_6 < VAR_1->req_ring_size; ++VAR_6) {
  VAR_5 = &VAR_2->req_ring[VAR_6];
  if (VAR_3->use_fast_reg) {
   FUNC_1(VAR_5->fr_list);
  } else {
   FUNC_1(VAR_5->fmr_list);
   FUNC_1(VAR_5->map_page);
  }
  if (VAR_5->indirect_dma_addr) {
   FUNC_0(VAR_4, VAR_5->indirect_dma_addr,
         VAR_1->indirect_size,
         VAR_0);
  }
  FUNC_1(VAR_5->indirect_desc);
 }

 FUNC_1(VAR_2->req_ring);
 VAR_2->req_ring = ((void*)0);
}
