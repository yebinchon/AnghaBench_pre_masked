
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int irq_handler_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int ,int,char*,void*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_4,
          irq_handler_t VAR_5,
          void *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_3(VAR_3,
     FUNC_0(VAR_3));
 if (VAR_7) {
  FUNC_5("Unable to request the SD/MMC GPIOs.\n");
  return VAR_7;
 }

 VAR_7 = FUNC_6(FUNC_4(FUNC_1(VAR_2)),
     VAR_5,
     VAR_0 | VAR_1,
     "sdhc1-detect", VAR_6);
 if (VAR_7) {
  FUNC_5("Unable to request the SD/MMC card-detect IRQ.\n");
  goto gpio_free;
 }

 return 0;

gpio_free:
 FUNC_2(VAR_3,
   FUNC_0(VAR_3));
 return VAR_7;
}
