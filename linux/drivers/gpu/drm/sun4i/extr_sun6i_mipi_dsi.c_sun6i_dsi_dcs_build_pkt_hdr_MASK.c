
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sun6i_dsi {int dummy; } ;
struct mipi_dsi_msg {int type; int tx_len; scalar_t__ tx_buf; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(struct sun6i_dsi *VAR_1,
           const struct mipi_dsi_msg *VAR_2)
{
 u32 VAR_3 = VAR_2->type;

 if (VAR_2->type == VAR_0) {
  VAR_3 |= ((VAR_2->tx_len + 1) & 0xffff) << 8;
  VAR_3 |= (((VAR_2->tx_len + 1) >> 8) & 0xffff) << 16;
 } else {
  VAR_3 |= (((u8 *)VAR_2->tx_buf)[0] << 8);
  if (VAR_2->tx_len > 1)
   VAR_3 |= (((u8 *)VAR_2->tx_buf)[1] << 16);
 }

 VAR_3 |= FUNC_0(VAR_3) << 24;

 return VAR_3;
}
