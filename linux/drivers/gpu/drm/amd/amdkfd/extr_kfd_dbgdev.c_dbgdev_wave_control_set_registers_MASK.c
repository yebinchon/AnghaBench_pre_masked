
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int check_vmid; int trap_id; int cmd; void* mode; int wave_id; int simd_id; } ;
union SQ_CMD_BITS {TYPE_5__ bits; scalar_t__ u32All; } ;
struct TYPE_8__ {int sh_broadcast_writes; int se_broadcast_writes; int instance_broadcast_writes; int instance_index; int se_index; int sh_index; } ;
union GRBM_GFX_INDEX_BITS {TYPE_3__ bits; scalar_t__ u32All; } ;
struct TYPE_9__ {int HSACU; int ShaderEngine; int ShaderArray; int WaveId; int SIMD; } ;
struct HsaDbgWaveMsgAMDGen2 {TYPE_4__ ui32; } ;
struct TYPE_6__ {struct HsaDbgWaveMsgAMDGen2 WaveMsgInfoGen2; } ;
struct TYPE_7__ {TYPE_1__ DbgWaveMsg; } ;
struct dbg_wave_control_info {int mode; int operand; int trapId; TYPE_2__ dbgWave_msg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;

__attribute__((used)) static int FUNC_0(
    struct dbg_wave_control_info *VAR_9,
    union SQ_CMD_BITS *VAR_10,
    union GRBM_GFX_INDEX_BITS *VAR_11)
{
 int VAR_12 = 0;
 union SQ_CMD_BITS VAR_13;
 union GRBM_GFX_INDEX_BITS VAR_14;
 struct HsaDbgWaveMsgAMDGen2 *VAR_15;

 VAR_13.u32All = 0;
 VAR_14.u32All = 0;
 VAR_15 = &VAR_9->dbgWave_msg.DbgWaveMsg.WaveMsgInfoGen2;

 switch (VAR_9->mode) {

 case 133:




  VAR_13.bits.check_vmid = 1;
  VAR_13.bits.simd_id = VAR_15->ui32.SIMD;
  VAR_13.bits.wave_id = VAR_15->ui32.WaveId;
  VAR_13.bits.mode = VAR_8;

  VAR_14.bits.sh_index = VAR_15->ui32.ShaderArray;
  VAR_14.bits.se_index = VAR_15->ui32.ShaderEngine;
  VAR_14.bits.instance_index = VAR_15->ui32.HSACU;

  break;


 case 135:

  VAR_14.bits.sh_broadcast_writes = 1;
  VAR_14.bits.se_broadcast_writes = 1;
  VAR_14.bits.instance_broadcast_writes = 1;

  VAR_13.bits.mode = VAR_7;

  break;


 case 134:

  VAR_13.bits.check_vmid = 1;
  VAR_13.bits.mode = VAR_7;

  VAR_14.bits.sh_index = VAR_15->ui32.ShaderArray;
  VAR_14.bits.se_index = VAR_15->ui32.ShaderEngine;
  VAR_14.bits.instance_index = VAR_15->ui32.HSACU;

  break;

 default:
  return -VAR_0;
 }

 switch (VAR_9->operand) {
 case 131:
  VAR_13.bits.cmd = VAR_3;
  break;

 case 129:
  VAR_13.bits.cmd = VAR_5;
  break;

 case 130:
  VAR_13.bits.cmd = VAR_4;
  break;

 case 132:
  VAR_13.bits.cmd = VAR_2;
  break;

 case 128:
  if (VAR_9->trapId < VAR_1) {
   VAR_13.bits.cmd = VAR_6;
   VAR_13.bits.trap_id = VAR_9->trapId;
  } else {
   VAR_12 = -VAR_0;
  }
  break;

 default:
  VAR_12 = -VAR_0;
  break;
 }

 if (VAR_12 == 0) {
  *VAR_10 = VAR_13;
  *VAR_11 = VAR_14;
 }

 return VAR_12;
}
