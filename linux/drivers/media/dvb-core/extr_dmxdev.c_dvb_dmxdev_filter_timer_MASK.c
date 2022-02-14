
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ expires; } ;
struct dmx_sct_filter_params {int timeout; } ;
struct TYPE_4__ {struct dmx_sct_filter_params sec; } ;
struct dmxdev_filter {TYPE_2__ timer; TYPE_1__ params; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(struct dmxdev_filter *VAR_2)
{
 struct dmx_sct_filter_params *VAR_3 = &VAR_2->params.sec;

 FUNC_1(&VAR_2->timer);
 if (VAR_3->timeout) {
  VAR_2->timer.expires =
      VAR_1 + 1 + (VAR_0 / 2 + VAR_0 * VAR_3->timeout) / 1000;
  FUNC_0(&VAR_2->timer);
 }
}
