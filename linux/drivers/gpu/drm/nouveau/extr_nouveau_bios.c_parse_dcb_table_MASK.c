
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dcb_table {int version; } ;
struct nvbios {scalar_t__ type; struct dcb_table dcb; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct nouveau_drm*,char*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nvbios*) ;
 int FUNC_4 (struct drm_device*,struct nvbios*) ;
 int FUNC_5 (struct drm_device*,struct dcb_table*) ;
 struct nouveau_drm* FUNC_6 (struct drm_device*) ;
 int* FUNC_7 (struct drm_device*,int) ;
 int* FUNC_8 (struct drm_device*) ;
 int FUNC_9 (struct drm_device*,int *,int ) ;
 int* FUNC_10 (struct drm_device*) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_11(struct drm_device *VAR_3, struct nvbios *VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_6(VAR_3);
 struct dcb_table *VAR_6 = &VAR_4->dcb;
 u8 *VAR_7, *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_10(VAR_3);
 if (!VAR_7) {

  if (VAR_4->type == VAR_1) {
   FUNC_4(VAR_3, VAR_4);
   return 0;
  }

  return -VAR_0;
 }

 FUNC_0(VAR_5, "DCB version %d.%d\n", VAR_7[0] >> 4, VAR_7[0] & 0xf);

 VAR_6->version = VAR_7[0];
 FUNC_9(VAR_3, ((void*)0), VAR_2);





 if (VAR_6->version < 0x21)
  FUNC_5(VAR_3, VAR_6);


 VAR_9 = -1;
 while ((VAR_8 = FUNC_7(VAR_3, ++VAR_9))) {
  if (VAR_8[0] != 0xff) {
   if (FUNC_8(VAR_3)[3] < 4)
    FUNC_0(VAR_5, "DCB conn %02d: %04x\n",
     VAR_9, FUNC_1(VAR_8[0]));
   else
    FUNC_0(VAR_5, "DCB conn %02d: %08x\n",
     VAR_9, FUNC_2(VAR_8[0]));
  }
 }
 FUNC_3(VAR_4);
 return 0;
}
