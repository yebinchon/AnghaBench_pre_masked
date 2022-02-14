
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mipi_dsi_msg {int rx_len; scalar_t__ rx_buf; } ;


 int FUNC_0 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_0, const struct mipi_dsi_msg *VAR_1)
{

 if (VAR_1->rx_buf && VAR_1->rx_len)
  FUNC_0(VAR_1->rx_buf, VAR_0 + 4, VAR_1->rx_len);

 return VAR_1->rx_len;
}
