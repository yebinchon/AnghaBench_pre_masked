
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct device {int dummy; } ;
struct TYPE_3__ {int gpio_bit; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_9)
{
 int VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8); VAR_10++)
  VAR_12 |= (1<<VAR_8[VAR_10].gpio_bit);

 FUNC_4(&VAR_7);






 VAR_11 = FUNC_2(VAR_6 + VAR_0);
 FUNC_1(VAR_9, ": Data read from GPIO_USE_SEL = 0x%08x\n", VAR_11);
 VAR_11 |= VAR_12 + VAR_5;
 FUNC_3(VAR_11, VAR_6 + VAR_0);
 VAR_11 = FUNC_2(VAR_6 + VAR_0);
 FUNC_1(VAR_9, ": GPIO_USE_SEL = 0x%08x\n\n", VAR_11);







 VAR_11 = FUNC_2(VAR_6 + VAR_3);
 FUNC_1(VAR_9, ": Data read from GP_IO_SEL = 0x%08x\n",
     VAR_11);
 VAR_11 &= ~VAR_12;
 VAR_11 |= VAR_5;
 FUNC_3(VAR_11, VAR_6 + VAR_3);
 VAR_11 = FUNC_2(VAR_6 + VAR_3);
 FUNC_1(VAR_9, ": GP_IO_SEL = 0x%08x\n", VAR_11);





 VAR_11 = FUNC_2(VAR_6 + VAR_4);
 FUNC_1(VAR_9, ": Data read from GP_LVL = 0x%08x\n", VAR_11);




 VAR_11 = FUNC_2(VAR_6 + VAR_2);
 FUNC_1(VAR_9, ": Data read from GPO_BLINK = 0x%08x\n", VAR_11);




 VAR_11 = FUNC_2(VAR_6 + VAR_1);
 FUNC_1(VAR_9, ": Data read from GPI_INV = 0x%08x\n", VAR_11);

 FUNC_5(&VAR_7);
 return 0;
}
