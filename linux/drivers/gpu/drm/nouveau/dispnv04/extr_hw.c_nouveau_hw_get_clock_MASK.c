
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct nvkm_pll_vals {int dummy; } ;
struct drm_device {TYPE_1__* pdev; } ;
typedef enum nvbios_pll_type { ____Placeholder_nvbios_pll_type } nvbios_pll_type ;
struct TYPE_2__ {int device; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_device*,int,struct nvkm_pll_vals*) ;
 int FUNC_1 (struct nvkm_pll_vals*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (int ,int,int*) ;

int
FUNC_5(struct drm_device *VAR_3, enum nvbios_pll_type VAR_4)
{
 struct nvkm_pll_vals VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_3->pdev->bus);

 if (VAR_4 == VAR_2 &&
     (VAR_3->pdev->device & 0x0ff0) == VAR_0) {
  uint32_t VAR_8;
  FUNC_4(FUNC_3(VAR_7, 0, 3),
          0x6c, &VAR_8);
  VAR_8 = (VAR_8 >> 8) & 0xf;
  if (!VAR_8)
   VAR_8 = 4;

  return 400000 / VAR_8;
 } else
 if (VAR_4 == VAR_2 &&
     (VAR_3->pdev->device & 0xff0) == VAR_1) {
  uint32_t VAR_9;

  FUNC_4(FUNC_3(VAR_7, 0, 5),
          0x4c, &VAR_9);
  return VAR_9 / 1000;
 }

 VAR_6 = FUNC_0(VAR_3, VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(&VAR_5);
}
