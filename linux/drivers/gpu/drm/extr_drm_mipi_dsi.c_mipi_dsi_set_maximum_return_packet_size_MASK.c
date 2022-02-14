
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int tx ;
struct mipi_dsi_msg {int tx_len; int* tx_buf; int type; int channel; } ;
struct mipi_dsi_device {int channel; } ;


 int VAR_0 ;
 int FUNC_0 (struct mipi_dsi_device*,struct mipi_dsi_msg*) ;

int FUNC_1(struct mipi_dsi_device *VAR_1,
         u16 VAR_2)
{
 u8 VAR_3[2] = { VAR_2 & 0xff, VAR_2 >> 8 };
 struct mipi_dsi_msg VAR_4 = {
  .channel = VAR_1->channel,
  .type = VAR_0,
  .tx_len = sizeof(VAR_3),
  .tx_buf = VAR_3,
 };
 int VAR_5 = FUNC_0(VAR_1, &VAR_4);

 return (VAR_5 < 0) ? VAR_5 : 0;
}
