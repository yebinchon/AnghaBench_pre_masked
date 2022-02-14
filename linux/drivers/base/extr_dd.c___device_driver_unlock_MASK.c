
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ need_parent_lock; } ;


 int FUNC_0 (struct device*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct device *VAR_1)
{
 FUNC_0(VAR_0);
 if (VAR_1 && VAR_0->bus->need_parent_lock)
  FUNC_0(VAR_1);
}
