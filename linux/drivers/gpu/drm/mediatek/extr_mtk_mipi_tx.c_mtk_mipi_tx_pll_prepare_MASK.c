
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct mtk_mipi_tx {int data_rate; TYPE_1__* driver_data; scalar_t__ regs; int dev; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int mppll_preserve; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct mtk_mipi_tx*,int ,int) ;
 struct mtk_mipi_tx* FUNC_3 (struct clk_hw*) ;
 int FUNC_4 (struct mtk_mipi_tx*,int ,int) ;
 int FUNC_5 (struct mtk_mipi_tx*,int ,int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct clk_hw *VAR_25)
{
 struct mtk_mipi_tx *VAR_26 = FUNC_3(VAR_25);
 u8 VAR_27, VAR_28, VAR_29;
 u64 VAR_30;

 FUNC_0(VAR_26->dev, "prepare: %u Hz\n", VAR_26->data_rate);

 if (VAR_26->data_rate >= 500000000) {
  VAR_27 = 1;
  VAR_28 = 0;
  VAR_29 = 0;
 } else if (VAR_26->data_rate >= 250000000) {
  VAR_27 = 2;
  VAR_28 = 1;
  VAR_29 = 0;
 } else if (VAR_26->data_rate >= 125000000) {
  VAR_27 = 4;
  VAR_28 = 2;
  VAR_29 = 0;
 } else if (VAR_26->data_rate > 62000000) {
  VAR_27 = 8;
  VAR_28 = 2;
  VAR_29 = 1;
 } else if (VAR_26->data_rate >= 50000000) {
  VAR_27 = 16;
  VAR_28 = 2;
  VAR_29 = 2;
 } else {
  return -VAR_0;
 }

 FUNC_5(VAR_26, VAR_1,
    VAR_24 |
    VAR_9 | VAR_10,
    (4 << 20) | (4 << 17) | (4 << 14) |
    (4 << 11) | (4 << 8) | (4 << 5) |
    VAR_9 | VAR_10);

 FUNC_6(30, 100);

 FUNC_5(VAR_26, VAR_8,
    VAR_14 | VAR_13,
    (8 << 4) | VAR_13);

 FUNC_4(VAR_26, VAR_2,
        VAR_11 | VAR_12);

 FUNC_5(VAR_26, VAR_6,
    VAR_20 |
    VAR_19,
    VAR_20);

 FUNC_2(VAR_26, VAR_3,
          VAR_15);

 FUNC_5(VAR_26, VAR_3,
    VAR_22 | VAR_23 |
    VAR_16,
    (VAR_28 << 3) | (VAR_29 << 5));
 VAR_30 = FUNC_1(((u64)VAR_26->data_rate * 2 * VAR_27) << 24,
        26000000);
 FUNC_7(VAR_30, VAR_26->regs + VAR_5);

 FUNC_4(VAR_26, VAR_4,
        VAR_18);

 FUNC_4(VAR_26, VAR_3, VAR_15);

 FUNC_6(20, 100);

 FUNC_2(VAR_26, VAR_4,
          VAR_21);

 FUNC_5(VAR_26, VAR_7,
    VAR_17,
    VAR_26->driver_data->mppll_preserve);

 return 0;
}
