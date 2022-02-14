
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mipi_dsi_packet {int size; } ;
struct mipi_dsi_msg {int rx_len; scalar_t__ rx_buf; } ;
struct mipi_dsi_host {int dummy; } ;
struct dw_mipi_dsi {struct dw_mipi_dsi* slave; int dev; } ;
typedef int ssize_t ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct dw_mipi_dsi*,struct mipi_dsi_msg const*) ;
 int FUNC_2 (struct dw_mipi_dsi*,struct mipi_dsi_packet*) ;
 int FUNC_3 (struct dw_mipi_dsi*,struct mipi_dsi_msg const*) ;
 struct dw_mipi_dsi* FUNC_4 (struct mipi_dsi_host*) ;
 int FUNC_5 (struct mipi_dsi_packet*,struct mipi_dsi_msg const*) ;

__attribute__((used)) static ssize_t FUNC_6(struct mipi_dsi_host *VAR_0,
      const struct mipi_dsi_msg *VAR_1)
{
 struct dw_mipi_dsi *VAR_2 = FUNC_4(VAR_0);
 struct mipi_dsi_packet VAR_3;
 int VAR_4, VAR_5;

 VAR_4 = FUNC_5(&VAR_3, VAR_1);
 if (VAR_4) {
  FUNC_0(VAR_2->dev, "failed to create packet: %d\n", VAR_4);
  return VAR_4;
 }

 FUNC_3(VAR_2, VAR_1);
 if (VAR_2->slave)
  FUNC_3(VAR_2->slave, VAR_1);

 VAR_4 = FUNC_2(VAR_2, &VAR_3);
 if (VAR_4)
  return VAR_4;
 if (VAR_2->slave) {
  VAR_4 = FUNC_2(VAR_2->slave, &VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 if (VAR_1->rx_buf && VAR_1->rx_len) {
  VAR_4 = FUNC_1(VAR_2, VAR_1);
  if (VAR_4)
   return VAR_4;
  VAR_5 = VAR_1->rx_len;
 } else {
  VAR_5 = VAR_3.size;
 }

 return VAR_5;
}
