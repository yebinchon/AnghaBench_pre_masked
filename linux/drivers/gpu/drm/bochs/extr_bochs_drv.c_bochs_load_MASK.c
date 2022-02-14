
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {struct bochs_device* dev_private; } ;
struct bochs_device {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct bochs_device*) ;
 int FUNC_2 (struct bochs_device*) ;
 int FUNC_3 (struct drm_device*) ;
 struct bochs_device* FUNC_4 (int,int ) ;

__attribute__((used)) static int FUNC_5(struct drm_device *VAR_2)
{
 struct bochs_device *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 VAR_2->dev_private = VAR_3;
 VAR_3->dev = VAR_2;

 VAR_4 = FUNC_0(VAR_2);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto err;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto err;

 return 0;

err:
 FUNC_3(VAR_2);
 return VAR_4;
}
