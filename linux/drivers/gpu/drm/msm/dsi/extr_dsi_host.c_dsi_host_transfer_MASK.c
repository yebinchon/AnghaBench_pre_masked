
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int cmd_mutex; int id; int power_on; } ;
struct mipi_dsi_msg {int dummy; } ;
struct mipi_dsi_host {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mipi_dsi_msg const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct msm_dsi_host* FUNC_3 (struct mipi_dsi_host*) ;

__attribute__((used)) static ssize_t FUNC_4(struct mipi_dsi_host *VAR_1,
     const struct mipi_dsi_msg *VAR_2)
{
 struct msm_dsi_host *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 if (!VAR_2 || !VAR_3->power_on)
  return -VAR_0;

 FUNC_1(&VAR_3->cmd_mutex);
 VAR_4 = FUNC_0(VAR_3->id, VAR_2);
 FUNC_2(&VAR_3->cmd_mutex);

 return VAR_4;
}
