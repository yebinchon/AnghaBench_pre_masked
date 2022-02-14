
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max7301 {unsigned int* port_config; int out_level; int (* read ) (int ,int) ;int lock; int dev; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;


 unsigned int VAR_1 ;

 struct max7301* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 struct max7301 *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6 = -VAR_0;


 VAR_3 += 4;

 FUNC_1(&VAR_4->lock);

 VAR_5 = (VAR_4->port_config[VAR_3 >> 2] >> ((VAR_3 & 3) << 1))
   & VAR_1;

 switch (VAR_5) {
 case 128:

  VAR_6 = !!(VAR_4->out_level & (1 << VAR_3));
  break;
 case 129:
 case 130:

  VAR_6 = VAR_4->read(VAR_4->dev, 0x20 + VAR_3) & 0x01;
 }
 FUNC_2(&VAR_4->lock);

 return VAR_6;
}
