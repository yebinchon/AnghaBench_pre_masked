
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo {int lock; scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct locomo* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct device *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct locomo *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5;
 unsigned int VAR_6;

 if (!VAR_4)
  return;

 FUNC_3(&VAR_4->lock, VAR_5);

 VAR_6 = FUNC_1(VAR_4->base + VAR_0);
 if (VAR_3)
  VAR_6 |= VAR_2;
 else
  VAR_6 &= ~VAR_2;
 FUNC_2(VAR_6, VAR_4->base + VAR_0);

 FUNC_4(&VAR_4->lock, VAR_5);
}
