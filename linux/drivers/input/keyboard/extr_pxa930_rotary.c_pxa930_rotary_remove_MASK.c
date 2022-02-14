
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa930_rotary {int mmio_base; int input_dev; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ,struct pxa930_rotary*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pxa930_rotary*) ;
 struct pxa930_rotary* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct pxa930_rotary *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(FUNC_5(VAR_0, 0), VAR_1);
 FUNC_1(VAR_1->input_dev);
 FUNC_2(VAR_1->mmio_base);
 FUNC_3(VAR_1);

 return 0;
}
