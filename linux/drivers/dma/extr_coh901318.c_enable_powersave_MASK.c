
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct powersave {unsigned long long started_channels; int lock; } ;
struct coh901318_chan {unsigned long long id; TYPE_1__* base; } ;
struct TYPE_2__ {struct powersave pm; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct coh901318_chan *VAR_0)
{
 unsigned long VAR_1;
 struct powersave *VAR_2 = &VAR_0->base->pm;

 FUNC_0(&VAR_2->lock, VAR_1);

 VAR_2->started_channels &= ~(1ULL << VAR_0->id);

 FUNC_1(&VAR_2->lock, VAR_1);
}
