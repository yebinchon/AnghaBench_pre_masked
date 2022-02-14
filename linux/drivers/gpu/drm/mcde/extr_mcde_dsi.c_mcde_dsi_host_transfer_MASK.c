
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u32 ;
struct mipi_dsi_msg {int* tx_buf; size_t tx_len; size_t rx_len; size_t type; int* rx_buf; int channel; } ;
struct mipi_dsi_host {int dummy; } ;
struct mcde_dsi {scalar_t__ regs; int dev; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 scalar_t__ VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_0 (size_t) ;
 int FUNC_1 (int ,char*,int ,size_t,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 struct mcde_dsi* FUNC_3 (struct mipi_dsi_host*) ;
 scalar_t__ FUNC_4 (size_t) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (size_t const,size_t const) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_8(struct mipi_dsi_host *VAR_27,
          const struct mipi_dsi_msg *VAR_28)
{
 struct mcde_dsi *VAR_29 = FUNC_3(VAR_27);
 const u32 VAR_30 = 10;
 const u8 *VAR_31 = VAR_28->tx_buf;
 u32 VAR_32;
 size_t VAR_33 = VAR_28->tx_len;
 size_t VAR_34 = VAR_28->rx_len;
 u32 VAR_35;
 int VAR_36;
 int VAR_37;

 if (VAR_33 > 16) {
  FUNC_2(VAR_29->dev,
   "dunno how to write more than 16 bytes yet\n");
  return -VAR_25;
 }
 if (VAR_34 > 4) {
  FUNC_2(VAR_29->dev,
   "dunno how to read more than 4 bytes yet\n");
  return -VAR_25;
 }

 FUNC_1(VAR_29->dev,
  "message to channel %d, write %zd bytes read %zd bytes\n",
  VAR_28->channel, VAR_33, VAR_34);


 if (FUNC_0(VAR_28->type))

  VAR_35 = VAR_6;
 else
  VAR_35 = VAR_7;






 if (FUNC_4(VAR_28->type))
  VAR_35 |= VAR_4;
 VAR_35 |= 0 << VAR_3;
 VAR_35 |= VAR_33 << VAR_8;
 VAR_35 |= VAR_5;
 VAR_35 |= VAR_28->type << VAR_2;
 FUNC_7(VAR_35, VAR_29->regs + VAR_1);


 if (VAR_33 > 0) {
  VAR_35 = 0;
  for (VAR_37 = 0; VAR_37 < 4 && VAR_37 < VAR_33; VAR_37++)
   VAR_35 |= VAR_31[VAR_37] << (VAR_37 & 3) * 8;
 }
 FUNC_7(VAR_35, VAR_29->regs + VAR_21);
 if (VAR_33 > 4) {
  VAR_35 = 0;
  for (VAR_37 = 0; VAR_37 < 4 && (VAR_37 + 4) < VAR_33; VAR_37++)
   VAR_35 |= VAR_31[VAR_37 + 4] << (VAR_37 & 3) * 8;
  FUNC_7(VAR_35, VAR_29->regs + VAR_22);
 }
 if (VAR_33 > 8) {
  VAR_35 = 0;
  for (VAR_37 = 0; VAR_37 < 4 && (VAR_37 + 8) < VAR_33; VAR_37++)
   VAR_35 |= VAR_31[VAR_37 + 8] << (VAR_37 & 3) * 8;
  FUNC_7(VAR_35, VAR_29->regs + VAR_23);
 }
 if (VAR_33 > 12) {
  VAR_35 = 0;
  for (VAR_37 = 0; VAR_37 < 4 && (VAR_37 + 12) < VAR_33; VAR_37++)
   VAR_35 |= VAR_31[VAR_37 + 12] << (VAR_37 & 3) * 8;
  FUNC_7(VAR_35, VAR_29->regs + VAR_24);
 }

 FUNC_7(~0, VAR_29->regs + VAR_17);
 FUNC_7(~0, VAR_29->regs + VAR_0);

 FUNC_7(1, VAR_29->regs + VAR_13);

 VAR_32 = 1000 * 1000 / VAR_30;
 if (FUNC_0(VAR_28->type)) {

  while (!(FUNC_5(VAR_29->regs + VAR_14) &
    (VAR_18 |
     VAR_19))
         && --VAR_32)
   FUNC_6(VAR_30, (VAR_30 * 3) / 2);
  if (!VAR_32) {
   FUNC_2(VAR_29->dev, "DSI read timeout!\n");
   return -VAR_26;
  }
 } else {

  while (!(FUNC_5(VAR_29->regs + VAR_14) &
    VAR_20)
         && --VAR_32)
   FUNC_6(VAR_30, (VAR_30 * 3) / 2);

  if (!VAR_32) {
   FUNC_2(VAR_29->dev, "DSI write timeout!\n");
   return -VAR_26;
  }
 }

 VAR_35 = FUNC_5(VAR_29->regs + VAR_14);
 if (VAR_35 & VAR_19) {
  FUNC_2(VAR_29->dev, "read completed with error\n");
  FUNC_7(1, VAR_29->regs + VAR_10);
  return -VAR_25;
 }
 if (VAR_35 & VAR_15) {
  VAR_35 >>= VAR_16;
  FUNC_2(VAR_29->dev, "error during transmission: %04x\n",
   VAR_35);
  return -VAR_25;
 }

 if (!FUNC_0(VAR_28->type)) {

  VAR_36 = VAR_33;
 } else {

  u32 VAR_38;
  u32 VAR_39;
  u8 *VAR_40 = VAR_28->rx_buf;

  VAR_38 = FUNC_5(VAR_29->regs + VAR_11);
  VAR_38 &= VAR_12;
  VAR_39 = FUNC_5(VAR_29->regs + VAR_9);
  if (VAR_38 < VAR_34) {
   FUNC_2(VAR_29->dev, "read error, requested %zd got %d\n",
    VAR_34, VAR_38);
   return -VAR_25;
  }

  for (VAR_37 = 0; VAR_37 < 4 && VAR_37 < VAR_34; VAR_37++)
   VAR_40[VAR_37] = (VAR_39 >> (VAR_37 * 8)) & 0xff;
  VAR_36 = VAR_38;
 }

 FUNC_7(~0, VAR_29->regs + VAR_17);
 FUNC_7(~0, VAR_29->regs + VAR_0);

 return VAR_36;
}
