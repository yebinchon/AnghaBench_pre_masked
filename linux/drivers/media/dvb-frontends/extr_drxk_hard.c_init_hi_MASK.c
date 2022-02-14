
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxk_state {int m_hi_cfg_wake_up_key; int demod_address; int m_hi_cfg_timeout; int m_hi_cfg_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct drxk_state*) ;

__attribute__((used)) static int FUNC_2(struct drxk_state *VAR_1)
{
 FUNC_0(1, "\n");

 VAR_1->m_hi_cfg_wake_up_key = (VAR_1->demod_address << 1);
 VAR_1->m_hi_cfg_timeout = 0x96FF;

 VAR_1->m_hi_cfg_ctrl = VAR_0;

 return FUNC_1(VAR_1);
}
