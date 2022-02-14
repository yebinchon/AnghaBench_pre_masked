
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fw_header_present; unsigned long max_handles; scalar_t__* img_size; int ** filp; int * handles; int vcpu_bo; int cpu_addr; int gpu_addr; int idle_work; } ;
struct radeon_device {int family; TYPE_1__ uvd; int dev; TYPE_2__* uvd_fw; } ;
struct common_firmware_header {int ucode_version; } ;
struct TYPE_5__ {scalar_t__ size; scalar_t__ data; } ;
 int FUNC_0 (char*,unsigned int,unsigned int,unsigned int) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 int FUNC_1 (int *,int ) ;
 int VAR_10 ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 unsigned long FUNC_2 (scalar_t__) ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct radeon_device*,unsigned long,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,int *) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_17 ;
 int FUNC_13 (TYPE_2__**,char const*,int ) ;

int FUNC_14(struct radeon_device *VAR_18)
{
 unsigned long VAR_19;
 const char *VAR_20 = ((void*)0), *VAR_21 = ((void*)0);
 int VAR_22, VAR_23;

 FUNC_1(&VAR_18->uvd.idle_work, VAR_17);

 switch (VAR_18->family) {
 case 141:
 case 139:
 case 137:
 case 140:
 case 138:
  VAR_21 = VAR_4;
  break;

 case 143:
 case 142:
  VAR_21 = VAR_5;
  break;

 case 133:
  VAR_21 = VAR_7;
  break;

 case 136:
 case 135:
 case 134:
  VAR_21 = VAR_6;
  break;

 case 154:
 case 152:
 case 151:
 case 144:
 case 155:
  VAR_21 = VAR_3;
  break;

 case 132:
 case 131:
 case 146:
 case 156:
 case 159:
 case 129:
 case 157:
  VAR_21 = VAR_8;
  break;

 case 130:
 case 128:
 case 145:
 case 160:
 case 147:
  VAR_21 = VAR_9;
  break;

 case 158:
 case 150:
 case 149:
 case 153:
 case 148:
  VAR_21 = VAR_2;
  VAR_20 = VAR_1;
  break;

 default:
  return -VAR_0;
 }

 VAR_18->uvd.fw_header_present = 0;
 VAR_18->uvd.max_handles = VAR_11;
 if (VAR_20) {

  VAR_23 = FUNC_13(&VAR_18->uvd_fw, VAR_20, VAR_18->dev);
  if (VAR_23) {
   FUNC_4(VAR_18->dev, "radeon_uvd: Can't load firmware \"%s\"\n",
    VAR_20);
  } else {
   struct common_firmware_header *VAR_24 = (void *)VAR_18->uvd_fw->data;
   unsigned VAR_25, VAR_26, VAR_27;

   VAR_23 = FUNC_12(VAR_18->uvd_fw);
   if (VAR_23)
    return VAR_23;

   VAR_18->uvd.fw_header_present = 1;

   VAR_27 = FUNC_5(VAR_24->ucode_version) & 0xff;
   VAR_25 = (FUNC_5(VAR_24->ucode_version) >> 24) & 0xff;
   VAR_26 = (FUNC_5(VAR_24->ucode_version) >> 8) & 0xff;
   FUNC_0("Found UVD firmware Version: %hu.%hu Family ID: %hu\n",
     VAR_25, VAR_26, VAR_27);





   if ((VAR_25 >= 0x01) && (VAR_26 >= 0x37))
    VAR_18->uvd.max_handles = VAR_13;
  }
 }






 if (!VAR_20 || VAR_23) {
  VAR_23 = FUNC_13(&VAR_18->uvd_fw, VAR_21, VAR_18->dev);
  if (VAR_23) {
   FUNC_4(VAR_18->dev, "radeon_uvd: Can't load firmware \"%s\"\n",
    VAR_21);
   return VAR_23;
  }
 }

 VAR_19 = FUNC_2(VAR_18->uvd_fw->size + 8) +
    VAR_16 + VAR_14 +
    VAR_15 * VAR_18->uvd.max_handles;
 VAR_23 = FUNC_6(VAR_18, VAR_19, VAR_10, 1,
        VAR_12, 0, ((void*)0),
        ((void*)0), &VAR_18->uvd.vcpu_bo);
 if (VAR_23) {
  FUNC_4(VAR_18->dev, "(%d) failed to allocate UVD bo\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_9(VAR_18->uvd.vcpu_bo, 0);
 if (VAR_23) {
  FUNC_10(&VAR_18->uvd.vcpu_bo);
  FUNC_4(VAR_18->dev, "(%d) failed to reserve UVD bo\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_8(VAR_18->uvd.vcpu_bo, VAR_12,
     &VAR_18->uvd.gpu_addr);
 if (VAR_23) {
  FUNC_11(VAR_18->uvd.vcpu_bo);
  FUNC_10(&VAR_18->uvd.vcpu_bo);
  FUNC_4(VAR_18->dev, "(%d) UVD bo pin failed\n", VAR_23);
  return VAR_23;
 }

 VAR_23 = FUNC_7(VAR_18->uvd.vcpu_bo, &VAR_18->uvd.cpu_addr);
 if (VAR_23) {
  FUNC_4(VAR_18->dev, "(%d) UVD map failed\n", VAR_23);
  return VAR_23;
 }

 FUNC_11(VAR_18->uvd.vcpu_bo);

 for (VAR_22 = 0; VAR_22 < VAR_18->uvd.max_handles; ++VAR_22) {
  FUNC_3(&VAR_18->uvd.handles[VAR_22], 0);
  VAR_18->uvd.filp[VAR_22] = ((void*)0);
  VAR_18->uvd.img_size[VAR_22] = 0;
 }

 return 0;
}
