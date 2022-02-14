
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u32 ;
struct ib_conn {scalar_t__ pi_support; TYPE_1__* device; } ;
struct iser_conn {int scsi_sg_tablesize; scalar_t__ state; int state_mutex; struct ib_conn ib_conn; int max_cmds; } ;
struct iscsi_iser_task {int dummy; } ;
struct iscsi_endpoint {struct iser_conn* dd_data; } ;
struct iscsi_cls_session {int dummy; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_5__ {int sig_prot_cap; int device_cap_flags; } ;
struct ib_device {TYPE_3__ dev; TYPE_2__ attrs; } ;
struct Scsi_Host {int max_cmd_len; int sg_tablesize; scalar_t__ max_sectors; void* can_queue; int virt_boundary_mask; scalar_t__ max_channel; scalar_t__ max_id; int max_lun; int cmd_per_lun; int transportt; } ;
struct TYPE_4__ {struct ib_device* ib_device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct Scsi_Host*,int *) ;
 struct Scsi_Host* FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct Scsi_Host*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct iscsi_cls_session* FUNC_4 (int *,struct Scsi_Host*,void*,int ,int,int ,int ) ;
 int FUNC_5 (char*,struct iser_conn*,int,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,struct iser_conn*) ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 void* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct Scsi_Host*,int) ;
 int FUNC_14 (struct Scsi_Host*,int ) ;
 int VAR_12 ;

__attribute__((used)) static struct iscsi_cls_session *
FUNC_15(struct iscsi_endpoint *VAR_13,
     uint16_t VAR_14, uint16_t VAR_15,
     uint32_t VAR_16)
{
 struct iscsi_cls_session *VAR_17;
 struct Scsi_Host *VAR_18;
 struct iser_conn *VAR_19 = ((void*)0);
 struct ib_conn *VAR_20;
 struct ib_device *VAR_21;
 u32 VAR_22;

 VAR_18 = FUNC_1(&VAR_8, 0, 0);
 if (!VAR_18)
  return ((void*)0);
 VAR_18->transportt = VAR_7;
 VAR_18->cmd_per_lun = VAR_15;
 VAR_18->max_lun = VAR_10;
 VAR_18->max_id = 0;
 VAR_18->max_channel = 0;
 VAR_18->max_cmd_len = 16;





 if (VAR_13) {
  VAR_19 = VAR_13->dd_data;
  VAR_18->sg_tablesize = VAR_19->scsi_sg_tablesize;
  VAR_18->can_queue = FUNC_10(VAR_12, VAR_14, VAR_19->max_cmds);

  FUNC_11(&VAR_19->state_mutex);
  if (VAR_19->state != VAR_1) {
   FUNC_7("iser conn %p already started teardown\n",
     VAR_19);
   FUNC_12(&VAR_19->state_mutex);
   goto free_host;
  }

  VAR_20 = &VAR_19->ib_conn;
  VAR_21 = VAR_20->device->ib_device;
  if (VAR_20->pi_support) {
   u32 VAR_23 = VAR_21->attrs.sig_prot_cap;

   FUNC_14(VAR_18, FUNC_6(VAR_23));
   FUNC_13(VAR_18, VAR_6 |
         VAR_5);
  }

  if (!(VAR_21->attrs.device_cap_flags & VAR_0))
   VAR_18->virt_boundary_mask = ~VAR_3;

  if (FUNC_0(VAR_18, VAR_21->dev.parent)) {
   FUNC_12(&VAR_19->state_mutex);
   goto free_host;
  }
  FUNC_12(&VAR_19->state_mutex);
 } else {
  VAR_18->can_queue = FUNC_10(VAR_12, VAR_14, VAR_2);
  if (FUNC_0(VAR_18, ((void*)0)))
   goto free_host;
 }

 VAR_22 = (VAR_18->sg_tablesize * VAR_4) >> 9;
 VAR_18->max_sectors = FUNC_9(VAR_11, VAR_22);

 FUNC_5("iser_conn %p, sg_tablesize %u, max_sectors %u\n",
   VAR_19, VAR_18->sg_tablesize,
   VAR_18->max_sectors);

 if (VAR_18->max_sectors < VAR_11)
  FUNC_8("max_sectors was reduced from %u to %u\n",
     VAR_11, VAR_18->max_sectors);

 VAR_17 = FUNC_4(&VAR_9, VAR_18,
       VAR_18->can_queue, 0,
       sizeof(struct iscsi_iser_task),
       VAR_16, 0);
 if (!VAR_17)
  goto remove_host;

 return VAR_17;

remove_host:
 FUNC_3(VAR_18);
free_host:
 FUNC_2(VAR_18);
 return ((void*)0);
}
