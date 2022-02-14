
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct irq_data {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {TYPE_1__* spi; } ;
struct adis16480 {TYPE_2__ adis; } ;
typedef enum adis16480_int_pin { ____Placeholder_adis16480_int_pin } adis16480_int_pin ;
struct TYPE_3__ {int dev; int irq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int *,char*,unsigned int) ;
 struct irq_data* FUNC_6 (int ) ;
 unsigned int FUNC_7 (struct irq_data*) ;
 int FUNC_8 (struct device_node*,int ) ;

__attribute__((used)) static int FUNC_9(struct device_node *VAR_6,
        struct adis16480 *VAR_7)
{
 struct irq_data *VAR_8;
 enum adis16480_int_pin VAR_9;
 unsigned int VAR_10;
 uint16_t VAR_11;
 int VAR_12, VAR_13 = 0;

 VAR_8 = FUNC_6(VAR_7->adis.spi->irq);
 if (!VAR_8) {
  FUNC_5(&VAR_7->adis.spi->dev, "Could not find IRQ %d\n", VAR_13);
  return -VAR_2;
 }


 VAR_11 = FUNC_0(0);
 VAR_9 = VAR_0;
 for (VAR_12 = 0; VAR_12 < FUNC_3(VAR_5); VAR_12++) {
  VAR_13 = FUNC_8(VAR_6, VAR_5[VAR_12]);
  if (VAR_13 > 0) {
   VAR_9 = VAR_12;
   break;
  }
 }

 VAR_11 |= FUNC_2(VAR_9);






 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10 == VAR_4) {
  VAR_11 |= FUNC_1(1);
 } else if (VAR_10 == VAR_3) {
  VAR_11 |= FUNC_1(0);
 } else {
  FUNC_5(&VAR_7->adis.spi->dev,
   "Invalid interrupt type 0x%x specified\n", VAR_10);
  return -VAR_2;
 }

 return FUNC_4(&VAR_7->adis, VAR_1, VAR_11);
}
