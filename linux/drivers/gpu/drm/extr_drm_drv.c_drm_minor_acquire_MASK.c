
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_minor {int dev; } ;


 int VAR_0 ;
 struct drm_minor* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct drm_minor* FUNC_4 (int *,unsigned int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

struct drm_minor *FUNC_7(unsigned int VAR_3)
{
 struct drm_minor *VAR_4;
 unsigned long VAR_5;

 FUNC_5(&VAR_1, VAR_5);
 VAR_4 = FUNC_4(&VAR_2, VAR_3);
 if (VAR_4)
  FUNC_1(VAR_4->dev);
 FUNC_6(&VAR_1, VAR_5);

 if (!VAR_4) {
  return FUNC_0(-VAR_0);
 } else if (FUNC_2(VAR_4->dev)) {
  FUNC_3(VAR_4->dev);
  return FUNC_0(-VAR_0);
 }

 return VAR_4;
}
