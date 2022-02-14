
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int grp; } ;
union ctrl_info {TYPE_2__ s; } ;
struct TYPE_12__ {int compcode; } ;
union cpt_res_s {TYPE_3__ s; } ;
struct TYPE_10__ {int doneint; scalar_t__ ei3; int ei2; int ei1; scalar_t__ ei0; scalar_t__ wq_ptr; scalar_t__ grp; scalar_t__ tag; scalar_t__ res_addr; } ;
union cpt_inst_s {TYPE_1__ s; } ;
typedef int u8 ;
typedef scalar_t__ u64 ;
struct pending_queue {int lock; int pending_count; int front; int rear; } ;
struct pending_entry {int busy; int callback_arg; int callback; void* post_arg; void* completion_addr; } ;
struct pci_dev {int dev; } ;
struct TYPE_13__ {int flags; } ;
struct cptvf_request {int dlen; int param2; int param1; TYPE_4__ opcode; } ;
struct TYPE_16__ {int grp; } ;
struct TYPE_17__ {scalar_t__ u64; TYPE_7__ s; } ;
struct TYPE_14__ {void* dlen; void* param2; void* param1; void* opcode; } ;
struct TYPE_15__ {scalar_t__ u64; TYPE_5__ s; } ;
struct cpt_vq_command {TYPE_8__ cptr; int rptr; int dptr; TYPE_6__ cmd; } ;
struct TYPE_18__ {int qlen; struct pending_queue* queue; } ;
struct cpt_vf {TYPE_9__ pqinfo; struct pci_dev* pdev; } ;
struct cpt_request_info {int callback_arg; int callback; int ctrl; int req; } ;
struct cpt_info_buffer {scalar_t__ comp_baddr; struct cpt_request_info* req; int time_in; struct pending_entry* pentry; void* completion_addr; int rptr_baddr; int dptr_baddr; int dlen; struct cpt_vf* cptvf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 void* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 scalar_t__ FUNC_6 (int *,void*,int,int ) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (struct cpt_vf*,struct cpt_info_buffer*) ;
 struct pending_entry* FUNC_9 (struct pending_queue*,int ) ;
 int VAR_6 ;
 void* FUNC_10 (int,int ) ;
 int FUNC_11 (struct cpt_vf*,TYPE_9__*,int) ;
 int FUNC_12 (struct cpt_vf*,union cpt_inst_s*,int) ;
 int FUNC_13 (struct cpt_vf*,struct cpt_info_buffer*,struct cpt_request_info*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int) ;

int FUNC_17(struct cpt_vf *VAR_7, struct cpt_request_info *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0;
 struct cpt_info_buffer *VAR_12 = ((void*)0);
 struct cptvf_request *VAR_13 = ((void*)0);
 union ctrl_info *VAR_14 = ((void*)0);
 union cpt_res_s *VAR_15 = ((void*)0);
 struct pending_entry *VAR_16 = ((void*)0);
 struct pending_queue *VAR_17 = ((void*)0);
 struct pci_dev *VAR_18 = VAR_7->pdev;
 u8 VAR_19 = 0;
 struct cpt_vq_command VAR_20;
 union cpt_inst_s VAR_21;

 VAR_12 = FUNC_10(sizeof(*VAR_12), VAR_4);
 if (FUNC_16(!VAR_12)) {
  FUNC_5(&VAR_18->dev, "Unable to allocate memory for info_buffer\n");
  return -VAR_3;
 }

 VAR_13 = (struct cptvf_request *)&VAR_8->req;
 VAR_14 = (union ctrl_info *)&VAR_8->ctrl;

 VAR_12->cptvf = VAR_7;
 VAR_19 = VAR_14->s.grp;
 VAR_9 = FUNC_13(VAR_7, VAR_12, VAR_8);
 if (VAR_9) {
  FUNC_5(&VAR_18->dev, "Setting up SG list failed");
  goto request_cleanup;
 }

 VAR_13->dlen = VAR_12->dlen;




 VAR_12->completion_addr = FUNC_10(sizeof(union cpt_res_s), VAR_4);
 if (FUNC_16(!VAR_12->completion_addr)) {
  FUNC_5(&VAR_18->dev, "Unable to allocate memory for completion_addr\n");
  VAR_9 = -VAR_3;
  goto request_cleanup;
 }

 VAR_15 = (union cpt_res_s *)VAR_12->completion_addr;
 VAR_15->s.compcode = VAR_0;
 VAR_12->comp_baddr = FUNC_6(&VAR_18->dev,
            (void *)VAR_12->completion_addr,
            sizeof(union cpt_res_s),
            VAR_1);
 if (FUNC_7(&VAR_18->dev, VAR_12->comp_baddr)) {
  FUNC_5(&VAR_18->dev, "mapping compptr Failed %lu\n",
   sizeof(union cpt_res_s));
  VAR_9 = -VAR_2;
  goto request_cleanup;
 }


 VAR_20.cmd.u64 = 0;
 VAR_20.cmd.s.opcode = FUNC_2(VAR_13->opcode.flags);
 VAR_20.cmd.s.param1 = FUNC_2(VAR_13->param1);
 VAR_20.cmd.s.param2 = FUNC_2(VAR_13->param2);
 VAR_20.cmd.s.dlen = FUNC_2(VAR_13->dlen);


 VAR_20.cmd.u64 = FUNC_3(VAR_20.cmd.u64);
 VAR_20.dptr = VAR_12->dptr_baddr;
 VAR_20.rptr = VAR_12->rptr_baddr;
 VAR_20.cptr.u64 = 0;
 VAR_20.cptr.s.grp = VAR_19;


 VAR_11 = 0;
 VAR_17 = &VAR_7->pqinfo.queue[VAR_11];

 if (FUNC_1(&VAR_17->pending_count) > VAR_5) {
  FUNC_5(&VAR_18->dev, "pending threshold reached\n");
  FUNC_11(VAR_7, &VAR_7->pqinfo, VAR_11);
 }

get_pending_entry:
 FUNC_14(&VAR_17->lock);
 VAR_16 = FUNC_9(VAR_17, VAR_7->pqinfo.qlen);
 if (FUNC_16(!VAR_16)) {
  FUNC_15(&VAR_17->lock);
  if (VAR_10 == 0) {
   FUNC_11(VAR_7, &VAR_7->pqinfo, VAR_11);
   VAR_10 = 1;
   goto get_pending_entry;
  }
  FUNC_5(&VAR_18->dev, "Get free entry failed\n");
  FUNC_5(&VAR_18->dev, "queue: %d, rear: %d, front: %d\n",
   VAR_11, VAR_17->rear, VAR_17->front);
  VAR_9 = -VAR_2;
  goto request_cleanup;
 }

 VAR_16->completion_addr = VAR_12->completion_addr;
 VAR_16->post_arg = (void *)VAR_12;
 VAR_16->callback = VAR_8->callback;
 VAR_16->callback_arg = VAR_8->callback_arg;
 VAR_12->pentry = VAR_16;
 VAR_16->busy = 1;
 FUNC_0(&VAR_17->pending_count);


 VAR_12->pentry = VAR_16;
 VAR_12->time_in = VAR_6;
 VAR_12->req = VAR_8;


 VAR_21.s.doneint = 1;
 VAR_21.s.res_addr = (u64)VAR_12->comp_baddr;
 VAR_21.s.tag = 0;
 VAR_21.s.grp = 0;
 VAR_21.s.wq_ptr = 0;
 VAR_21.s.ei0 = VAR_20.cmd.u64;
 VAR_21.s.ei1 = VAR_20.dptr;
 VAR_21.s.ei2 = VAR_20.rptr;
 VAR_21.s.ei3 = VAR_20.cptr.u64;

 VAR_9 = FUNC_12(VAR_7, &VAR_21, VAR_11);
 FUNC_15(&VAR_17->lock);
 if (FUNC_16(VAR_9)) {
  FUNC_5(&VAR_18->dev, "Send command failed for AE\n");
  VAR_9 = -VAR_2;
  goto request_cleanup;
 }

 return 0;

request_cleanup:
 FUNC_4(&VAR_18->dev, "Failed to submit CPT command\n");
 FUNC_8(VAR_7, VAR_12);

 return VAR_9;
}
