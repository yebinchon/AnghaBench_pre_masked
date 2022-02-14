
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tve200_drm_dev_private {int connector; int pipe; } ;
struct drm_device {struct tve200_drm_dev_private* dev_private; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (struct drm_device*,int *,int *,int const*,int ,int *,int ) ;
 int VAR_0 ;

int FUNC_2(struct drm_device *VAR_1)
{
 struct tve200_drm_dev_private *VAR_2 = VAR_1->dev_private;
 int VAR_3;
 static const u32 VAR_4[] = {
  131,
  133,
  137,
  138,
  132,
  134,





  129,
  128,
  136,
  135,

  130,
 };

 VAR_3 = FUNC_1(VAR_1, &VAR_2->pipe,
        &VAR_0,
        VAR_4, FUNC_0(VAR_4),
        ((void*)0),
        VAR_2->connector);
 if (VAR_3)
  return VAR_3;

 return 0;
}
