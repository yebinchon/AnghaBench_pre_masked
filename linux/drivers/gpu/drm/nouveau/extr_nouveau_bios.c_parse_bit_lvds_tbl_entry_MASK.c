
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lvdsmanufacturerpointer; } ;
struct nvbios {int * data; TYPE_1__ fp; } ;
struct nouveau_drm {int dummy; } ;
struct drm_device {int dummy; } ;
struct bit_entry {int length; size_t offset; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_drm*,char*) ;
 int FUNC_1 (int ) ;
 struct nouveau_drm* FUNC_2 (struct drm_device*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_1, struct nvbios *VAR_2, struct bit_entry *VAR_3)
{







 struct nouveau_drm *VAR_4 = FUNC_2(VAR_1);

 if (VAR_3->length != 2) {
  FUNC_0(VAR_4, "Do not understand BIT LVDS table\n");
  return -VAR_0;
 }





 VAR_2->fp.lvdsmanufacturerpointer = FUNC_1(VAR_2->data[VAR_3->offset]);

 return 0;
}
