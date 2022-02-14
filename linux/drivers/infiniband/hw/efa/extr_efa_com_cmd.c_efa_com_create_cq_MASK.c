
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_com_create_cq_result {int actual_depth; int cq_idx; } ;
struct efa_com_create_cq_params {int entry_size_in_bytes; int cq_depth; int dma_addr; int uarn; int num_sub_cqs; } ;
struct efa_admin_create_cq_resp {int cq_idx; } ;
struct TYPE_4__ {int mem_addr_low; int mem_addr_high; } ;
struct TYPE_3__ {int opcode; } ;
struct efa_admin_create_cq_cmd {int cq_caps_2; TYPE_2__ cq_ba; int uar; int num_sub_cqs; int cq_depth; TYPE_1__ aq_common_desc; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int create_cmd ;
typedef int cmd_completion ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int ,char*,int) ;

int FUNC_3(struct efa_com_dev *VAR_2,
        struct efa_com_create_cq_params *VAR_3,
        struct efa_com_create_cq_result *VAR_4)
{
 struct efa_admin_create_cq_resp VAR_5;
 struct efa_admin_create_cq_cmd VAR_6 = {};
 struct efa_com_admin_queue *VAR_7 = &VAR_2->aq;
 int VAR_8;

 VAR_6.aq_common_desc.opcode = VAR_0;
 VAR_6.cq_caps_2 = (VAR_3->entry_size_in_bytes / 4) &
    VAR_1;
 VAR_6.cq_depth = VAR_3->cq_depth;
 VAR_6.num_sub_cqs = VAR_3->num_sub_cqs;
 VAR_6.uar = VAR_3->uarn;

 FUNC_1(VAR_3->dma_addr,
        &VAR_6.cq_ba.mem_addr_high,
        &VAR_6.cq_ba.mem_addr_low);

 VAR_8 = FUNC_0(VAR_7,
          (struct efa_admin_aq_entry *)&VAR_6,
          sizeof(VAR_6),
          (struct efa_admin_acq_entry *)&VAR_5,
          sizeof(VAR_5));
 if (VAR_8) {
  FUNC_2(VAR_2->efa_dev,
          "Failed to create cq[%d]\n", VAR_8);
  return VAR_8;
 }

 VAR_4->cq_idx = VAR_5.cq_idx;
 VAR_4->actual_depth = VAR_3->cq_depth;

 return 0;
}
