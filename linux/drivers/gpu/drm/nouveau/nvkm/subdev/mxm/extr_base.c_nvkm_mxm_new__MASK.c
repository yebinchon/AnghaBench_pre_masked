
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct nvkm_mxm {int action; int subdev; } ;
struct nvkm_device {int cfgopt; struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nvkm_mxm* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (struct nvkm_mxm*,int) ;
 scalar_t__ FUNC_2 (struct nvkm_bios*,int*,int*) ;
 int FUNC_3 (struct nvkm_mxm*,int ,int *,int *) ;
 int FUNC_4 (struct nvkm_mxm*) ;
 int FUNC_5 (struct nvkm_bios*,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,char*,int,int) ;
 int VAR_4 ;
 int FUNC_9 (int *,struct nvkm_device*,int,int *) ;
 int FUNC_10 (int *,char*) ;

int
FUNC_11(struct nvkm_device *VAR_5, int VAR_6, struct nvkm_mxm **VAR_7)
{
 struct nvkm_bios *VAR_8 = VAR_5->bios;
 struct nvkm_mxm *VAR_9;
 u8 VAR_10, VAR_11;
 u16 VAR_12;

 if (!(VAR_9 = *VAR_7 = FUNC_0(sizeof(*VAR_9), VAR_2)))
  return -VAR_1;

 FUNC_9(&VAR_4, VAR_5, VAR_6, &VAR_9->subdev);

 VAR_12 = FUNC_2(VAR_8, &VAR_10, &VAR_11);
 if (!VAR_12 || !(VAR_10 = FUNC_5(VAR_8, VAR_12))) {
  FUNC_7(&VAR_9->subdev, "no VBIOS data, nothing to do\n");
  return 0;
 }

 FUNC_8(&VAR_9->subdev, "BIOS version %d.%d\n", VAR_10 >> 4, VAR_10 & 0x0f);
 FUNC_7(&VAR_9->subdev, "module flags: %02x\n",
     FUNC_5(VAR_8, VAR_12 + 0x01));
 FUNC_7(&VAR_9->subdev, "config flags: %02x\n",
     FUNC_5(VAR_8, VAR_12 + 0x02));

 if (FUNC_1(VAR_9, VAR_10)) {
  FUNC_10(&VAR_9->subdev, "failed to locate valid SIS\n");
  return 0;

 }

 FUNC_7(&VAR_9->subdev, "MXMS Version %d.%d\n",
     FUNC_4(VAR_9) >> 8, FUNC_4(VAR_9) & 0xff);
 FUNC_3(VAR_9, 0, ((void*)0), ((void*)0));

 if (FUNC_6(VAR_5->cfgopt, "NvMXMDCB", 1))
  VAR_9->action |= VAR_3;
 return 0;
}
