
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max7301 {int* port_config; int input_pullup_active; int (* write ) (int ,int,int) ;int lock; int dev; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct max7301* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 struct max7301 *VAR_5 = FUNC_1(VAR_3);
 u8 *VAR_6;
 u8 VAR_7, VAR_8;
 int VAR_9;


 VAR_4 += 4;
 VAR_7 = (VAR_4 & 3) << 1;

 VAR_6 = &VAR_5->port_config[VAR_4 >> 2];

 if (VAR_5->input_pullup_active & FUNC_0(VAR_4))
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_1;

 FUNC_2(&VAR_5->lock);

 *VAR_6 = (*VAR_6 & ~(VAR_2 << VAR_7))
      | (VAR_8 << VAR_7);

 VAR_9 = VAR_5->write(VAR_5->dev, 0x08 + (VAR_4 >> 2), *VAR_6);

 FUNC_3(&VAR_5->lock);

 return VAR_9;
}
