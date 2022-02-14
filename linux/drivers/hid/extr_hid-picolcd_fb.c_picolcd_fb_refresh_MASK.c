
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picolcd_data {TYPE_1__* fb_info; } ;
struct TYPE_2__ {int deferred_work; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct picolcd_data *VAR_0)
{
 if (VAR_0->fb_info)
  FUNC_0(&VAR_0->fb_info->deferred_work, 0);
}
