
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_msg {int tx_len; void* rx_buf; size_t rx_len; int * tx_buf; int type; int channel; } ;
struct mipi_dsi_device {int channel; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct mipi_dsi_device*,struct mipi_dsi_msg*) ;

ssize_t FUNC_1(struct mipi_dsi_device *VAR_1, u8 VAR_2, void *VAR_3,
     size_t VAR_4)
{
 struct mipi_dsi_msg VAR_5 = {
  .channel = VAR_1->channel,
  .type = VAR_0,
  .tx_buf = &VAR_2,
  .tx_len = 1,
  .rx_buf = VAR_3,
  .rx_len = VAR_4
 };

 return FUNC_0(VAR_1, &VAR_5);
}
