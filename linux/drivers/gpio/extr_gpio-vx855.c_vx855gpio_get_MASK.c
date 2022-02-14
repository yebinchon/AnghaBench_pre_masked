
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct vx855_gpio {int io_gpi; int io_gpo; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 struct vx855_gpio* FUNC_2 (struct gpio_chip*) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_2, unsigned int VAR_3)
{
 struct vx855_gpio *VAR_4 = FUNC_2(VAR_2);
 u_int32_t VAR_5;
 int VAR_6 = 0;

 if (VAR_3 < VAR_0) {
  VAR_5 = FUNC_4(VAR_4->io_gpi);
  if (VAR_5 & FUNC_0(VAR_3))
   VAR_6 = 1;
 } else if (VAR_3 < VAR_1) {


  VAR_5 = FUNC_4(VAR_4->io_gpo);
  if (VAR_5 & FUNC_3(VAR_3 - VAR_0))
   VAR_6 = 1;
 } else {
  VAR_5 = FUNC_4(VAR_4->io_gpi);
  if (VAR_5 & FUNC_1(VAR_3 - VAR_1))
   VAR_6 = 1;
 }

 return VAR_6;
}
