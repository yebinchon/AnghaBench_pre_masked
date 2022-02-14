
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion; scalar_t__ async_suspend; } ;
struct device {TYPE_1__ power; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, bool VAR_2)
{
 if (!VAR_1)
  return;

 if (VAR_2 || (VAR_0 && VAR_1->power.async_suspend))
  FUNC_0(&VAR_1->power.completion);
}
