
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fimd_context {scalar_t__ encoder; int dev; int drm_dev; int crtc; } ;
struct device {int dummy; } ;


 struct fimd_context* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1,
   void *VAR_2)
{
 struct fimd_context *VAR_3 = FUNC_0(VAR_0);

 FUNC_3(VAR_3->crtc);

 FUNC_2(VAR_3->drm_dev, VAR_3->dev);

 if (VAR_3->encoder)
  FUNC_1(VAR_3->encoder);
}
