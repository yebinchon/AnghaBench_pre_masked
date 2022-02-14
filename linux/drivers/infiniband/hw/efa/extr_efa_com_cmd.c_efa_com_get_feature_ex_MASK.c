
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_admin_get_feature_resp {int dummy; } ;
struct TYPE_8__ {int feature_id; } ;
struct TYPE_6__ {int mem_addr_low; int mem_addr_high; } ;
struct TYPE_7__ {scalar_t__ length; TYPE_2__ address; } ;
struct TYPE_5__ {int flags; int opcode; } ;
struct efa_admin_get_feature_cmd {TYPE_4__ feature_common; TYPE_3__ control_buffer; TYPE_1__ aq_common_descriptor; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int get_cmd ;
typedef enum efa_admin_aq_feature_id { ____Placeholder_efa_admin_aq_feature_id } efa_admin_aq_feature_id ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efa_com_dev*,int) ;
 int FUNC_1 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int ,char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct efa_com_dev *VAR_3,
      struct efa_admin_get_feature_resp *VAR_4,
      enum efa_admin_aq_feature_id VAR_5,
      dma_addr_t VAR_6,
      u32 VAR_7)
{
 struct efa_admin_get_feature_cmd VAR_8 = {};
 struct efa_com_admin_queue *VAR_9;
 int VAR_10;

 if (!FUNC_0(VAR_3, VAR_5)) {
  FUNC_3(VAR_3->efa_dev,
          "Feature %d isn't supported\n",
          VAR_5);
  return -VAR_2;
 }

 VAR_9 = &VAR_3->aq;

 VAR_8.aq_common_descriptor.opcode = VAR_1;

 if (VAR_7)
  VAR_8.aq_common_descriptor.flags =
   VAR_0;


 FUNC_2(VAR_6,
        &VAR_8.control_buffer.address.mem_addr_high,
        &VAR_8.control_buffer.address.mem_addr_low);

 VAR_8.control_buffer.length = VAR_7;
 VAR_8.feature_common.feature_id = VAR_5;
 VAR_10 = FUNC_1(VAR_9,
          (struct efa_admin_aq_entry *)
          &VAR_8,
          sizeof(VAR_8),
          (struct efa_admin_acq_entry *)
          VAR_4,
          sizeof(*VAR_4));

 if (VAR_10) {
  FUNC_3(
   VAR_3->efa_dev,
   "Failed to submit get_feature command %d [%d]\n",
   VAR_5, VAR_10);
  return VAR_10;
 }

 return 0;
}
