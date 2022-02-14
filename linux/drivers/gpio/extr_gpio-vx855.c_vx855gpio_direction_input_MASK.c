
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct vx855_gpio {int lock; int io_gpo; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 struct vx855_gpio* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_3,
         unsigned int VAR_4)
{
 struct vx855_gpio *VAR_5 = FUNC_1(VAR_3);
 unsigned long VAR_6;
 u_int32_t VAR_7;


 if (VAR_4 < VAR_1)
  return 0;


 if (VAR_4 < VAR_2)
  return -VAR_0;


 FUNC_4(&VAR_5->lock, VAR_6);
 VAR_7 = FUNC_2(VAR_5->io_gpo);
 VAR_7 |= FUNC_0(VAR_4 - VAR_2);
 FUNC_3(VAR_7, VAR_5->io_gpo);
 FUNC_5(&VAR_5->lock, VAR_6);

 return 0;
}
