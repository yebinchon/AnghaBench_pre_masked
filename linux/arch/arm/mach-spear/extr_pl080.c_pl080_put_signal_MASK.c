
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pl08x_channel_data {int dummy; } ;
struct TYPE_2__ {int busy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void FUNC_3(const struct pl08x_channel_data *VAR_2, int VAR_3)
{
 unsigned long VAR_4;

 FUNC_1(&VAR_0, VAR_4);


 if (!VAR_1[VAR_3].busy)
  FUNC_0();

 VAR_1[VAR_3].busy--;

 FUNC_2(&VAR_0, VAR_4);
}
