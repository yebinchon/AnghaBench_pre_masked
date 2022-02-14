
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_device {int dummy; } ;


 unsigned char FUNC_0 (struct drm_device*,int,int ) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*,int,int) ;
 int FUNC_3 (struct drm_device*,int,int ,unsigned char) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct drm_device*) ;

void
FUNC_5(struct drm_device *VAR_1, int VAR_2, bool VAR_3)
{
 unsigned char VAR_4;

 if (FUNC_4(VAR_1))
  FUNC_1(VAR_1, VAR_2);

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_0);

 FUNC_2(VAR_1, VAR_2, 1);
 if (VAR_3)
  FUNC_3(VAR_1, VAR_2, VAR_0, VAR_4 | 0x20);
 else
  FUNC_3(VAR_1, VAR_2, VAR_0, VAR_4 & ~0x20);
 FUNC_2(VAR_1, VAR_2, 0);
}
