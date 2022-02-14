
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct msm_dsi_cfg_handler {scalar_t__ major; scalar_t__ minor; } ;


 int FUNC_0 (struct msm_dsi_cfg_handler*) ;
 struct msm_dsi_cfg_handler* VAR_0 ;

const struct msm_dsi_cfg_handler *FUNC_1(u32 VAR_1, u32 VAR_2)
{
 const struct msm_dsi_cfg_handler *VAR_3 = ((void*)0);
 int VAR_4;

 for (VAR_4 = FUNC_0(VAR_0) - 1; VAR_4 >= 0; VAR_4--) {
  if ((VAR_0[VAR_4].major == VAR_1) &&
   (VAR_0[VAR_4].minor == VAR_2)) {
   VAR_3 = &VAR_0[VAR_4];
   break;
  }
 }

 return VAR_3;
}
