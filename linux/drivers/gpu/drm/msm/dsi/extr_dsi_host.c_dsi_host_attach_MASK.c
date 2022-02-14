
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {scalar_t__ num_data_lanes; scalar_t__ lanes; int hpd_work; int workqueue; scalar_t__ dev; int id; int mode_flags; int format; int channel; } ;
struct mipi_dsi_host {int dummy; } ;
struct mipi_dsi_device {scalar_t__ lanes; int dev; int mode_flags; int format; int channel; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct msm_dsi_host*,int *) ;
 int FUNC_2 (int ,int *) ;
 struct msm_dsi_host* FUNC_3 (struct mipi_dsi_host*) ;

__attribute__((used)) static int FUNC_4(struct mipi_dsi_host *VAR_1,
     struct mipi_dsi_device *VAR_2)
{
 struct msm_dsi_host *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (VAR_2->lanes > VAR_3->num_data_lanes)
  return -VAR_0;

 VAR_3->channel = VAR_2->channel;
 VAR_3->lanes = VAR_2->lanes;
 VAR_3->format = VAR_2->format;
 VAR_3->mode_flags = VAR_2->mode_flags;


 VAR_4 = FUNC_1(VAR_3, &VAR_2->dev);
 if (VAR_4)
  return VAR_4;

 FUNC_0("id=%d", VAR_3->id);
 if (VAR_3->dev)
  FUNC_2(VAR_3->workqueue, &VAR_3->hpd_work);

 return 0;
}
