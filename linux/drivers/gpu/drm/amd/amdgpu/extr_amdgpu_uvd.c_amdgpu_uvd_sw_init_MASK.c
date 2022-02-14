
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct common_firmware_header {int ucode_size_bytes; int ucode_version; } ;
struct TYPE_9__ {unsigned long max_handles; unsigned int fw_version; int num_uvd_inst; int harvest_config; int address_64_bit; int use_ctx_buf; int ** filp; int * handles; TYPE_2__* inst; TYPE_4__* fw; int idle_work; } ;
struct TYPE_7__ {scalar_t__ load_type; } ;
struct amdgpu_device {int asic_type; TYPE_3__ uvd; int dev; TYPE_1__ firmware; } ;
struct TYPE_10__ {scalar_t__ data; } ;
struct TYPE_8__ {int cpu_addr; int gpu_addr; int vcpu_bo; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 void* VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (char*,unsigned int,unsigned int) ;
 int FUNC_2 (char*,unsigned int,unsigned int,unsigned int,...) ;
 int VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 char* VAR_16 ;
 char* VAR_17 ;
 char* VAR_18 ;
 char* VAR_19 ;
 char* VAR_20 ;
 char* VAR_21 ;
 char* VAR_22 ;
 char* VAR_23 ;
 char* VAR_24 ;
 unsigned int VAR_25 ;
 unsigned int VAR_26 ;
 unsigned int VAR_27 ;
 unsigned int VAR_28 ;
 unsigned int VAR_29 ;
 int FUNC_3 (int *,int ) ;
 int VAR_30 ;
 int FUNC_4 (struct amdgpu_device*,unsigned long,int ,int ,int *,int *,int *) ;
 int FUNC_5 (struct amdgpu_device*,int ,int,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int VAR_31 ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__**,char const*,int ) ;

int FUNC_12(struct amdgpu_device *VAR_32)
{
 unsigned long VAR_33;
 const char *VAR_34;
 const struct common_firmware_header *VAR_35;
 unsigned VAR_36;
 int VAR_37, VAR_38, VAR_39;

 FUNC_3(&VAR_32->uvd.idle_work, VAR_31);

 switch (VAR_32->asic_type) {
 case 132:
  VAR_34 = VAR_20;
  break;
 case 141:
  VAR_34 = VAR_11;
  break;
 case 142:
  VAR_34 = VAR_10;
  break;
 case 133:
  VAR_34 = VAR_19;
  break;
 case 136:
  VAR_34 = VAR_16;
  break;
 case 135:
  VAR_34 = VAR_17;
  break;
 case 134:
  VAR_34 = VAR_18;
  break;
 case 131:
  VAR_34 = VAR_21;
  break;
 case 130:
  VAR_34 = VAR_22;
  break;
 case 128:
  VAR_34 = VAR_24;
  break;
 case 129:
  VAR_34 = VAR_23;
  break;
 default:
  return -VAR_8;
 }

 VAR_39 = FUNC_11(&VAR_32->uvd.fw, VAR_34, VAR_32->dev);
 if (VAR_39) {
  FUNC_8(VAR_32->dev, "amdgpu_uvd: Can't load firmware \"%s\"\n",
   VAR_34);
  return VAR_39;
 }

 VAR_39 = FUNC_6(VAR_32->uvd.fw);
 if (VAR_39) {
  FUNC_8(VAR_32->dev, "amdgpu_uvd: Can't validate firmware \"%s\"\n",
   VAR_34);
  FUNC_10(VAR_32->uvd.fw);
  VAR_32->uvd.fw = ((void*)0);
  return VAR_39;
 }


 VAR_32->uvd.max_handles = VAR_0;

 VAR_35 = (const struct common_firmware_header *)VAR_32->uvd.fw->data;
 VAR_36 = FUNC_9(VAR_35->ucode_version) & 0xff;

 if (VAR_32->asic_type < 129) {
  unsigned VAR_40, VAR_41;

  VAR_40 = (FUNC_9(VAR_35->ucode_version) >> 24) & 0xff;
  VAR_41 = (FUNC_9(VAR_35->ucode_version) >> 8) & 0xff;
  FUNC_2("Found UVD firmware Version: %hu.%hu Family ID: %hu\n",
   VAR_40, VAR_41, VAR_36);







  if ((VAR_40 > 0x01) ||
      ((VAR_40 == 0x01) && (VAR_41 >= 0x50)))
   VAR_32->uvd.max_handles = VAR_3;

  VAR_32->uvd.fw_version = ((VAR_40 << 24) | (VAR_41 << 16) |
     (VAR_36 << 8));

  if ((VAR_32->asic_type == 136 ||
       VAR_32->asic_type == 135) &&
      (VAR_32->uvd.fw_version < VAR_27))
   FUNC_1("POLARIS10/11 UVD firmware version %hu.%hu is too old.\n",
      VAR_40, VAR_41);
 } else {
  unsigned int VAR_42, VAR_43, VAR_44;

  VAR_44 = (FUNC_9(VAR_35->ucode_version) >> 8) & 0xff;
  VAR_43 = (FUNC_9(VAR_35->ucode_version) >> 24) & 0x3f;
  VAR_42 = (FUNC_9(VAR_35->ucode_version) >> 30) & 0x3;
  FUNC_2("Found UVD firmware ENC: %hu.%hu DEC: .%hu Family ID: %hu\n",
   VAR_42, VAR_43, VAR_44, VAR_36);

  VAR_32->uvd.max_handles = VAR_3;

  VAR_32->uvd.fw_version = FUNC_9(VAR_35->ucode_version);
 }

 VAR_33 = VAR_6 + VAR_4
    + VAR_5 * VAR_32->uvd.max_handles;
 if (VAR_32->firmware.load_type != VAR_1)
  VAR_33 += FUNC_0(FUNC_9(VAR_35->ucode_size_bytes) + 8);

 for (VAR_38 = 0; VAR_38 < VAR_32->uvd.num_uvd_inst; VAR_38++) {
  if (VAR_32->uvd.harvest_config & (1 << VAR_38))
   continue;
  VAR_39 = FUNC_4(VAR_32, VAR_33, VAR_30,
         VAR_2, &VAR_32->uvd.inst[VAR_38].vcpu_bo,
         &VAR_32->uvd.inst[VAR_38].gpu_addr, &VAR_32->uvd.inst[VAR_38].cpu_addr);
  if (VAR_39) {
   FUNC_8(VAR_32->dev, "(%d) failed to allocate UVD bo\n", VAR_39);
   return VAR_39;
  }
 }

 for (VAR_37 = 0; VAR_37 < VAR_32->uvd.max_handles; ++VAR_37) {
  FUNC_7(&VAR_32->uvd.handles[VAR_37], 0);
  VAR_32->uvd.filp[VAR_37] = ((void*)0);
 }


 if (!FUNC_5(VAR_32, VAR_7, 5, 0))
  VAR_32->uvd.address_64_bit = 1;

 switch (VAR_32->asic_type) {
 case 132:
  VAR_32->uvd.use_ctx_buf = VAR_32->uvd.fw_version >= VAR_26;
  break;
 case 142:
  VAR_32->uvd.use_ctx_buf = VAR_32->uvd.fw_version >= VAR_28;
  break;
 case 141:
  VAR_32->uvd.use_ctx_buf = VAR_32->uvd.fw_version >= VAR_29;
  break;
 case 133:
  VAR_32->uvd.use_ctx_buf = VAR_32->uvd.fw_version >= VAR_25;
  break;
 default:
  VAR_32->uvd.use_ctx_buf = VAR_32->asic_type >= 136;
 }

 return 0;
}
