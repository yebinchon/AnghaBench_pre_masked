
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_dsi_host {int err_work_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct msm_dsi_host*,int ) ;
 int FUNC_1 (struct msm_dsi_host*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_host *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_6);

 if (VAR_8 & (VAR_3 |
   VAR_4 |
   VAR_2 |
   VAR_0 |
   VAR_1)) {
  FUNC_1(VAR_7, VAR_6, VAR_8);
  VAR_7->err_work_state |= VAR_5;
 }
}
