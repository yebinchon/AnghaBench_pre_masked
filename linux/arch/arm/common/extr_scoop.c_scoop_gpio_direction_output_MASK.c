
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {int scoop_lock; scalar_t__ base; } ;
struct gpio_chip {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct scoop_dev*,unsigned int,int) ;
 struct scoop_dev* FUNC_1 (struct gpio_chip*) ;
 unsigned short FUNC_2 (scalar_t__) ;
 int FUNC_3 (unsigned short,scalar_t__) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct gpio_chip *VAR_1,
   unsigned VAR_2, int VAR_3)
{
 struct scoop_dev *VAR_4 = FUNC_1(VAR_1);
 unsigned long VAR_5;
 unsigned short VAR_6;

 FUNC_4(&VAR_4->scoop_lock, VAR_5);

 FUNC_0(VAR_4, VAR_2, VAR_3);

 VAR_6 = FUNC_2(VAR_4->base + VAR_0);
 VAR_6 |= 1 << (VAR_2 + 1);
 FUNC_3(VAR_6, VAR_4->base + VAR_0);

 FUNC_5(&VAR_4->scoop_lock, VAR_5);

 return 0;
}
