
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3,
       irq_handler_t VAR_4, void *VAR_5)
{
 int VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_1);
 VAR_8 = FUNC_0(VAR_2);

 VAR_6 = FUNC_3(VAR_7, "sdhc-card-detect");
 if (VAR_6)
  return VAR_6;

 FUNC_1(VAR_7);

 VAR_6 = FUNC_3(VAR_8, "sdhc-write-protect");
 if (VAR_6)
  goto err_gpio_free;

 FUNC_1(VAR_8);


 VAR_6 = FUNC_5(FUNC_4(FUNC_0(VAR_1)),
     VAR_4, VAR_0,
     "sdhc-detect", VAR_5);

 if (VAR_6)
  goto err_gpio_free_2;

 return 0;

err_gpio_free_2:
 FUNC_2(VAR_8);

err_gpio_free:
 FUNC_2(VAR_7);

 return VAR_6;

}
