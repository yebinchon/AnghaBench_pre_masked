
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max7301 {int lock; int chip; int (* write ) (struct device*,int,int) ;} ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct max7301* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct device*,int,int) ;

int FUNC_4(struct device *VAR_1)
{
 struct max7301 *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 == ((void*)0))
  return -VAR_0;


 VAR_2->write(VAR_1, 0x04, 0x00);
 FUNC_1(&VAR_2->chip);
 FUNC_2(&VAR_2->lock);
 return 0;
}
