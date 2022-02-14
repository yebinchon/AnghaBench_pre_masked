
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct efa_com_reg_mr_result {int r_key; int l_key; } ;
struct TYPE_11__ {int mem_addr_high; int mem_addr_low; } ;
struct TYPE_12__ {TYPE_4__ address; int length; } ;
struct TYPE_13__ {TYPE_5__ pbl; int inline_pbl_array; } ;
struct efa_com_reg_mr_params {int page_shift; int permissions; scalar_t__ indirect; TYPE_6__ pbl; scalar_t__ inline_pbl; int iova; int mr_length_in_bytes; int pd; } ;
struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_admin_reg_mr_resp {int r_key; int l_key; } ;
struct TYPE_14__ {int flags; int opcode; } ;
struct TYPE_8__ {int mem_addr_high; int mem_addr_low; } ;
struct TYPE_9__ {TYPE_1__ address; int length; } ;
struct TYPE_10__ {TYPE_2__ pbl; int inline_pbl_array; } ;
struct efa_admin_reg_mr_cmd {int flags; int permissions; TYPE_7__ aq_common_desc; TYPE_3__ pbl; int iova; int mr_length; int pd; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int mr_cmd ;
typedef int cmd_completion ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int) ;

int FUNC_3(struct efa_com_dev *VAR_5,
   struct efa_com_reg_mr_params *VAR_6,
   struct efa_com_reg_mr_result *VAR_7)
{
 struct efa_admin_reg_mr_resp VAR_8;
 struct efa_com_admin_queue *VAR_9 = &VAR_5->aq;
 struct efa_admin_reg_mr_cmd VAR_10 = {};
 int VAR_11;

 VAR_10.aq_common_desc.opcode = VAR_2;
 VAR_10.pd = VAR_6->pd;
 VAR_10.mr_length = VAR_6->mr_length_in_bytes;
 VAR_10.flags |= VAR_6->page_shift &
  VAR_4;
 VAR_10.iova = VAR_6->iova;
 VAR_10.permissions |= VAR_6->permissions &
         VAR_3;

 if (VAR_6->inline_pbl) {
  FUNC_2(VAR_10.pbl.inline_pbl_array,
         VAR_6->pbl.inline_pbl_array,
         sizeof(VAR_10.pbl.inline_pbl_array));
 } else {
  VAR_10.pbl.pbl.length = VAR_6->pbl.pbl.length;
  VAR_10.pbl.pbl.address.mem_addr_low =
   VAR_6->pbl.pbl.address.mem_addr_low;
  VAR_10.pbl.pbl.address.mem_addr_high =
   VAR_6->pbl.pbl.address.mem_addr_high;
  VAR_10.aq_common_desc.flags |=
   VAR_1;
  if (VAR_6->indirect)
   VAR_10.aq_common_desc.flags |=
    VAR_0;
 }

 VAR_11 = FUNC_0(VAR_9,
          (struct efa_admin_aq_entry *)&VAR_10,
          sizeof(VAR_10),
          (struct efa_admin_acq_entry *)&VAR_8,
          sizeof(VAR_8));
 if (VAR_11) {
  FUNC_1(VAR_5->efa_dev,
          "Failed to register mr [%d]\n", VAR_11);
  return VAR_11;
 }

 VAR_7->l_key = VAR_8.l_key;
 VAR_7->r_key = VAR_8.r_key;

 return 0;
}
