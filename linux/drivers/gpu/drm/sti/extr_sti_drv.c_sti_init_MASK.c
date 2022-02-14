
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sti_private {struct drm_device* drm_dev; } ;
struct drm_device {int dev; void* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 struct sti_private* FUNC_3 (int,int ) ;
 int FUNC_4 (struct drm_device*) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2)
{
 struct sti_private *VAR_3;

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_2->dev_private = (void *)VAR_3;
 FUNC_0(VAR_2->dev, VAR_2);
 VAR_3->drm_dev = VAR_2;

 FUNC_2(VAR_2);

 FUNC_4(VAR_2);

 FUNC_1(VAR_2);

 return 0;
}
