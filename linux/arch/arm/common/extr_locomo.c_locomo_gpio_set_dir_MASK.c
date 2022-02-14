
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct locomo {int lock; scalar_t__ base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct locomo* FUNC_0 (struct device*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct device *VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct locomo *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;
 unsigned int VAR_7;

 if (!VAR_5)
  return;

 FUNC_3(&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_1(VAR_5->base + VAR_0);
 if (VAR_4)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;
 FUNC_2(VAR_7, VAR_5->base + VAR_0);

 VAR_7 = FUNC_1(VAR_5->base + VAR_1);
 if (VAR_4)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;
 FUNC_2(VAR_7, VAR_5->base + VAR_1);

 FUNC_4(&VAR_5->lock, VAR_6);
}
