
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int idle_fault; scalar_t__ chipset; int * mmio; } ;
typedef TYPE_1__ drm_sis_private_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int * FUNC_2 (struct drm_device*) ;
 scalar_t__ FUNC_3 (int,unsigned long) ;

int FUNC_4(struct drm_device *VAR_3)
{
 drm_sis_private_t *VAR_4 = VAR_3->dev_private;
 uint32_t VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 if (VAR_4->idle_fault)
  return 0;

 if (VAR_4->mmio == ((void*)0)) {
  VAR_4->mmio = FUNC_2(VAR_3);
  if (VAR_4->mmio == ((void*)0)) {
   FUNC_0("Could not find register map.\n");
   return 0;
  }
 }





 if (VAR_4->chipset != VAR_1)
  return 0;






 VAR_6 = VAR_2 + (VAR_0 * 3);

 for (VAR_7 = 0; VAR_7 < 4; ++VAR_7) {
  do {
   VAR_5 = FUNC_1(0x85cc);
  } while (!FUNC_3(VAR_2, VAR_6) &&
     ((VAR_5 & 0x80000000) != 0x80000000));
 }

 if (FUNC_3(VAR_2, VAR_6)) {
  FUNC_0("Graphics engine idle timeout. "
     "Disabling idle check\n");
  VAR_4->idle_fault = 1;
 }






 return 0;
}
