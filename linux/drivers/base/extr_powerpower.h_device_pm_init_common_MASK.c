
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int early_init; int * qos; int lock; } ;
struct device {TYPE_1__ power; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct device *VAR_0)
{
 if (!VAR_0->power.early_init) {
  FUNC_0(&VAR_0->power.lock);
  VAR_0->power.qos = ((void*)0);
  VAR_0->power.early_init = 1;
 }
}
