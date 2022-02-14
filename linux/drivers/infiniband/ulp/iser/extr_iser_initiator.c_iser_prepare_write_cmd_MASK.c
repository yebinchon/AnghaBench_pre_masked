
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lkey; scalar_t__ addr; } ;
struct iser_mem_reg {TYPE_1__ sge; int rkey; } ;
struct iser_data_buf {unsigned int data_len; } ;
struct iser_ctrl {int write_va; int write_stag; int flags; } ;
struct iscsi_task {int itt; struct iscsi_iser_task* dd_data; } ;
struct TYPE_4__ {int num_sge; struct ib_sge* tx_sg; struct iser_ctrl iser_header; } ;
struct iscsi_iser_task {TYPE_2__ desc; struct iser_mem_reg* rdma_reg; struct iser_data_buf* prot; int sc; struct iser_data_buf* data; } ;
struct ib_sge {unsigned int length; int lkey; scalar_t__ addr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,unsigned int,...) ;
 int FUNC_3 (struct iscsi_iser_task*,struct iser_data_buf*,size_t,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct iscsi_iser_task*,size_t,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct iscsi_task *VAR_3,
         unsigned int VAR_4,
         unsigned int VAR_5,
         unsigned int VAR_6)
{
 struct iscsi_iser_task *VAR_7 = VAR_3->dd_data;
 struct iser_mem_reg *VAR_8;
 int VAR_9;
 struct iser_ctrl *VAR_10 = &VAR_7->desc.iser_header;
 struct iser_data_buf *VAR_11 = &VAR_7->data[VAR_1];
 struct ib_sge *VAR_12 = &VAR_7->desc.tx_sg[1];

 VAR_9 = FUNC_3(VAR_7,
         VAR_11,
         VAR_1,
         VAR_0);
 if (VAR_9)
  return VAR_9;

 if (FUNC_6(VAR_7->sc)) {
  struct iser_data_buf *VAR_13 = &VAR_7->prot[VAR_1];

  VAR_9 = FUNC_3(VAR_7,
          VAR_13,
          VAR_1,
          VAR_0);
  if (VAR_9)
   return VAR_9;
 }

 VAR_9 = FUNC_5(VAR_7, VAR_1,
    VAR_11->data_len == VAR_4);
 if (VAR_9 != 0) {
  FUNC_4("Failed to register write cmd RDMA mem\n");
  return VAR_9;
 }

 VAR_8 = &VAR_7->rdma_reg[VAR_1];

 if (VAR_5 < VAR_6) {
  VAR_10->flags |= VAR_2;
  if (VAR_11->data_len > VAR_4) {
   VAR_10->write_stag = FUNC_0(VAR_8->rkey);
   VAR_10->write_va = FUNC_1(VAR_8->sge.addr + VAR_5);
  }

  FUNC_2("Cmd itt:%d, WRITE tags, RKEY:%#.4X VA:%#llX + unsol:%d\n",
    VAR_3->itt, VAR_8->rkey,
    (unsigned long long)VAR_8->sge.addr, VAR_5);
 }

 if (VAR_4 > 0) {
  FUNC_2("Cmd itt:%d, WRITE, adding imm.data sz: %d\n",
    VAR_3->itt, VAR_4);
  VAR_12->addr = VAR_8->sge.addr;
  VAR_12->length = VAR_4;
  VAR_12->lkey = VAR_8->sge.lkey;
  VAR_7->desc.num_sge = 2;
 }

 return 0;
}
