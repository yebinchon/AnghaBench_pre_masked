
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_manager {int ** dsi; } ;
struct msm_dsi {size_t id; scalar_t__ host; } ;


 int FUNC_0 (scalar_t__) ;
 struct msm_dsi_manager VAR_0 ;

void FUNC_1(struct msm_dsi *VAR_1)
{
 struct msm_dsi_manager *VAR_2 = &VAR_0;

 if (VAR_1->host)
  FUNC_0(VAR_1->host);

 if (VAR_1->id >= 0)
  VAR_2->dsi[VAR_1->id] = ((void*)0);
}
