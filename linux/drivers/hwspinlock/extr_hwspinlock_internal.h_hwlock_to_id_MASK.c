
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwspinlock {TYPE_1__* bank; } ;
struct TYPE_2__ {int base_id; struct hwspinlock* lock; } ;



__attribute__((used)) static inline int FUNC_0(struct hwspinlock *VAR_0)
{
 int VAR_1 = VAR_0 - &VAR_0->bank->lock[0];

 return VAR_0->bank->base_id + VAR_1;
}
