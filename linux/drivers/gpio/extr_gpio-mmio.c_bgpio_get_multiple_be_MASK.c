
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int ngpio; unsigned long (* read_reg ) (int ) ;int reg_dat; } ;


 unsigned long FUNC_0 (struct gpio_chip*,int) ;
 int FUNC_1 (unsigned long*,int,int) ;
 unsigned long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0, unsigned long *VAR_1,
     unsigned long *VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4;
 int VAR_5;


 *VAR_2 &= ~*VAR_1;


 VAR_5 = -1;
 while ((VAR_5 = FUNC_1(VAR_1, VAR_0->ngpio, VAR_5 + 1)) < VAR_0->ngpio)
  VAR_3 |= FUNC_0(VAR_0, VAR_5);


 VAR_4 = VAR_0->read_reg(VAR_0->reg_dat) & VAR_3;





 VAR_5 = -1;
 while ((VAR_5 = FUNC_1(&VAR_4, VAR_0->ngpio, VAR_5 + 1)) < VAR_0->ngpio)
  *VAR_2 |= FUNC_0(VAR_0, VAR_5);

 return 0;
}
