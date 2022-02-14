
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ addr; } ;
struct iser_mem_reg {TYPE_2__ sge; int rkey; } ;
struct iser_data_buf {int dummy; } ;
struct iser_ctrl {int read_va; int read_stag; int flags; } ;
struct iscsi_task {int itt; struct iscsi_iser_task* dd_data; } ;
struct TYPE_3__ {struct iser_ctrl iser_header; } ;
struct iscsi_iser_task {struct iser_mem_reg* rdma_reg; struct iser_data_buf* prot; int sc; struct iser_data_buf* data; TYPE_1__ desc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char*,int ,int ,unsigned long long) ;
 int FUNC_3 (struct iscsi_iser_task*,struct iser_data_buf*,size_t,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct iscsi_iser_task*,size_t,int) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct iscsi_task *VAR_3)

{
 struct iscsi_iser_task *VAR_4 = VAR_3->dd_data;
 struct iser_mem_reg *VAR_5;
 int VAR_6;
 struct iser_ctrl *VAR_7 = &VAR_4->desc.iser_header;
 struct iser_data_buf *VAR_8 = &VAR_4->data[VAR_1];

 VAR_6 = FUNC_3(VAR_4,
         VAR_8,
         VAR_1,
         VAR_0);
 if (VAR_6)
  return VAR_6;

 if (FUNC_6(VAR_4->sc)) {
  struct iser_data_buf *VAR_9 = &VAR_4->prot[VAR_1];

  VAR_6 = FUNC_3(VAR_4,
          VAR_9,
          VAR_1,
          VAR_0);
  if (VAR_6)
   return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_4, VAR_1, 0);
 if (VAR_6) {
  FUNC_4("Failed to set up Data-IN RDMA\n");
  return VAR_6;
 }
 VAR_5 = &VAR_4->rdma_reg[VAR_1];

 VAR_7->flags |= VAR_2;
 VAR_7->read_stag = FUNC_0(VAR_5->rkey);
 VAR_7->read_va = FUNC_1(VAR_5->sge.addr);

 FUNC_2("Cmd itt:%d READ tags RKEY:%#.4X VA:%#llX\n",
   VAR_3->itt, VAR_5->rkey,
   (unsigned long long)VAR_5->sge.addr);

 return 0;
}
