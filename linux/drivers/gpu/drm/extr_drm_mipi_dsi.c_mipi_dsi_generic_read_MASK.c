
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_msg {size_t tx_len; void const* tx_buf; size_t rx_len; void* rx_buf; int type; int channel; } ;
struct mipi_dsi_device {int channel; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mipi_dsi_device*,struct mipi_dsi_msg*) ;

ssize_t FUNC_1(struct mipi_dsi_device *VAR_4, const void *VAR_5,
         size_t VAR_6, void *VAR_7, size_t VAR_8)
{
 struct mipi_dsi_msg VAR_9 = {
  .channel = VAR_4->channel,
  .tx_len = VAR_6,
  .tx_buf = VAR_5,
  .rx_len = VAR_8,
  .rx_buf = VAR_7
 };

 switch (VAR_6) {
 case 0:
  VAR_9.type = VAR_1;
  break;

 case 1:
  VAR_9.type = VAR_2;
  break;

 case 2:
  VAR_9.type = VAR_3;
  break;

 default:
  return -VAR_0;
 }

 return FUNC_0(VAR_4, &VAR_9);
}
