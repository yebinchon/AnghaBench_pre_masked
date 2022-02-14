
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct cgs_device {int dummy; } ;
typedef enum cgs_ucode_id { ____Placeholder_cgs_ucode_id } cgs_ucode_id ;
struct TYPE_7__ {int rlc_fw_version; int mec_fw_version; int me_fw_version; int pfp_fw_version; int ce_fw_version; } ;
struct TYPE_6__ {TYPE_1__* instance; } ;
struct TYPE_8__ {TYPE_3__ gfx; TYPE_2__ sdma; } ;
struct TYPE_5__ {int fw_version; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 TYPE_4__* VAR_1 ;

__attribute__((used)) static uint16_t FUNC_1(struct cgs_device *VAR_2,
     enum cgs_ucode_id VAR_3)
{
 VAR_0;
 uint16_t VAR_4 = 0;

 switch (VAR_3) {
  case 130:
   VAR_4 = VAR_1->sdma.instance[0].fw_version;
   break;
  case 129:
   VAR_4 = VAR_1->sdma.instance[1].fw_version;
   break;
  case 137:
   VAR_4 = VAR_1->gfx.ce_fw_version;
   break;
  case 132:
   VAR_4 = VAR_1->gfx.pfp_fw_version;
   break;
  case 136:
   VAR_4 = VAR_1->gfx.me_fw_version;
   break;
  case 135:
   VAR_4 = VAR_1->gfx.mec_fw_version;
   break;
  case 134:
   VAR_4 = VAR_1->gfx.mec_fw_version;
   break;
  case 133:
   VAR_4 = VAR_1->gfx.mec_fw_version;
   break;
  case 131:
   VAR_4 = VAR_1->gfx.rlc_fw_version;
   break;
  case 128:
   break;
  default:
   FUNC_0("firmware type %d do not have version\n", VAR_3);
   break;
 }
 return VAR_4;
}
