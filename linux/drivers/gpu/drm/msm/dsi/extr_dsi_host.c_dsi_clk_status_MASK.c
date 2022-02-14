
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct msm_dsi_host {int err_work_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msm_dsi_host*,int ) ;
 int FUNC_1 (struct msm_dsi_host*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct msm_dsi_host *VAR_3)
{
 u32 VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);

 if (VAR_4 & VAR_0) {
  FUNC_1(VAR_3, VAR_2, VAR_4);
  VAR_3->err_work_state |= VAR_1;
 }
}
