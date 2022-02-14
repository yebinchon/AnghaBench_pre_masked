
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scoop_dev {scalar_t__ base; } ;
struct device {int dummy; } ;


 struct scoop_dev* FUNC_0 (struct device*) ;
 unsigned short FUNC_1 (scalar_t__) ;

unsigned short FUNC_2(struct device *VAR_0, unsigned short VAR_1)
{
 struct scoop_dev *VAR_2 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2->base + VAR_1);
}
