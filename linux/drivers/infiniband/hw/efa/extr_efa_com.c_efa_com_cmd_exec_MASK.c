
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct efa_comp_ctx {int comp_status; } ;
struct efa_com_admin_queue {int avail_cmds; int efa_dev; } ;
struct TYPE_2__ {int opcode; } ;
struct efa_admin_aq_entry {TYPE_1__ aq_common_descriptor; } ;
struct efa_admin_acq_entry {int dummy; } ;


 scalar_t__ FUNC_0 (struct efa_comp_ctx*) ;
 int FUNC_1 (struct efa_comp_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 struct efa_comp_ctx* FUNC_4 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,size_t,struct efa_admin_acq_entry*,size_t) ;
 int FUNC_5 (struct efa_comp_ctx*,struct efa_com_admin_queue*) ;
 int FUNC_6 (int ,char*,int ,int ) ;
 int FUNC_7 (int ,char*,int ,int ,int,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;

int FUNC_10(struct efa_com_admin_queue *VAR_0,
       struct efa_admin_aq_entry *VAR_1,
       size_t VAR_2,
       struct efa_admin_acq_entry *VAR_3,
       size_t VAR_4)
{
 struct efa_comp_ctx *VAR_5;
 int VAR_6;

 FUNC_8();


 FUNC_2(&VAR_0->avail_cmds);

 FUNC_6(VAR_0->efa_dev, "%s (opcode %d)\n",
    FUNC_3(VAR_1->aq_common_descriptor.opcode),
    VAR_1->aq_common_descriptor.opcode);
 VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (FUNC_0(VAR_5)) {
  FUNC_7(
   VAR_0->efa_dev,
   "Failed to submit command %s (opcode %u) err %ld\n",
   FUNC_3(VAR_1->aq_common_descriptor.opcode),
   VAR_1->aq_common_descriptor.opcode, FUNC_1(VAR_5));

  FUNC_9(&VAR_0->avail_cmds);
  return FUNC_1(VAR_5);
 }

 VAR_6 = FUNC_5(VAR_5, VAR_0);
 if (VAR_6)
  FUNC_7(
   VAR_0->efa_dev,
   "Failed to process command %s (opcode %u) comp_status %d err %d\n",
   FUNC_3(VAR_1->aq_common_descriptor.opcode),
   VAR_1->aq_common_descriptor.opcode, VAR_5->comp_status,
   VAR_6);

 FUNC_9(&VAR_0->avail_cmds);

 return VAR_6;
}
