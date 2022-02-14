
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; } ;
struct vc4_dev {TYPE_1__ hangcheck; } ;
struct drm_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 struct vc4_dev* FUNC_3 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_4(struct drm_device *VAR_1)
{
 struct vc4_dev *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_2->hangcheck.timer,
    FUNC_2(VAR_0 + FUNC_1(100)));
}
