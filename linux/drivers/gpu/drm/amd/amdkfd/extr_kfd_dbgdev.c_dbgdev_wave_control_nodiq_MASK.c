
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


struct TYPE_15__ {char* check_vmid; char* cmd; char* queue_id; char* simd_id; char* mode; char* vm_id; char* wave_id; } ;
struct TYPE_10__ {char* vm_id; } ;
union SQ_CMD_BITS {scalar_t__ u32All; TYPE_6__ bitfields; TYPE_1__ bits; } ;
struct TYPE_16__ {char* instance_broadcast_writes; char* instance_index; char* se_broadcast_writes; char* se_index; char* sh_index; char* sh_broadcast_writes; } ;
union GRBM_GFX_INDEX_BITS {int u32All; TYPE_7__ bitfields; } ;
struct TYPE_14__ {char* vmid; } ;
struct kfd_process_device {TYPE_5__ qpd; } ;
struct kfd_dbgdev {TYPE_9__* dev; } ;
struct TYPE_11__ {char* Value; } ;
struct TYPE_12__ {TYPE_2__ WaveMsgInfoGen2; } ;
struct TYPE_13__ {TYPE_3__ DbgWaveMsg; } ;
struct dbg_wave_control_info {char* mode; char* operand; char* trapId; TYPE_4__ dbgWave_msg; int process; } ;
struct TYPE_18__ {int kgd; TYPE_8__* kfd2kgd; } ;
struct TYPE_17__ {int (* wave_control_execute ) (int ,int ,scalar_t__) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct dbg_wave_control_info*,union SQ_CMD_BITS*,union GRBM_GFX_INDEX_BITS*) ;
 struct kfd_process_device* FUNC_1 (TYPE_9__*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct kfd_dbgdev *VAR_1,
     struct dbg_wave_control_info *VAR_2)
{
 int VAR_3;
 union SQ_CMD_BITS VAR_4;
 union GRBM_GFX_INDEX_BITS VAR_5;
 struct kfd_process_device *VAR_6;

 VAR_4.u32All = 0;


 VAR_6 = FUNC_1(VAR_1->dev, VAR_2->process);

 if (!VAR_6) {
  FUNC_3("Failed to get pdd for wave control no DIQ\n");
  return -VAR_0;
 }
 VAR_3 = FUNC_0(VAR_2, &VAR_4,
       &VAR_5);
 if (VAR_3) {
  FUNC_3("Failed to set wave control registers\n");
  return VAR_3;
 }



 VAR_4.bits.vm_id = VAR_6->qpd.vmid;

 FUNC_2("\t\t %30s\n", "* * * * * * * * * * * * * * * * * *");

 FUNC_2("\t\t mode      is: %u\n", VAR_2->mode);
 FUNC_2("\t\t operand   is: %u\n", VAR_2->operand);
 FUNC_2("\t\t trap id   is: %u\n", VAR_2->trapId);
 FUNC_2("\t\t msg value is: %u\n",
   VAR_2->dbgWave_msg.DbgWaveMsg.WaveMsgInfoGen2.Value);
 FUNC_2("\t\t vmid      is: %u\n", VAR_6->qpd.vmid);

 FUNC_2("\t\t chk_vmid  is : %u\n", VAR_4.bitfields.check_vmid);
 FUNC_2("\t\t command   is : %u\n", VAR_4.bitfields.cmd);
 FUNC_2("\t\t queue id  is : %u\n", VAR_4.bitfields.queue_id);
 FUNC_2("\t\t simd id   is : %u\n", VAR_4.bitfields.simd_id);
 FUNC_2("\t\t mode      is : %u\n", VAR_4.bitfields.mode);
 FUNC_2("\t\t vm_id     is : %u\n", VAR_4.bitfields.vm_id);
 FUNC_2("\t\t wave_id   is : %u\n", VAR_4.bitfields.wave_id);

 FUNC_2("\t\t ibw       is : %u\n",
   VAR_5.bitfields.instance_broadcast_writes);
 FUNC_2("\t\t ii        is : %u\n",
   VAR_5.bitfields.instance_index);
 FUNC_2("\t\t sebw      is : %u\n",
   VAR_5.bitfields.se_broadcast_writes);
 FUNC_2("\t\t se_ind    is : %u\n", VAR_5.bitfields.se_index);
 FUNC_2("\t\t sh_ind    is : %u\n", VAR_5.bitfields.sh_index);
 FUNC_2("\t\t sbw       is : %u\n",
   VAR_5.bitfields.sh_broadcast_writes);

 FUNC_2("\t\t %30s\n", "* * * * * * * * * * * * * * * * * *");

 return VAR_1->dev->kfd2kgd->wave_control_execute(VAR_1->dev->kgd,
       VAR_5.u32All,
       VAR_4.u32All);
}
