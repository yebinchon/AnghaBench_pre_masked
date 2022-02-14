
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007 {int (* clear_penirq ) () ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct tsc2007*) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_2, void *VAR_3)
{
 struct tsc2007 *VAR_4 = VAR_3;

 if (FUNC_1(VAR_4))
  return VAR_1;

 if (VAR_4->clear_penirq)
  VAR_4->clear_penirq();

 return VAR_0;
}
