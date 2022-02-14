
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {int* edid; } ;
struct nvbios {int* data; TYPE_1__ fp; } ;
struct nouveau_drm {struct nvbios vbios; } ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int VAR_1 ;
 size_t FUNC_1 (int*,int,int const*,int) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;
 int FUNC_3 (int*,int ) ;

uint8_t *FUNC_4(struct drm_device *VAR_2)
{
 struct nouveau_drm *VAR_3 = FUNC_2(VAR_2);
 struct nvbios *VAR_4 = &VAR_3->vbios;
 static const uint8_t VAR_5[] = {
   0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00 };
 uint16_t VAR_6 = 0;
 uint16_t VAR_7;
 int VAR_8 = VAR_1;

 if (VAR_4->fp.edid)
  return VAR_4->fp.edid;

 while (VAR_8) {
  VAR_7 = FUNC_1(&VAR_4->data[VAR_6], VAR_8,
        VAR_5, 8);
  if (!VAR_7)
   return ((void*)0);
  VAR_6 += VAR_7;
  if (!FUNC_3(&VAR_4->data[VAR_6], VAR_0))
   break;

  VAR_8 -= VAR_6;
  VAR_6++;
 }

 FUNC_0(VAR_3, "Found EDID in BIOS\n");

 return VAR_4->fp.edid = &VAR_4->data[VAR_6];
}
