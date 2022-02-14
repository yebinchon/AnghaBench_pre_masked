
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int fw_version; int ** filp; int * handles; int vcpu_bo; int gpu_addr; int fb_version; int idle_work; } ;
struct radeon_device {int family; TYPE_1__ vce; int dev; TYPE_2__* vce_fw; } ;
struct TYPE_4__ {int size; char* data; } ;
 int FUNC_0 (char*,int,int,int,int ) ;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (struct radeon_device*,unsigned long,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (TYPE_2__**,char const*,int ) ;
 int FUNC_10 (char const*,char*,int*,...) ;
 int FUNC_11 (char const*) ;
 scalar_t__ FUNC_12 (char const*,char const*,int) ;
 unsigned long FUNC_13 (struct radeon_device*) ;
 unsigned long FUNC_14 (struct radeon_device*) ;

int FUNC_15(struct radeon_device *VAR_7)
{
 static const char *VAR_8 = "[ATI LIB=VCEFW,";
 static const char *VAR_9 = "[ATI LIB=VCEFWSTATS,";
 unsigned long VAR_10;
 const char *VAR_11, *VAR_12;
 uint8_t VAR_13, VAR_14, VAR_15;
 int VAR_16, VAR_17;

 FUNC_1(&VAR_7->vce.idle_work, VAR_6);

 switch (VAR_7->family) {
 case 129:
 case 130:
 case 128:
 case 131:
 case 137:
  VAR_11 = VAR_2;
  break;

 case 136:
 case 133:
 case 134:
 case 135:
 case 132:
  VAR_11 = VAR_1;
  break;

 default:
  return -VAR_0;
 }

 VAR_17 = FUNC_9(&VAR_7->vce_fw, VAR_11, VAR_7->dev);
 if (VAR_17) {
  FUNC_3(VAR_7->dev, "radeon_vce: Can't load firmware \"%s\"\n",
   VAR_11);
  return VAR_17;
 }



 VAR_10 = VAR_7->vce_fw->size - FUNC_11(VAR_8) - 9;
 VAR_12 = VAR_7->vce_fw->data;
 for (;VAR_10 > 0; --VAR_10, ++VAR_12)
  if (FUNC_12(VAR_12, VAR_8, FUNC_11(VAR_8)) == 0)
   break;

 if (VAR_10 == 0)
  return -VAR_0;

 VAR_12 += FUNC_11(VAR_8);
 if (FUNC_10(VAR_12, "%2hhd.%2hhd.%2hhd]", &VAR_13, &VAR_14, &VAR_15) != 3)
  return -VAR_0;



 VAR_10 = VAR_7->vce_fw->size - FUNC_11(VAR_9) - 3;
 VAR_12 = VAR_7->vce_fw->data;
 for (;VAR_10 > 0; --VAR_10, ++VAR_12)
  if (FUNC_12(VAR_12, VAR_9, FUNC_11(VAR_9)) == 0)
   break;

 if (VAR_10 == 0)
  return -VAR_0;

 VAR_12 += FUNC_11(VAR_9);
 if (FUNC_10(VAR_12, "%2u]", &VAR_7->vce.fb_version) != 1)
  return -VAR_0;

 FUNC_0("Found VCE firmware/feedback version %hhd.%hhd.%hhd / %d!\n",
   VAR_13, VAR_14, VAR_15, VAR_7->vce.fb_version);

 VAR_7->vce.fw_version = (VAR_13 << 24) | (VAR_14 << 16) | (VAR_15 << 8);


 if ((VAR_7->vce.fw_version != ((40 << 24) | (2 << 16) | (2 << 8))) &&
     (VAR_7->vce.fw_version != ((50 << 24) | (0 << 16) | (1 << 8))) &&
     (VAR_7->vce.fw_version != ((50 << 24) | (1 << 16) | (2 << 8))))
  return -VAR_0;



 if (VAR_7->family < 136)
  VAR_10 = FUNC_13(VAR_7);
 else
  VAR_10 = FUNC_14(VAR_7);
 VAR_17 = FUNC_4(VAR_7, VAR_10, VAR_3, 1,
        VAR_4, 0, ((void*)0), ((void*)0),
        &VAR_7->vce.vcpu_bo);
 if (VAR_17) {
  FUNC_3(VAR_7->dev, "(%d) failed to allocate VCE bo\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_6(VAR_7->vce.vcpu_bo, 0);
 if (VAR_17) {
  FUNC_7(&VAR_7->vce.vcpu_bo);
  FUNC_3(VAR_7->dev, "(%d) failed to reserve VCE bo\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_5(VAR_7->vce.vcpu_bo, VAR_4,
     &VAR_7->vce.gpu_addr);
 FUNC_8(VAR_7->vce.vcpu_bo);
 if (VAR_17) {
  FUNC_7(&VAR_7->vce.vcpu_bo);
  FUNC_3(VAR_7->dev, "(%d) VCE bo pin failed\n", VAR_17);
  return VAR_17;
 }

 for (VAR_16 = 0; VAR_16 < VAR_5; ++VAR_16) {
  FUNC_2(&VAR_7->vce.handles[VAR_16], 0);
  VAR_7->vce.filp[VAR_16] = ((void*)0);
 }

 return 0;
}
