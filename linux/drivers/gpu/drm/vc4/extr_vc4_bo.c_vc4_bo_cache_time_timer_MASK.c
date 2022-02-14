
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int time_work; } ;
struct vc4_dev {TYPE_1__ bo_cache; } ;
struct timer_list {int dummy; } ;
struct TYPE_4__ {int time_timer; } ;


 TYPE_2__ VAR_0 ;
 struct vc4_dev* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (int *) ;
 struct vc4_dev* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct vc4_dev *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0.time_timer);

 FUNC_1(&VAR_3->bo_cache.time_work);
}
