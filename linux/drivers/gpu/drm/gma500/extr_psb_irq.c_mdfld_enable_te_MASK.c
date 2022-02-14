
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct drm_psb_private {int irqmask_lock; } ;
struct drm_device {scalar_t__ dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_psb_private*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct drm_psb_private*,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

int FUNC_8(struct drm_device *VAR_3, int VAR_4)
{
 struct drm_psb_private *VAR_5 =
  (struct drm_psb_private *) VAR_3->dev_private;
 unsigned long VAR_6;
 uint32_t VAR_7 = 0;
 uint32_t VAR_8 = FUNC_4(VAR_4);

 if (FUNC_1(VAR_3, 0)) {
  VAR_7 = FUNC_0(VAR_8);
  FUNC_2(VAR_3);
 }

 if (!(VAR_7 & VAR_1))
  return -VAR_0;

 FUNC_6(&VAR_5->irqmask_lock, VAR_6);

 FUNC_3(VAR_5, VAR_4);
 FUNC_5(VAR_5, VAR_4, VAR_2);

 FUNC_7(&VAR_5->irqmask_lock, VAR_6);

 return 0;
}
