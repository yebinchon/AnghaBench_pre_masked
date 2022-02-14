
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_device {int dummy; } ;
struct drm_device {struct radeon_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_3)
{
 struct radeon_device *VAR_4 = VAR_3->dev_private;

 while (FUNC_0(VAR_2) & VAR_0);

 FUNC_1(VAR_2,
      VAR_1,
      ~(VAR_1));
}
