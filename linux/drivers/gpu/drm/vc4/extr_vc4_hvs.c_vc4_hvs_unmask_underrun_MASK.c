
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vc4_dev {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 struct vc4_dev* FUNC_4 (struct drm_device*) ;

void FUNC_5(struct drm_device *VAR_2, int VAR_3)
{
 struct vc4_dev *VAR_4 = FUNC_4(VAR_2);
 u32 VAR_5 = FUNC_0(VAR_0);

 VAR_5 |= FUNC_2(VAR_3);

 FUNC_1(VAR_1,
    FUNC_3(VAR_3));
 FUNC_1(VAR_0, VAR_5);
}
