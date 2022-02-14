
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct vc4_dsi {int xfer_result; TYPE_1__* pdev; int xfer_completion; } ;
struct mipi_dsi_packet {int* header; int payload_length; int* payload; } ;
struct mipi_dsi_msg {int rx_len; int flags; int* rx_buf; int type; } ;
struct mipi_dsi_host {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int const) ;
 int FUNC_4 (int ) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *,char*,...) ;
 struct vc4_dsi* FUNC_9 (struct mipi_dsi_host*) ;
 int FUNC_10 (struct mipi_dsi_packet*,struct mipi_dsi_msg const*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *,int ) ;

__attribute__((used)) static ssize_t FUNC_16(struct mipi_dsi_host *VAR_35,
         const struct mipi_dsi_msg *VAR_36)
{
 struct vc4_dsi *VAR_37 = FUNC_9(VAR_35);
 struct mipi_dsi_packet VAR_38;
 u32 VAR_39 = 0, VAR_40 = 0;
 int VAR_41, VAR_42;
 bool VAR_43 = FUNC_11(VAR_36->type);
 u32 VAR_44 = 0, VAR_45 = 0;

 FUNC_10(&VAR_38, VAR_36);

 VAR_39 |= FUNC_6(VAR_38.header[0], VAR_23);
 VAR_39 |= FUNC_6(VAR_38.header[1] |
         (VAR_38.header[2] << 8),
         VAR_24);
 if (VAR_43) {
  if (VAR_38.payload_length <= 16) {
   VAR_44 = VAR_38.payload_length;
   VAR_45 = 0;
  } else {
   VAR_44 = (VAR_38.payload_length %
     VAR_7);
   VAR_45 = ((VAR_38.payload_length - VAR_44) /
     VAR_7);
  }

  FUNC_7(VAR_45 >= VAR_6);

  VAR_39 |= FUNC_6(VAR_44, VAR_22);
 }

 if (VAR_36->rx_len) {
  VAR_40 |= FUNC_6(VAR_13,
          VAR_12);
 } else {
  VAR_40 |= FUNC_6(VAR_14,
          VAR_12);
 }

 for (VAR_41 = 0; VAR_41 < VAR_44; VAR_41++)
  FUNC_3(VAR_33, VAR_38.payload[VAR_41]);
 for (VAR_41 = 0; VAR_41 < VAR_45; VAR_41++) {
  const u8 *VAR_46 = VAR_38.payload + VAR_44 + VAR_41 * 4;

  FUNC_3(VAR_34,
          VAR_46[0] |
          VAR_46[1] << 8 |
          VAR_46[2] << 16 |
          VAR_46[3] << 24);
 }

 if (VAR_36->flags & VAR_29)
  VAR_40 |= VAR_16;
 if (VAR_43)
  VAR_40 |= VAR_18;




 VAR_40 |= FUNC_6(1, VAR_17);

 VAR_40 |= VAR_15;
 if (VAR_45) {
  VAR_40 |= FUNC_6(VAR_20,
          VAR_19);
 } else {
  VAR_40 |= FUNC_6(VAR_21,
          VAR_19);
 }


 VAR_37->xfer_result = 0;
 FUNC_13(&VAR_37->xfer_completion);
 FUNC_3(VAR_28, VAR_4 | VAR_3);
 if (VAR_36->rx_len) {
  FUNC_3(VAR_27, (VAR_2 |
     VAR_3));
 } else {
  FUNC_3(VAR_27, (VAR_2 |
     VAR_4));
 }


 FUNC_3(VAR_32, VAR_39);
 FUNC_3(VAR_31, VAR_40);

 if (!FUNC_15(&VAR_37->xfer_completion,
      FUNC_12(1000))) {
  FUNC_8(&VAR_37->pdev->dev, "transfer interrupt wait timeout");
  FUNC_8(&VAR_37->pdev->dev, "instat: 0x%08x\n",
   FUNC_2(VAR_28));
  VAR_42 = -VAR_26;
 } else {
  VAR_42 = VAR_37->xfer_result;
 }

 FUNC_3(VAR_27, VAR_2);

 if (VAR_42)
  goto reset_fifo_and_return;

 if (VAR_42 == 0 && VAR_36->rx_len) {
  u32 VAR_47 = FUNC_2(VAR_30);
  u8 *VAR_48 = VAR_36->rx_buf;

  if (VAR_47 & VAR_9) {
   u32 VAR_49 = FUNC_5(VAR_47,
        VAR_8);

   if (VAR_49 != VAR_36->rx_len) {
    FUNC_0("DSI returned %db, expecting %db\n",
       VAR_49, (int)VAR_36->rx_len);
    VAR_42 = -VAR_25;
    goto reset_fifo_and_return;
   }

   for (VAR_41 = 0; VAR_41 < VAR_36->rx_len; VAR_41++)
    VAR_48[VAR_41] = FUNC_4(VAR_5);
  } else {


   VAR_48[0] = FUNC_5(VAR_47,
        VAR_10);
   if (VAR_36->rx_len > 1) {
    VAR_48[1] = FUNC_5(VAR_47,
         VAR_11);
   }
  }
 }

 return VAR_42;

reset_fifo_and_return:
 FUNC_0("DSI transfer failed, resetting: %d\n", VAR_42);

 FUNC_3(VAR_31, FUNC_2(VAR_31) & ~VAR_15);
 FUNC_14(1);
 FUNC_3(VAR_0,
         FUNC_2(VAR_0) |
         FUNC_1(VAR_1));

 FUNC_3(VAR_31, 0);
 FUNC_3(VAR_27, VAR_2);
 return VAR_42;
}
