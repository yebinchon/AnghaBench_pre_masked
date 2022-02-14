
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macgpio_devinfo {scalar_t__ gpio_num; int mdi_resources; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 struct macgpio_devinfo* FUNC_2 (int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (int *,char*,int ,char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, device_t VAR_4)
{
        struct macgpio_devinfo *VAR_5;
        int VAR_6 = 0;

        VAR_5 = FUNC_2(VAR_4);

        VAR_6 += FUNC_1(VAR_3, VAR_4);

 if (VAR_5->gpio_num >= VAR_0)
  FUNC_3(" gpio %d", VAR_5->gpio_num - VAR_0);
 else if (VAR_5->gpio_num >= VAR_1)
  FUNC_3(" extint-gpio %d", VAR_5->gpio_num - VAR_1);
 else if (VAR_5->gpio_num >= 0)
  FUNC_3(" addr 0x%02x", VAR_5->gpio_num);

 FUNC_4(&VAR_5->mdi_resources, "irq", VAR_2,
     "%jd");
        VAR_6 += FUNC_0(VAR_3, VAR_4);

        return (VAR_6);
}
