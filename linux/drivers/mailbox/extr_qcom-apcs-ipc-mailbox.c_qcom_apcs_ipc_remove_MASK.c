
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_apcs_ipc {struct platform_device* clk; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct platform_device*) ;
 struct qcom_apcs_ipc* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct qcom_apcs_ipc *VAR_1 = FUNC_1(VAR_0);
 struct platform_device *VAR_2 = VAR_1->clk;

 FUNC_0(VAR_2);

 return 0;
}
