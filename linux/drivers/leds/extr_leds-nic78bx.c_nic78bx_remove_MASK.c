
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct nic78bx_led_data {scalar_t__ io_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 struct nic78bx_led_data* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct nic78bx_led_data *VAR_3 = FUNC_1(VAR_2);


 FUNC_0(VAR_1,
      VAR_3->io_base + VAR_0);

 return 0;
}
