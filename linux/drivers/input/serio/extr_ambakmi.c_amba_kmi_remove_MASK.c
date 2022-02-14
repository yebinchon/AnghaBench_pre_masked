
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct amba_kmi_port {int base; int clk; int io; } ;
struct amba_device {int dummy; } ;


 struct amba_kmi_port* FUNC_0 (struct amba_device*) ;
 int FUNC_1 (struct amba_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amba_kmi_port*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct amba_device *VAR_0)
{
 struct amba_kmi_port *VAR_1 = FUNC_0(VAR_0);

 FUNC_5(VAR_1->io);
 FUNC_2(VAR_1->clk);
 FUNC_3(VAR_1->base);
 FUNC_4(VAR_1);
 FUNC_1(VAR_0);
 return 0;
}
