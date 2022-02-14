
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msm_dsi_host {int tx_size; int tx_buf; int tx_buf_paddr; struct drm_device* dev; } ;
struct drm_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int *,int ) ;

int FUNC_1(struct msm_dsi_host *VAR_2, int VAR_3)
{
 struct drm_device *VAR_4 = VAR_2->dev;

 VAR_2->tx_buf = FUNC_0(VAR_4->dev, VAR_3,
     &VAR_2->tx_buf_paddr, VAR_1);
 if (!VAR_2->tx_buf)
  return -VAR_0;

 VAR_2->tx_size = VAR_3;

 return 0;
}
