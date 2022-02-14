
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int completion; } ;
struct device {TYPE_1__ power; } ;
typedef int async_func_t ;


 int FUNC_0 (int ,struct device*) ;
 int FUNC_1 (struct device*) ;
 scalar_t__ FUNC_2 (struct device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct device *VAR_0, async_func_t VAR_1)
{
 FUNC_3(&VAR_0->power.completion);

 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0);
  FUNC_0(VAR_1, VAR_0);
  return 1;
 }

 return 0;
}
