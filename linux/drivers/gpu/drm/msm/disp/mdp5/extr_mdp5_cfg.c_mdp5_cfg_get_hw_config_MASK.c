
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mdp5_cfg_hw {int dummy; } ;
struct TYPE_2__ {struct mdp5_cfg_hw const* hw; } ;
struct mdp5_cfg_handler {TYPE_1__ config; } ;



const struct mdp5_cfg_hw *FUNC_0(struct mdp5_cfg_handler *VAR_0)
{
 return VAR_0->config.hw;
}
