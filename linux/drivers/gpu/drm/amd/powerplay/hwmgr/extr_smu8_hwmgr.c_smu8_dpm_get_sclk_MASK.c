
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct smu8_power_state {int level; TYPE_1__* levels; } ;
struct pp_power_state {int hardware; } ;
struct pp_hwmgr {struct pp_power_state* request_ps; } ;
struct TYPE_2__ {int engineClock; } ;


 int VAR_0 ;
 struct smu8_power_state* FUNC_0 (int *) ;

__attribute__((used)) static uint32_t FUNC_1(struct pp_hwmgr *VAR_1, bool VAR_2)
{
 struct pp_power_state *VAR_3;
 struct smu8_power_state *VAR_4;

 if (VAR_1 == ((void*)0))
  return -VAR_0;

 VAR_3 = VAR_1->request_ps;

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_4 = FUNC_0(&VAR_3->hardware);

 if (VAR_2)
  return VAR_4->levels[0].engineClock;
 else
  return VAR_4->levels[VAR_4->level-1].engineClock;
}
