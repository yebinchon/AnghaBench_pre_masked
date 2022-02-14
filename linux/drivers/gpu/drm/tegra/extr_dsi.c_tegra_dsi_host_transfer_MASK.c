
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct tegra_dsi {int video_fifo_depth; int host_fifo_depth; int dev; } ;
struct mipi_dsi_packet {int* header; int size; int payload_length; int payload; } ;
struct mipi_dsi_msg {int flags; scalar_t__ rx_len; scalar_t__ rx_buf; } ;
struct mipi_dsi_host {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,char*,size_t) ;
 struct tegra_dsi* FUNC_2 (struct mipi_dsi_host*) ;
 size_t FUNC_3 (struct mipi_dsi_packet*,struct mipi_dsi_msg const*) ;
 size_t FUNC_4 (struct tegra_dsi*,struct mipi_dsi_msg const*,size_t) ;
 int FUNC_5 (struct tegra_dsi*,int ) ;
 size_t FUNC_6 (struct tegra_dsi*,int) ;
 size_t FUNC_7 (struct tegra_dsi*,int) ;
 int FUNC_8 (struct tegra_dsi*,int,int ) ;
 int FUNC_9 (struct tegra_dsi*,int ,int ,int) ;
 int FUNC_10 (int,int) ;

__attribute__((used)) static ssize_t FUNC_11(struct mipi_dsi_host *VAR_21,
           const struct mipi_dsi_msg *VAR_22)
{
 struct tegra_dsi *VAR_23 = FUNC_2(VAR_21);
 struct mipi_dsi_packet VAR_24;
 const u8 *VAR_25;
 size_t VAR_26;
 ssize_t VAR_27;
 u32 VAR_28;

 VAR_27 = FUNC_3(&VAR_24, VAR_22);
 if (VAR_27 < 0)
  return VAR_27;

 VAR_25 = VAR_24.header;


 if (VAR_24.size > VAR_23->video_fifo_depth * 4)
  return -VAR_18;


 VAR_28 = FUNC_5(VAR_23, VAR_14);
 if (VAR_28 & (VAR_16 | VAR_15)) {
  VAR_28 = VAR_6;
  FUNC_8(VAR_23, VAR_28, VAR_2);
  FUNC_10(10, 20);
 }

 VAR_28 = FUNC_5(VAR_23, VAR_11);
 VAR_28 |= VAR_12;
 FUNC_8(VAR_23, VAR_28, VAR_11);

 FUNC_10(5000, 10000);

 VAR_28 = VAR_3 | VAR_10 |
  VAR_4 | VAR_5;

 if ((VAR_22->flags & VAR_20) == 0)
  VAR_28 |= VAR_8;





 if (VAR_24.size > VAR_23->host_fifo_depth * 4)
  VAR_28 |= VAR_7;

 FUNC_8(VAR_23, VAR_28, VAR_2);





 if ((VAR_22->flags & VAR_19) ||
     (VAR_22->rx_buf && VAR_22->rx_len > 0)) {
  VAR_28 = FUNC_5(VAR_23, VAR_2);
  VAR_28 |= VAR_9;
  FUNC_8(VAR_23, VAR_28, VAR_2);
 }

 VAR_28 = FUNC_0(0) | VAR_1;
 FUNC_8(VAR_23, VAR_28, VAR_0);


 VAR_28 = VAR_25[2] << 16 | VAR_25[1] << 8 | VAR_25[0];
 FUNC_8(VAR_23, VAR_28, VAR_17);


 if (VAR_24.payload_length > 0)
  FUNC_9(VAR_23, VAR_17, VAR_24.payload,
      VAR_24.payload_length);

 VAR_27 = FUNC_6(VAR_23, 250);
 if (VAR_27 < 0)
  return VAR_27;

 if ((VAR_22->flags & VAR_19) ||
     (VAR_22->rx_buf && VAR_22->rx_len > 0)) {
  VAR_27 = FUNC_7(VAR_23, 250);
  if (VAR_27 < 0)
   return VAR_27;

  VAR_26 = VAR_27;

  VAR_28 = FUNC_5(VAR_23, VAR_13);
  switch (VAR_28) {
  case 0x84:



   break;

  case 0x87:



   break;

  default:
   FUNC_1(VAR_23->dev, "unknown status: %08x\n", VAR_28);
   break;
  }

  if (VAR_26 > 1) {
   VAR_27 = FUNC_4(VAR_23, VAR_22, VAR_26);
   if (VAR_27 < 0)
    FUNC_1(VAR_23->dev,
     "failed to parse response: %zd\n",
     VAR_27);
   else {




    VAR_26 = VAR_27;
   }
  }
 } else {




  VAR_26 = 4 + VAR_24.payload_length;
 }

 return VAR_26;
}
