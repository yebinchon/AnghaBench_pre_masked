
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl330_thread {TYPE_1__* dmac; } ;
struct TYPE_2__ {struct pl330_thread* manager; } ;



__attribute__((used)) static inline bool FUNC_0(struct pl330_thread *VAR_0)
{
 return VAR_0->dmac->manager == VAR_0;
}
