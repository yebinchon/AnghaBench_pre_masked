
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* funcs; } ;
struct exynos_dp_device {TYPE_2__ encoder; int adp; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int (* destroy ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 struct exynos_dp_device* FUNC_1 (struct device*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0, struct device *VAR_1,
        void *VAR_2)
{
 struct exynos_dp_device *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3->adp);
 VAR_3->encoder.funcs->destroy(&VAR_3->encoder);
}
