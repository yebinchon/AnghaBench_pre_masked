
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psb_offset {int conf; } ;
struct drm_psb_private {struct psb_offset* regmap; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_device*) ;

void FUNC_3(struct drm_device *VAR_2, int VAR_3)
{
 struct drm_psb_private *VAR_4 = VAR_2->dev_private;
 const struct psb_offset *VAR_5 = &VAR_4->regmap[VAR_3];
 int VAR_6, VAR_7;

 switch (VAR_3) {
 case 0:
 case 1:
 case 2:
  break;
 default:
  FUNC_0("Illegal Pipe Number.\n");
  return;
 }


 FUNC_2(VAR_2);
 return;


 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = FUNC_1(VAR_5->conf);
  if ((VAR_7 & VAR_1) == 0)
   break;
 }
}
