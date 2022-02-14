
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s10_priv {int chan; } ;
struct platform_device {int dummy; } ;
struct fpga_manager {struct s10_priv* priv; } ;


 int FUNC_0 (struct fpga_manager*) ;
 struct fpga_manager* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct fpga_manager *VAR_1 = FUNC_1(VAR_0);
 struct s10_priv *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_1);
 FUNC_2(VAR_2->chan);

 return 0;
}
