
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {scalar_t__ dev_private; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int fence_queue; int last_fence_retired; int vbl_received; } ;
typedef TYPE_1__ drm_mga_private_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int VAR_5 ;
 int const VAR_6 ;
 int VAR_7 ;
 int const VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,int ) ;
 int FUNC_4 (int *) ;

irqreturn_t FUNC_5(int VAR_10, void *VAR_11)
{
 struct drm_device *VAR_12 = (struct drm_device *) VAR_11;
 drm_mga_private_t *VAR_13 = (drm_mga_private_t *) VAR_12->dev_private;
 int VAR_14;
 int VAR_15 = 0;

 VAR_14 = FUNC_0(VAR_7);


 if (VAR_14 & VAR_9) {
  FUNC_1(VAR_2, VAR_8);
  FUNC_2(&VAR_13->vbl_received);
  FUNC_3(VAR_12, 0);
  VAR_15 = 1;
 }


 if (VAR_14 & VAR_5) {
  const u32 VAR_16 = FUNC_0(VAR_3);
  const u32 VAR_17 = FUNC_0(VAR_4);


  FUNC_1(VAR_2, VAR_6);




  if ((VAR_16 & ~0x03) != (VAR_17 & ~0x03))
   FUNC_1(VAR_4, VAR_17);

  FUNC_2(&VAR_13->last_fence_retired);
  FUNC_4(&VAR_13->fence_queue);
  VAR_15 = 1;
 }

 if (VAR_15)
  return VAR_0;
 return VAR_1;
}
