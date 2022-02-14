
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int,char*,void*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4, irq_handler_t VAR_5,
  void *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, "sdhc-detect");
 if (VAR_7)
  return VAR_7;

 FUNC_0(VAR_2);

 VAR_7 = FUNC_2(VAR_3, "sdhc-wp");
 if (VAR_7)
  goto err_gpio_free;
 FUNC_0(VAR_3);

 VAR_7 = FUNC_4(FUNC_3(VAR_2), VAR_5,
  VAR_1 | VAR_0,
  "sdhc2-card-detect", VAR_6);
 if (VAR_7)
  goto err_gpio_free_2;

 return 0;

err_gpio_free_2:
 FUNC_1(VAR_3);
err_gpio_free:
 FUNC_1(VAR_2);

 return VAR_7;
}
