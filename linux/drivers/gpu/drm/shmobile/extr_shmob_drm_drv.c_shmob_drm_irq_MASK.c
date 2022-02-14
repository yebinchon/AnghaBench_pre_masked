
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct shmob_drm_device {int crtc; int irq_lock; } ;
struct drm_device {struct shmob_drm_device* dev_private; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_device*,int ) ;
 int FUNC_1 (struct shmob_drm_device*,int ) ;
 int FUNC_2 (struct shmob_drm_device*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_4, void *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5;
 struct shmob_drm_device *VAR_7 = VAR_6->dev_private;
 unsigned long VAR_8;
 u32 VAR_9;





 FUNC_4(&VAR_7->irq_lock, VAR_8);
 VAR_9 = FUNC_1(VAR_7, VAR_1);
 FUNC_2(VAR_7, VAR_1, VAR_9 ^ VAR_2);
 FUNC_5(&VAR_7->irq_lock, VAR_8);

 if (VAR_9 & VAR_3) {
  FUNC_0(VAR_6, 0);
  FUNC_3(&VAR_7->crtc);
 }

 return VAR_0;
}
