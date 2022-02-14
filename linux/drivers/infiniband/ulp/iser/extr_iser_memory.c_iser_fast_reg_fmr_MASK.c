
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iser_reg_resources {struct ib_fmr_pool* fmr_pool; struct iser_page_vec* page_vec; } ;
struct TYPE_8__ {int length; int iova; int page_size; } ;
struct iser_page_vec {TYPE_4__ fake_mr; int * pages; scalar_t__ npages; } ;
struct TYPE_7__ {int length; int addr; int lkey; } ;
struct iser_mem_reg {TYPE_3__ sge; int rkey; struct ib_pool_fmr* mem_h; } ;
struct iser_device {int ib_device; } ;
struct iser_data_buf {int dma_nents; int sg; } ;
struct iscsi_iser_task {TYPE_1__* iser_conn; } ;
struct ib_pool_fmr {TYPE_2__* fmr; } ;
struct ib_fmr_pool {int dummy; } ;
struct ib_conn {struct iser_device* device; } ;
struct TYPE_6__ {int rkey; int lkey; } ;
struct TYPE_5__ {struct ib_conn ib_conn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_pool_fmr*) ;
 int FUNC_1 (struct ib_pool_fmr*) ;
 int VAR_1 ;
 struct ib_pool_fmr* FUNC_2 (struct ib_fmr_pool*,int *,scalar_t__,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int,int *,int ) ;
 int FUNC_4 (struct iser_data_buf*,int ) ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 int FUNC_6 (struct iser_page_vec*) ;
 int FUNC_7 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static
int FUNC_9(struct iscsi_iser_task *VAR_3,
        struct iser_data_buf *VAR_4,
        struct iser_reg_resources *VAR_5,
        struct iser_mem_reg *VAR_6)
{
 struct ib_conn *VAR_7 = &VAR_3->iser_conn->ib_conn;
 struct iser_device *VAR_8 = VAR_7->device;
 struct iser_page_vec *VAR_9 = VAR_5->page_vec;
 struct ib_fmr_pool *VAR_10 = VAR_5->fmr_pool;
 struct ib_pool_fmr *VAR_11;
 int VAR_12, VAR_13;

 VAR_9->npages = 0;
 VAR_9->fake_mr.page_size = VAR_1;
 VAR_13 = FUNC_3(&VAR_9->fake_mr, VAR_4->sg,
         VAR_4->dma_nents, ((void*)0), VAR_2);
 if (FUNC_8(VAR_13 < VAR_4->dma_nents)) {
  FUNC_7("page vec too short to hold this SG\n");
  FUNC_4(VAR_4, VAR_8->ib_device);
  FUNC_6(VAR_9);
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_10, VAR_9->pages,
        VAR_9->npages, VAR_9->pages[0]);
 if (FUNC_0(VAR_11)) {
  VAR_12 = FUNC_1(VAR_11);
  FUNC_7("ib_fmr_pool_map_phys failed: %d\n", VAR_12);
  return VAR_12;
 }

 VAR_6->sge.lkey = VAR_11->fmr->lkey;
 VAR_6->rkey = VAR_11->fmr->rkey;
 VAR_6->sge.addr = VAR_9->fake_mr.iova;
 VAR_6->sge.length = VAR_9->fake_mr.length;
 VAR_6->mem_h = VAR_11;

 FUNC_5("fmr reg: lkey=0x%x, rkey=0x%x, addr=0x%llx,"
   " length=0x%x\n", VAR_6->sge.lkey, VAR_6->rkey,
   VAR_6->sge.addr, VAR_6->sge.length);

 return 0;
}
