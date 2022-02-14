
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mipi_dsi_packet {int dummy; } ;
struct mipi_dsi_msg {int* tx_buf; int tx_len; int* rx_buf; int rx_len; int flags; int type; int channel; } ;
struct mipi_dsi_host {int dev; } ;
struct cdns_dsi {int direct_cmd_fifo_depth; int rx_fifo_depth; scalar_t__ regs; int direct_cmd_comp; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (struct cdns_dsi*) ;
 int FUNC_4 (struct mipi_dsi_packet*,struct mipi_dsi_msg const*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;
 struct cdns_dsi* FUNC_11 (struct mipi_dsi_host*) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_14(struct mipi_dsi_host *VAR_24,
     const struct mipi_dsi_msg *VAR_25)
{
 struct cdns_dsi *VAR_26 = FUNC_11(VAR_24);
 u32 VAR_27, VAR_28, VAR_29, VAR_30 = VAR_23, VAR_31 = 0;
 struct mipi_dsi_packet VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36;

 VAR_33 = FUNC_7(VAR_24->dev);
 if (VAR_33 < 0)
  return VAR_33;

 FUNC_3(VAR_26);

 VAR_33 = FUNC_4(&VAR_32, VAR_25);
 if (VAR_33)
  goto out;

 VAR_35 = VAR_25->tx_buf ? VAR_25->tx_len : 0;
 VAR_36 = VAR_25->rx_buf ? VAR_25->rx_len : 0;


 if (VAR_36 && VAR_35 > 2) {
  VAR_33 = -VAR_14;
  goto out;
 }


 if (VAR_35 > VAR_26->direct_cmd_fifo_depth) {
  VAR_33 = -VAR_14;
  goto out;
 }


 if (VAR_36 > VAR_26->rx_fifo_depth) {
  VAR_33 = -VAR_14;
  goto out;
 }

 VAR_27 = FUNC_1(VAR_35) | FUNC_2(VAR_25->channel) |
       FUNC_0(VAR_25->type);

 if (VAR_25->flags & VAR_18)
  VAR_27 |= VAR_5;

 if (FUNC_5(VAR_25->type))
  VAR_27 |= VAR_4;

 if (VAR_36) {
  VAR_27 |= VAR_19;
  VAR_30 = VAR_21 | VAR_20;
  VAR_31 = VAR_22 | VAR_2;
 } else if (VAR_25->flags & VAR_17) {
  VAR_27 |= VAR_3;
  VAR_30 = VAR_1 | VAR_0;
  VAR_31 = VAR_2;
 }

 FUNC_13(FUNC_9(VAR_26->regs + VAR_16) | VAR_31,
        VAR_26->regs + VAR_16);

 FUNC_13(VAR_27, VAR_26->regs + VAR_6);

 for (VAR_34 = 0; VAR_34 < VAR_35; VAR_34 += 4) {
  const u8 *VAR_37 = VAR_25->tx_buf;
  int VAR_38;

  VAR_29 = 0;
  for (VAR_38 = 0; VAR_38 < 4 && VAR_38 + VAR_34 < VAR_35; VAR_38++)
   VAR_29 |= (u32)VAR_37[VAR_34 + VAR_38] << (8 * VAR_38);

  FUNC_13(VAR_29, VAR_26->regs + VAR_12);
 }


 FUNC_13(VAR_30, VAR_26->regs + VAR_10);
 FUNC_13(VAR_30, VAR_26->regs + VAR_11);
 FUNC_10(&VAR_26->direct_cmd_comp);
 FUNC_13(0, VAR_26->regs + VAR_8);

 FUNC_12(&VAR_26->direct_cmd_comp,
        FUNC_6(1000));

 VAR_28 = FUNC_9(VAR_26->regs + VAR_9);
 FUNC_13(VAR_30, VAR_26->regs + VAR_10);
 FUNC_13(0, VAR_26->regs + VAR_11);

 FUNC_13(FUNC_9(VAR_26->regs + VAR_16) & ~VAR_31,
        VAR_26->regs + VAR_16);


 if (!(VAR_28 & VAR_30)) {
  VAR_33 = -VAR_15;
  goto out;
 }


 if (VAR_28 & (VAR_21 | VAR_1)) {
  VAR_33 = -VAR_13;
  goto out;
 }

 for (VAR_34 = 0; VAR_34 < VAR_36; VAR_34 += 4) {
  u8 *VAR_39 = VAR_25->rx_buf;
  int VAR_40;

  VAR_29 = FUNC_9(VAR_26->regs + VAR_7);
  for (VAR_40 = 0; VAR_40 < 4 && VAR_40 + VAR_34 < VAR_36; VAR_40++)
   VAR_39[VAR_34 + VAR_40] = VAR_29 >> (8 * VAR_40);
 }

out:
 FUNC_8(VAR_24->dev);
 return VAR_33;
}
