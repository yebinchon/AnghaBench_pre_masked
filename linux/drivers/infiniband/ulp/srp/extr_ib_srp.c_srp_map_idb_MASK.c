
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct srp_target_port {TYPE_1__* srp_host; } ;
struct srp_request {int indirect_dma_addr; int indirect_desc; } ;
struct srp_rdma_ch {struct srp_target_port* target; } ;
struct TYPE_4__ {void** next; void** end; } ;
struct srp_map_state {int base_dma_addr; int* pages; int npages; int key; struct scatterlist* sg; int dma_len; struct srp_map_state* desc; TYPE_2__ gen; } ;
struct srp_direct_buf {int base_dma_addr; int* pages; int npages; int key; struct scatterlist* sg; int dma_len; struct srp_direct_buf* desc; TYPE_2__ gen; } ;
struct srp_device {int mr_page_mask; scalar_t__ use_fmr; scalar_t__ use_fast_reg; } ;
struct scatterlist {int dma_address; int length; int dma_length; } ;
typedef int state ;
typedef int idb_desc ;
typedef int __be32 ;
struct TYPE_3__ {struct srp_device* srp_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct srp_map_state*,int ,int) ;
 int FUNC_2 (struct scatterlist*,int ,int ) ;
 int FUNC_3 (struct srp_map_state*,struct srp_rdma_ch*) ;
 int FUNC_4 (struct srp_map_state*,struct srp_request*,struct srp_rdma_ch*,int,int *) ;

__attribute__((used)) static int FUNC_5(struct srp_rdma_ch *VAR_1, struct srp_request *VAR_2,
         void **VAR_3, void **VAR_4, u32 VAR_5,
         __be32 *VAR_6)
{
 struct srp_target_port *VAR_7 = VAR_1->target;
 struct srp_device *VAR_8 = VAR_7->srp_host->srp_dev;
 struct srp_map_state VAR_9;
 struct srp_direct_buf VAR_10;
 u64 VAR_11[1];
 struct scatterlist VAR_12[1];
 int VAR_13;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 FUNC_1(&VAR_10, 0, sizeof(VAR_10));
 VAR_9.gen.next = VAR_3;
 VAR_9.gen.end = VAR_4;
 VAR_9.desc = &VAR_10;
 VAR_9.base_dma_addr = VAR_2->indirect_dma_addr;
 VAR_9.dma_len = VAR_5;

 if (VAR_8->use_fast_reg) {
  VAR_9.sg = VAR_12;
  FUNC_2(VAR_12, VAR_2->indirect_desc, VAR_5);
  VAR_12->dma_address = VAR_2->indirect_dma_addr;



  VAR_13 = FUNC_4(&VAR_9, VAR_2, VAR_1, 1, ((void*)0));
  if (VAR_13 < 0)
   return VAR_13;
  FUNC_0(VAR_13 < 1);
 } else if (VAR_8->use_fmr) {
  VAR_9.pages = VAR_11;
  VAR_9.pages[0] = (VAR_2->indirect_dma_addr &
      VAR_8->mr_page_mask);
  VAR_9.npages = 1;
  VAR_13 = FUNC_3(&VAR_9, VAR_1);
  if (VAR_13 < 0)
   return VAR_13;
 } else {
  return -VAR_0;
 }

 *VAR_6 = VAR_10.key;

 return 0;
}
