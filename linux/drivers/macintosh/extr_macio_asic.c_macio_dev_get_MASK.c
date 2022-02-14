
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct macio_dev {TYPE_1__ ofdev; } ;
struct device {int dummy; } ;


 struct device* FUNC_0 (int *) ;
 struct macio_dev* FUNC_1 (struct device*) ;

struct macio_dev *FUNC_2(struct macio_dev *VAR_0)
{
 struct device *VAR_1;

 if (!VAR_0)
  return ((void*)0);
 VAR_1 = FUNC_0(&VAR_0->ofdev.dev);
 if (VAR_1)
  return FUNC_1(VAR_1);
 else
  return ((void*)0);
}
