
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_device*,int) ;

int FUNC_1(struct drm_device *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 int VAR_4 = 0;





 for (VAR_2 = 0; !VAR_3 || VAR_2 < 4; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 == -VAR_0)
   continue;
  if (VAR_3)
   break;
  VAR_4++;
 }


 if (VAR_3 == -VAR_0 && VAR_4)
  return 0;

 return VAR_3;
}
