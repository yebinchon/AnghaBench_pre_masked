
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {int hw_events; struct platform_device* plat_device; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct platform_device*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_1;
 struct platform_device *VAR_2 = VAR_0.plat_device;

 VAR_1 = FUNC_1(VAR_2, 0);
 if (VAR_1 >= 0)
  FUNC_0(VAR_1, FUNC_2(VAR_0.hw_events));
}
