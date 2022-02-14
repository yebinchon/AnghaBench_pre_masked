
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dev; } ;
struct v3d_dev {struct drm_device drm; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct v3d_dev*,int ) ;
 int FUNC_5 (struct v3d_dev*) ;
 int FUNC_6 (struct v3d_dev*) ;
 int FUNC_7 (struct v3d_dev*) ;
 int FUNC_8 (struct v3d_dev*) ;

void
FUNC_9(struct v3d_dev *VAR_1)
{
 struct drm_device *VAR_2 = &VAR_1->drm;

 FUNC_0(VAR_2->dev, "Resetting GPU for hang.\n");
 FUNC_0(VAR_2->dev, "V3D_ERR_STAT: 0x%08x\n",
        FUNC_1(0, VAR_0));
 FUNC_2(VAR_2);


 if (0)
  FUNC_4(VAR_1, 0);

 FUNC_5(VAR_1);
 FUNC_8(VAR_1);

 FUNC_7(VAR_1);
 FUNC_6(VAR_1);

 FUNC_3(VAR_2);
}
