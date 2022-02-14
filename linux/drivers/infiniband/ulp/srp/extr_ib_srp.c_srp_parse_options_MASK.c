
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int substring_t ;
struct TYPE_10__ {int ss; } ;
struct TYPE_9__ {int ss; } ;
struct TYPE_11__ {int src_specified; TYPE_4__ dst; TYPE_3__ src; } ;
struct TYPE_7__ {int raw; } ;
struct TYPE_8__ {void* service_id; int pkey; TYPE_1__ orig_dgid; } ;
struct srp_target_port {int using_rdma_cm; int target_can_queue; int io_class; int cmd_sg_cnt; int allow_ext_sg; int sg_tablesize; int comp_vector; int tl_retry_count; TYPE_6__* scsi_host; void* initiator_ext; scalar_t__ queue_size; TYPE_5__ rdma_cm; TYPE_2__ ib_cm; void* ioc_guid; void* id_ext; } ;
struct net {int dummy; } ;
struct TYPE_12__ {int max_sectors; int can_queue; int cmd_per_lun; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (unsigned long long) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,int ) ;
 int FUNC_6 (char*,int,unsigned long long*) ;
 int FUNC_7 (int *,int*) ;
 int FUNC_8 (int *,int*) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (char*,int ,int *) ;
 int FUNC_11 (char*,...) ;
 int* VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (struct net*,int *,char*,int*) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char**,char*) ;

__attribute__((used)) static int FUNC_15(struct net *VAR_11, const char *VAR_12,
        struct srp_target_port *VAR_13)
{
 char *VAR_14, *VAR_15;
 char *VAR_16;
 substring_t VAR_17[VAR_3];
 unsigned long long VAR_18;
 bool VAR_19;
 int VAR_20 = 0;
 int VAR_21;
 int VAR_22 = -VAR_0;
 int VAR_23;

 VAR_14 = FUNC_5(VAR_12, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_15 = VAR_14;
 while ((VAR_16 = FUNC_14(&VAR_15, ",\n")) != ((void*)0)) {
  if (!*VAR_16)
   continue;

  VAR_21 = FUNC_10(VAR_16, VAR_10, VAR_17);
  VAR_20 |= VAR_21;

  switch (VAR_21) {
  case 141:
   VAR_16 = FUNC_9(VAR_17);
   if (!VAR_16) {
    VAR_22 = -VAR_1;
    goto out;
   }
   VAR_22 = FUNC_6(VAR_16, 16, &VAR_18);
   if (VAR_22) {
    FUNC_11("invalid id_ext parameter '%s'\n", VAR_16);
    FUNC_4(VAR_16);
    goto out;
   }
   VAR_13->id_ext = FUNC_2(VAR_18);
   FUNC_4(VAR_16);
   break;

  case 139:
   VAR_16 = FUNC_9(VAR_17);
   if (!VAR_16) {
    VAR_22 = -VAR_1;
    goto out;
   }
   VAR_22 = FUNC_6(VAR_16, 16, &VAR_18);
   if (VAR_22) {
    FUNC_11("invalid ioc_guid parameter '%s'\n", VAR_16);
    FUNC_4(VAR_16);
    goto out;
   }
   VAR_13->ioc_guid = FUNC_2(VAR_18);
   FUNC_4(VAR_16);
   break;

  case 142:
   VAR_16 = FUNC_9(VAR_17);
   if (!VAR_16) {
    VAR_22 = -VAR_1;
    goto out;
   }
   if (FUNC_13(VAR_16) != 32) {
    FUNC_11("bad dest GID parameter '%s'\n", VAR_16);
    FUNC_4(VAR_16);
    goto out;
   }

   VAR_22 = FUNC_3(VAR_13->ib_cm.orig_dgid.raw, VAR_16, 16);
   FUNC_4(VAR_16);
   if (VAR_22 < 0)
    goto out;
   break;

  case 133:
   if (FUNC_7(VAR_17, &VAR_21)) {
    FUNC_11("bad P_Key parameter '%s'\n", VAR_16);
    goto out;
   }
   VAR_13->ib_cm.pkey = FUNC_1(VAR_21);
   break;

  case 131:
   VAR_16 = FUNC_9(VAR_17);
   if (!VAR_16) {
    VAR_22 = -VAR_1;
    goto out;
   }
   VAR_22 = FUNC_6(VAR_16, 16, &VAR_18);
   if (VAR_22) {
    FUNC_11("bad service_id parameter '%s'\n", VAR_16);
    FUNC_4(VAR_16);
    goto out;
   }
   VAR_13->ib_cm.service_id = FUNC_2(VAR_18);
   FUNC_4(VAR_16);
   break;

  case 136:
   VAR_16 = FUNC_9(VAR_17);
   if (!VAR_16) {
    VAR_22 = -VAR_1;
    goto out;
   }
   VAR_22 = FUNC_12(VAR_11, &VAR_13->rdma_cm.src.ss, VAR_16,
        ((void*)0));
   if (VAR_22 < 0) {
    FUNC_11("bad source parameter '%s'\n", VAR_16);
    FUNC_4(VAR_16);
    goto out;
   }
   VAR_13->rdma_cm.src_specified = 1;
   FUNC_4(VAR_16);
   break;

  case 137:
   VAR_16 = FUNC_9(VAR_17);
   if (!VAR_16) {
    VAR_22 = -VAR_1;
    goto out;
   }
   VAR_22 = FUNC_12(VAR_11, &VAR_13->rdma_cm.dst.ss, VAR_16,
        &VAR_19);
   if (!VAR_19)
    VAR_22 = -VAR_0;
   if (VAR_22 < 0) {
    FUNC_11("bad dest parameter '%s'\n", VAR_16);
    FUNC_4(VAR_16);
    goto out;
   }
   VAR_13->using_rdma_cm = 1;
   FUNC_4(VAR_16);
   break;

  case 134:
   if (FUNC_8(VAR_17, &VAR_21)) {
    FUNC_11("bad max sect parameter '%s'\n", VAR_16);
    goto out;
   }
   VAR_13->scsi_host->max_sectors = VAR_21;
   break;

  case 132:
   if (FUNC_8(VAR_17, &VAR_21) || VAR_21 < 1) {
    FUNC_11("bad queue_size parameter '%s'\n", VAR_16);
    goto out;
   }
   VAR_13->scsi_host->can_queue = VAR_21;
   VAR_13->queue_size = VAR_21 + VAR_7 +
          VAR_8;
   if (!(VAR_20 & 135))
    VAR_13->scsi_host->cmd_per_lun = VAR_21;
   break;

  case 135:
   if (FUNC_8(VAR_17, &VAR_21) || VAR_21 < 1) {
    FUNC_11("bad max cmd_per_lun parameter '%s'\n",
     VAR_16);
    goto out;
   }
   VAR_13->scsi_host->cmd_per_lun = VAR_21;
   break;

  case 129:
   if (FUNC_8(VAR_17, &VAR_21) || VAR_21 < 1) {
    FUNC_11("bad max target_can_queue parameter '%s'\n",
     VAR_16);
    goto out;
   }
   VAR_13->target_can_queue = VAR_21;
   break;

  case 138:
   if (FUNC_7(VAR_17, &VAR_21)) {
    FUNC_11("bad IO class parameter '%s'\n", VAR_16);
    goto out;
   }
   if (VAR_21 != VAR_5 &&
       VAR_21 != VAR_6) {
    FUNC_11("unknown IO class parameter value %x specified (use %x or %x).\n",
     VAR_21, VAR_5,
     VAR_6);
    goto out;
   }
   VAR_13->io_class = VAR_21;
   break;

  case 140:
   VAR_16 = FUNC_9(VAR_17);
   if (!VAR_16) {
    VAR_22 = -VAR_1;
    goto out;
   }
   VAR_22 = FUNC_6(VAR_16, 16, &VAR_18);
   if (VAR_22) {
    FUNC_11("bad initiator_ext value '%s'\n", VAR_16);
    FUNC_4(VAR_16);
    goto out;
   }
   VAR_13->initiator_ext = FUNC_2(VAR_18);
   FUNC_4(VAR_16);
   break;

  case 144:
   if (FUNC_8(VAR_17, &VAR_21) || VAR_21 < 1 || VAR_21 > 255) {
    FUNC_11("bad max cmd_sg_entries parameter '%s'\n",
     VAR_16);
    goto out;
   }
   VAR_13->cmd_sg_cnt = VAR_21;
   break;

  case 145:
   if (FUNC_8(VAR_17, &VAR_21)) {
    FUNC_11("bad allow_ext_sg parameter '%s'\n", VAR_16);
    goto out;
   }
   VAR_13->allow_ext_sg = !!VAR_21;
   break;

  case 130:
   if (FUNC_8(VAR_17, &VAR_21) || VAR_21 < 1 ||
     VAR_21 > VAR_4) {
    FUNC_11("bad max sg_tablesize parameter '%s'\n",
     VAR_16);
    goto out;
   }
   VAR_13->sg_tablesize = VAR_21;
   break;

  case 143:
   if (FUNC_8(VAR_17, &VAR_21) || VAR_21 < 0) {
    FUNC_11("bad comp_vector parameter '%s'\n", VAR_16);
    goto out;
   }
   VAR_13->comp_vector = VAR_21;
   break;

  case 128:
   if (FUNC_8(VAR_17, &VAR_21) || VAR_21 < 2 || VAR_21 > 7) {
    FUNC_11("bad tl_retry_count parameter '%s' (must be a number between 2 and 7)\n",
     VAR_16);
    goto out;
   }
   VAR_13->tl_retry_count = VAR_21;
   break;

  default:
   FUNC_11("unknown parameter or missing value '%s' in target creation request\n",
    VAR_16);
   goto out;
  }
 }

 for (VAR_23 = 0; VAR_23 < FUNC_0(VAR_9); VAR_23++) {
  if ((VAR_20 & VAR_9[VAR_23]) == VAR_9[VAR_23]) {
   VAR_22 = 0;
   break;
  }
 }
 if (VAR_22)
  FUNC_11("target creation request is missing one or more parameters\n");

 if (VAR_13->scsi_host->cmd_per_lun > VAR_13->scsi_host->can_queue
     && (VAR_20 & 135))
  FUNC_11("cmd_per_lun = %d > queue_size = %d\n",
   VAR_13->scsi_host->cmd_per_lun,
   VAR_13->scsi_host->can_queue);

out:
 FUNC_4(VAR_14);
 return VAR_22;
}
