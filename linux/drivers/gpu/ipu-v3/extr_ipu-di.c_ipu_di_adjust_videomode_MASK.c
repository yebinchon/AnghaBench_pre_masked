
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct videomode {int vfront_porch; int vback_porch; int vsync_len; } ;
struct ipu_di {TYPE_1__* ipu; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(struct ipu_di *VAR_1, struct videomode *VAR_2)
{
 u32 VAR_3;

 if (VAR_2->vfront_porch >= 2)
  return 0;

 VAR_3 = 2 - VAR_2->vfront_porch;

 if (VAR_2->vback_porch >= VAR_3) {
  VAR_2->vfront_porch = 2;
  VAR_2->vback_porch -= VAR_3;
 } else if (VAR_2->vsync_len > VAR_3) {
  VAR_2->vfront_porch = 2;
  VAR_2->vsync_len = VAR_2->vsync_len - VAR_3;
 } else {
  FUNC_1(VAR_1->ipu->dev, "failed to adjust videomode\n");
  return -VAR_0;
 }

 FUNC_0(VAR_1->ipu->dev, "videomode adapted for IPU restrictions\n");
 return 0;
}
