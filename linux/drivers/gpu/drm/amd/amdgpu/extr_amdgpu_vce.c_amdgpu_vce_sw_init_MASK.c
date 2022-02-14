
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct common_firmware_header {int ucode_version; } ;
struct TYPE_5__ {unsigned int fw_version; int idle_mutex; int idle_work; int ** filp; int * handles; int cpu_addr; int gpu_addr; int vcpu_bo; TYPE_2__* fw; } ;
struct amdgpu_device {int asic_type; TYPE_1__ vce; int dev; } ;
struct TYPE_6__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
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
 int FUNC_1 (int *,int ) ;
 int VAR_19 ;
 int FUNC_2 (struct amdgpu_device*,unsigned long,int ,int ,int *,int *,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_20 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,char*,...) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__**,char const*,int ) ;

int FUNC_10(struct amdgpu_device *VAR_21, unsigned long VAR_22)
{
 const char *VAR_23;
 const struct common_firmware_header *VAR_24;
 unsigned VAR_25, VAR_26, VAR_27, VAR_28;
 int VAR_29, VAR_30;

 switch (VAR_21->asic_type) {
 case 132:
  VAR_23 = VAR_14;
  break;
 case 142:
  VAR_23 = VAR_4;
  break;
 case 141:
  VAR_23 = VAR_5;
  break;
 case 133:
  VAR_23 = VAR_13;
  break;
 case 136:
  VAR_23 = VAR_10;
  break;
 case 135:
  VAR_23 = VAR_11;
  break;
 case 134:
  VAR_23 = VAR_12;
  break;
 case 128:
  VAR_23 = VAR_18;
  break;
 case 131:
  VAR_23 = VAR_15;
  break;
 case 130:
  VAR_23 = VAR_16;
  break;
 case 129:
  VAR_23 = VAR_17;
  break;

 default:
  return -VAR_2;
 }

 VAR_30 = FUNC_9(&VAR_21->vce.fw, VAR_23, VAR_21->dev);
 if (VAR_30) {
  FUNC_5(VAR_21->dev, "amdgpu_vce: Can't load firmware \"%s\"\n",
   VAR_23);
  return VAR_30;
 }

 VAR_30 = FUNC_3(VAR_21->vce.fw);
 if (VAR_30) {
  FUNC_5(VAR_21->dev, "amdgpu_vce: Can't validate firmware \"%s\"\n",
   VAR_23);
  FUNC_8(VAR_21->vce.fw);
  VAR_21->vce.fw = ((void*)0);
  return VAR_30;
 }

 VAR_24 = (const struct common_firmware_header *)VAR_21->vce.fw->data;

 VAR_25 = FUNC_6(VAR_24->ucode_version);
 VAR_26 = (VAR_25 >> 20) & 0xfff;
 VAR_27 = (VAR_25 >> 8) & 0xfff;
 VAR_28 = VAR_25 & 0xff;
 FUNC_0("Found VCE firmware Version: %hhd.%hhd Binary ID: %hhd\n",
  VAR_26, VAR_27, VAR_28);
 VAR_21->vce.fw_version = ((VAR_26 << 24) | (VAR_27 << 16) |
    (VAR_28 << 8));

 VAR_30 = FUNC_2(VAR_21, VAR_22, VAR_19,
        VAR_0, &VAR_21->vce.vcpu_bo,
        &VAR_21->vce.gpu_addr, &VAR_21->vce.cpu_addr);
 if (VAR_30) {
  FUNC_5(VAR_21->dev, "(%d) failed to allocate VCE bo\n", VAR_30);
  return VAR_30;
 }

 for (VAR_29 = 0; VAR_29 < VAR_1; ++VAR_29) {
  FUNC_4(&VAR_21->vce.handles[VAR_29], 0);
  VAR_21->vce.filp[VAR_29] = ((void*)0);
 }

 FUNC_1(&VAR_21->vce.idle_work, VAR_20);
 FUNC_7(&VAR_21->vce.idle_mutex);

 return 0;
}
