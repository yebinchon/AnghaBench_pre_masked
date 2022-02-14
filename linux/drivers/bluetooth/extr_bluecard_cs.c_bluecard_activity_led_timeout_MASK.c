
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct bluecard_info {int timer; int hw_state; TYPE_2__* p_dev; } ;
struct TYPE_4__ {TYPE_1__** resource; } ;
struct TYPE_3__ {unsigned int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct bluecard_info* FUNC_1 (int ,struct timer_list*,int ) ;
 struct bluecard_info* VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int,unsigned int) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_5)
{
 struct bluecard_info *VAR_6 = FUNC_1(VAR_6, VAR_5, VAR_4);
 unsigned int VAR_7 = VAR_6->p_dev->resource[0]->start;

 if (FUNC_4(VAR_0, &(VAR_6->hw_state))) {

  FUNC_0(VAR_0, &(VAR_6->hw_state));
  FUNC_2(&(VAR_6->timer), VAR_3 + VAR_1 / 10);
 }


 FUNC_3(0x08 | 0x20, VAR_7 + 0x30);
}
