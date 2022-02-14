
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct d40_desc {scalar_t__ lcla_alloc; } ;
struct d40_chan {TYPE_3__* base; TYPE_1__* phy_chan; } ;
struct TYPE_5__ {int lock; struct d40_desc** alloc_map; } ;
struct TYPE_6__ {TYPE_2__ lcla_pool; } ;
struct TYPE_4__ {int num; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct d40_chan*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct d40_chan *VAR_2,
        struct d40_desc *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;
 int VAR_6 = -VAR_1;

 if (FUNC_0(VAR_2))
  return 0;

 FUNC_1(&VAR_2->base->lcla_pool.lock, VAR_4);

 for (VAR_5 = 1 ; VAR_5 < VAR_0 / 2; VAR_5++) {
  int VAR_7 = VAR_2->phy_chan->num * VAR_0 + VAR_5;

  if (VAR_2->base->lcla_pool.alloc_map[VAR_7] == VAR_3) {
   VAR_2->base->lcla_pool.alloc_map[VAR_7] = ((void*)0);
   VAR_3->lcla_alloc--;
   if (VAR_3->lcla_alloc == 0) {
    VAR_6 = 0;
    break;
   }
  }
 }

 FUNC_2(&VAR_2->base->lcla_pool.lock, VAR_4);

 return VAR_6;

}
