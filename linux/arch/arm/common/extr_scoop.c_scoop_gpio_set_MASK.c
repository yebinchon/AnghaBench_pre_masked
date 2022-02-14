
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {int scoop_lock; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (struct scoop_dev*,unsigned int,int) ;
 struct scoop_dev* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct gpio_chip *VAR_0, unsigned VAR_1, int VAR_2)
{
 struct scoop_dev *VAR_3 = FUNC_1(VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->scoop_lock, VAR_4);

 FUNC_0(VAR_3, VAR_1, VAR_2);

 FUNC_3(&VAR_3->scoop_lock, VAR_4);
}
