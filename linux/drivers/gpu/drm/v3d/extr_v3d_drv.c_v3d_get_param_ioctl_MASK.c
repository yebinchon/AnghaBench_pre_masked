
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct v3d_dev {int dev; } ;
struct drm_v3d_get_param {scalar_t__ pad; size_t param; int value; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 size_t FUNC_0 (size_t const*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,size_t) ;







 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct v3d_dev* FUNC_7 (struct drm_device*) ;
 int FUNC_8 (struct v3d_dev*) ;

__attribute__((used)) static int FUNC_9(struct drm_device *VAR_1, void *VAR_2,
          struct drm_file *VAR_3)
{
 struct v3d_dev *VAR_4 = FUNC_7(VAR_1);
 struct drm_v3d_get_param *VAR_5 = VAR_2;
 int VAR_6;
 static const u32 VAR_7[] = {
  [135] = 128,
  [138] = 131,
  [137] = 130,
  [136] = 129,
  [141] = 134,
  [140] = 133,
  [139] = 132,
 };

 if (VAR_5->pad != 0)
  return -VAR_0;





 if (VAR_5->param < FUNC_0(VAR_7) &&
     (VAR_7[VAR_5->param] ||
      VAR_5->param == 141)) {
  u32 VAR_8 = VAR_7[VAR_5->param];

  if (VAR_5->value != 0)
   return -VAR_0;

  VAR_6 = FUNC_4(VAR_4->dev);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_5->param >= 141 &&
      VAR_5->param <= 139) {
   VAR_5->value = FUNC_2(0, VAR_8);
  } else {
   VAR_5->value = FUNC_3(VAR_8);
  }
  FUNC_5(VAR_4->dev);
  FUNC_6(VAR_4->dev);
  return 0;
 }


 switch (VAR_5->param) {
 case 142:
  VAR_5->value = 1;
  return 0;
 case 143:
  VAR_5->value = FUNC_8(VAR_4);
  return 0;
 default:
  FUNC_1("Unknown parameter %d\n", VAR_5->param);
  return -VAR_0;
 }
}
