
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int hi_cfg_ctrl; } ;


 int FUNC_0 (struct drxd_state*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct drxd_state *VAR_3, int VAR_4)
{
 VAR_3->hi_cfg_ctrl &= (~VAR_2);
 if (VAR_4)
  VAR_3->hi_cfg_ctrl |= VAR_1;
 else
  VAR_3->hi_cfg_ctrl |= VAR_0;

 return FUNC_0(VAR_3);
}
