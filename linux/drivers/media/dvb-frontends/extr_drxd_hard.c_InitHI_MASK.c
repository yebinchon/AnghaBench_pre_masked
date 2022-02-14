
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int hi_cfg_ctrl; int chip_adr; int hi_cfg_wakeup_key; } ;


 int FUNC_0 (struct drxd_state*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_1)
{
 VAR_1->hi_cfg_wakeup_key = (VAR_1->chip_adr);

 VAR_1->hi_cfg_ctrl = VAR_0;
 return FUNC_0(VAR_1);
}
