
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rb532_cf_info {int irq; int gpio_line; } ;
struct ata_host {struct rb532_cf_info* private_data; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,void*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct ata_host *VAR_5 = VAR_4;
 struct rb532_cf_info *VAR_6 = VAR_5->private_data;

 if (FUNC_1(VAR_6->gpio_line)) {
  FUNC_2(VAR_6->irq, VAR_2);
  FUNC_0(VAR_6->irq, VAR_4);
 } else {
  FUNC_2(VAR_6->irq, VAR_1);
 }

 return VAR_0;
}
