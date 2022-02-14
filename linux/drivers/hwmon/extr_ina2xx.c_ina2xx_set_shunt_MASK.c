
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ina2xx_data {long rshunt; int current_lsb_uA; int power_lsb_uW; int config_lock; TYPE_1__* config; } ;
struct TYPE_2__ {long shunt_div; int power_lsb_factor; } ;


 void* FUNC_0 (unsigned int,long) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ina2xx_data *VAR_1, long VAR_2)
{
 unsigned int VAR_3 = FUNC_0(1000000000,
        VAR_1->config->shunt_div);
 if (VAR_2 <= 0 || VAR_2 > VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_1->config_lock);
 VAR_1->rshunt = VAR_2;
 VAR_1->current_lsb_uA = FUNC_0(VAR_3, VAR_2);
 VAR_1->power_lsb_uW = VAR_1->config->power_lsb_factor *
        VAR_1->current_lsb_uA;
 FUNC_2(&VAR_1->config_lock);

 return 0;
}
