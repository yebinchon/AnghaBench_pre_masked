
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct hibmc_drm_private {scalar_t__ mmio; } ;
struct drm_display_mode {unsigned long hdisplay; unsigned long vdisplay; } ;
struct drm_device {struct hibmc_drm_private* dev_private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_9 ;
 unsigned int FUNC_1 (int ) ;
 unsigned int VAR_10 ;
 unsigned int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long,unsigned int*,unsigned int*) ;
 int FUNC_4 (struct drm_device*,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_6(struct drm_device *VAR_11,
     struct drm_display_mode *VAR_12,
     unsigned int VAR_13)
{
 unsigned long VAR_14, VAR_15;
 u32 VAR_16;
 u32 VAR_17;
 struct hibmc_drm_private *VAR_18 = VAR_11->dev_private;

 VAR_14 = VAR_12->hdisplay;
 VAR_15 = VAR_12->vdisplay;

 FUNC_3(VAR_14, VAR_15, &VAR_16, &VAR_17);
 FUNC_5(VAR_17, VAR_18->mmio + VAR_0);
 FUNC_4(VAR_11, VAR_16);







 FUNC_5(FUNC_2(VAR_7, 0) |
        FUNC_2(VAR_6, 0),
        VAR_18->mmio + VAR_5);

 FUNC_5(FUNC_2(VAR_3, VAR_15 - 1) |
        FUNC_2(VAR_4, VAR_14 - 1),
        VAR_18->mmio + VAR_2);
 VAR_13 &= ~VAR_10;
 VAR_13 &= ~VAR_9;

 VAR_13 |= FUNC_1(VAR_1);


 VAR_13 |= FUNC_0(0);

 FUNC_5(VAR_13, VAR_18->mmio + VAR_8);

 return VAR_13;
}
