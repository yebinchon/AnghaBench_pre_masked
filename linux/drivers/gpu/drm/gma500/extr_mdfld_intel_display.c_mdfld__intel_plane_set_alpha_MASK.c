
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct drm_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 struct drm_device VAR_3 ;

void FUNC_2(int VAR_4)
{
 struct drm_device *VAR_5 = &VAR_3;
 int VAR_6 = VAR_2;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_6);

 if (VAR_4) {
  VAR_7 &= ~VAR_1;
  VAR_7 |= VAR_0;
 } else {
  VAR_7 &= ~VAR_0;
  VAR_7 |= VAR_1;
 }

 FUNC_1(VAR_6, VAR_7);
}
