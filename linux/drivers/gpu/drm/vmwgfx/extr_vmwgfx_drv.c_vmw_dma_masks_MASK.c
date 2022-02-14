
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmw_private {scalar_t__ map_mode; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3(struct vmw_private *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 int VAR_4 = 0;

 VAR_4 = FUNC_2(VAR_3->dev, FUNC_0(64));
 if (VAR_2->map_mode != VAR_0 &&
     (sizeof(unsigned long) == 4 || VAR_1)) {
  FUNC_1("Restricting DMA addresses to 44 bits.\n");
  return FUNC_2(VAR_3->dev, FUNC_0(44));
 }

 return VAR_4;
}
