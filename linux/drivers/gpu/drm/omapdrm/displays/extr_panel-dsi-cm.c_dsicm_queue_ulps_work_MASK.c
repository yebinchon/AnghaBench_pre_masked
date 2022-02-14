
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {scalar_t__ ulps_timeout; int ulps_work; int workqueue; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct panel_drv_data *VAR_0)
{
 if (VAR_0->ulps_timeout > 0)
  FUNC_1(VAR_0->workqueue, &VAR_0->ulps_work,
    FUNC_0(VAR_0->ulps_timeout));
}
