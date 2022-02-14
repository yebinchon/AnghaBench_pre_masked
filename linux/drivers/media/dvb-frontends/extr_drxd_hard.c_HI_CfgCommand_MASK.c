
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drxd_state {int hi_cfg_timing_div; int hi_cfg_bridge_delay; int hi_cfg_wakeup_key; int hi_cfg_ctrl; int mutex; } ;


 int FUNC_0 (struct drxd_state*,int,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct drxd_state*,int ,int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct drxd_state *VAR_9)
{
 int VAR_10 = 0;

 FUNC_2(&VAR_9->mutex);
 FUNC_1(VAR_9, VAR_4, VAR_8, 0);
 FUNC_1(VAR_9, VAR_3, VAR_9->hi_cfg_timing_div, 0);
 FUNC_1(VAR_9, VAR_2, VAR_9->hi_cfg_bridge_delay, 0);
 FUNC_1(VAR_9, VAR_5, VAR_9->hi_cfg_wakeup_key, 0);
 FUNC_1(VAR_9, VAR_1, VAR_9->hi_cfg_ctrl, 0);

 FUNC_1(VAR_9, VAR_4, VAR_8, 0);

 if ((VAR_9->hi_cfg_ctrl & VAR_0) ==
     VAR_0)
  VAR_10 = FUNC_1(VAR_9, VAR_7,
     VAR_6, 0);
 else
  VAR_10 = FUNC_0(VAR_9, VAR_6, ((void*)0));
 FUNC_3(&VAR_9->mutex);
 return VAR_10;
}
