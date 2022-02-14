
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {int scoop_lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct scoop_dev* FUNC_0 (struct gpio_chip*) ;
 unsigned short FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned short,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_1,
   unsigned VAR_2)
{
 struct scoop_dev *VAR_3 = FUNC_0(VAR_1);
 unsigned long VAR_4;
 unsigned short VAR_5;

 FUNC_3(&VAR_3->scoop_lock, VAR_4);

 VAR_5 = FUNC_1(VAR_3->base + VAR_0);
 VAR_5 &= ~(1 << (VAR_2 + 1));
 FUNC_2(VAR_5, VAR_3->base + VAR_0);

 FUNC_4(&VAR_3->scoop_lock, VAR_4);

 return 0;
}
