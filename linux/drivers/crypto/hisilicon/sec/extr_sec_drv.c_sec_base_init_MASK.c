
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_dev_info {int dummy; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (struct sec_dev_info*) ;
 int FUNC_1 (struct sec_dev_info*) ;
 int FUNC_2 (struct sec_dev_info*) ;
 int FUNC_3 (struct sec_dev_info*,struct platform_device*) ;
 int FUNC_4 (struct sec_dev_info*) ;

__attribute__((used)) static int FUNC_5(struct sec_dev_info *VAR_0,
    struct platform_device *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  goto sec_clk_disable;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  goto sec_clk_disable;

 return 0;

sec_clk_disable:
 FUNC_0(VAR_0);

 return VAR_2;
}
