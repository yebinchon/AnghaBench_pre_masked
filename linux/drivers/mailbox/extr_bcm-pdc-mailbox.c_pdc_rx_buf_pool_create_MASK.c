
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct pdc_state {int rx_buf_pool; int pdc_resp_hdr_len; scalar_t__ use_bcm_hdr; int rx_status_len; struct platform_device* pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct pdc_state *VAR_4)
{
 struct platform_device *VAR_5;
 struct device *VAR_6;

 VAR_5 = VAR_4->pdev;
 VAR_6 = &VAR_5->dev;

 VAR_4->pdc_resp_hdr_len = VAR_4->rx_status_len;
 if (VAR_4->use_bcm_hdr)
  VAR_4->pdc_resp_hdr_len += VAR_0;

 VAR_4->rx_buf_pool = FUNC_0("pdc rx bufs", VAR_6,
         VAR_4->pdc_resp_hdr_len,
         VAR_3, 0);
 if (!VAR_4->rx_buf_pool)
  return -VAR_1;

 return VAR_2;
}
