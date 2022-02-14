
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max7301 {int* port_config; int (* write ) (int ,int,int) ;int lock; int dev; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct max7301*,unsigned int,int) ;
 struct max7301* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned VAR_3,
        int VAR_4)
{
 struct max7301 *VAR_5 = FUNC_1(VAR_2);
 u8 *VAR_6;
 u8 VAR_7;
 int VAR_8;


 VAR_3 += 4;
 VAR_7 = (VAR_3 & 3) << 1;

 VAR_6 = &VAR_5->port_config[VAR_3 >> 2];

 FUNC_2(&VAR_5->lock);

 *VAR_6 = (*VAR_6 & ~(VAR_0 << VAR_7))
      | (VAR_1 << VAR_7);

 VAR_8 = FUNC_0(VAR_5, VAR_3, VAR_4);

 if (!VAR_8)
  VAR_8 = VAR_5->write(VAR_5->dev, 0x08 + (VAR_3 >> 2), *VAR_6);

 FUNC_3(&VAR_5->lock);

 return VAR_8;
}
