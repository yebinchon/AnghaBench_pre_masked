
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pisosr_gpio {scalar_t__* buffer; } ;
struct gpio_chip {int ngpio; } ;


 unsigned int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned long*,int ) ;
 struct pisosr_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (struct pisosr_gpio*) ;

__attribute__((used)) static int FUNC_4(struct gpio_chip *VAR_0,
        unsigned long *VAR_1, unsigned long *VAR_2)
{
 struct pisosr_gpio *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4 = FUNC_0(VAR_0->ngpio, 8);
 unsigned int VAR_5, VAR_6;

 FUNC_3(VAR_3);

 FUNC_1(VAR_2, VAR_0->ngpio);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_6 = VAR_5 / sizeof(unsigned long);
  VAR_2[VAR_6] |= ((unsigned long) VAR_3->buffer[VAR_5])
      << (8 * (VAR_5 % sizeof(unsigned long)));
 }

 return 0;
}
