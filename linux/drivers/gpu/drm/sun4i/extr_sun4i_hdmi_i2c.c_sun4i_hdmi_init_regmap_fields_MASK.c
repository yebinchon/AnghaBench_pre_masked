
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_hdmi {void* field_ddc_sck_en; TYPE_1__* variant; int regmap; int dev; void* field_ddc_sda_en; void* field_ddc_cmd; void* field_ddc_byte_count; void* field_ddc_fifo_tx_thres; void* field_ddc_fifo_rx_thres; void* field_ddc_fifo_clear; void* field_ddc_int_status; void* field_ddc_int_mask; void* field_ddc_slave_addr; void* field_ddc_addr_reg; void* field_ddc_reset; void* field_ddc_start; void* field_ddc_en; } ;
struct TYPE_2__ {int field_ddc_sck_en; int field_ddc_sda_en; int field_ddc_cmd; int field_ddc_byte_count; int field_ddc_fifo_tx_thres; int field_ddc_fifo_rx_thres; int field_ddc_fifo_clear; int field_ddc_int_status; int field_ddc_int_mask; int field_ddc_slave_addr; int field_ddc_addr_reg; int field_ddc_reset; int field_ddc_start; int field_ddc_en; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sun4i_hdmi *VAR_0)
{
 VAR_0->field_ddc_en =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_en);
 if (FUNC_0(VAR_0->field_ddc_en))
  return FUNC_1(VAR_0->field_ddc_en);

 VAR_0->field_ddc_start =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_start);
 if (FUNC_0(VAR_0->field_ddc_start))
  return FUNC_1(VAR_0->field_ddc_start);

 VAR_0->field_ddc_reset =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_reset);
 if (FUNC_0(VAR_0->field_ddc_reset))
  return FUNC_1(VAR_0->field_ddc_reset);

 VAR_0->field_ddc_addr_reg =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_addr_reg);
 if (FUNC_0(VAR_0->field_ddc_addr_reg))
  return FUNC_1(VAR_0->field_ddc_addr_reg);

 VAR_0->field_ddc_slave_addr =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_slave_addr);
 if (FUNC_0(VAR_0->field_ddc_slave_addr))
  return FUNC_1(VAR_0->field_ddc_slave_addr);

 VAR_0->field_ddc_int_mask =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_int_mask);
 if (FUNC_0(VAR_0->field_ddc_int_mask))
  return FUNC_1(VAR_0->field_ddc_int_mask);

 VAR_0->field_ddc_int_status =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_int_status);
 if (FUNC_0(VAR_0->field_ddc_int_status))
  return FUNC_1(VAR_0->field_ddc_int_status);

 VAR_0->field_ddc_fifo_clear =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_fifo_clear);
 if (FUNC_0(VAR_0->field_ddc_fifo_clear))
  return FUNC_1(VAR_0->field_ddc_fifo_clear);

 VAR_0->field_ddc_fifo_rx_thres =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_fifo_rx_thres);
 if (FUNC_0(VAR_0->field_ddc_fifo_rx_thres))
  return FUNC_1(VAR_0->field_ddc_fifo_rx_thres);

 VAR_0->field_ddc_fifo_tx_thres =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_fifo_tx_thres);
 if (FUNC_0(VAR_0->field_ddc_fifo_tx_thres))
  return FUNC_1(VAR_0->field_ddc_fifo_tx_thres);

 VAR_0->field_ddc_byte_count =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_byte_count);
 if (FUNC_0(VAR_0->field_ddc_byte_count))
  return FUNC_1(VAR_0->field_ddc_byte_count);

 VAR_0->field_ddc_cmd =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_cmd);
 if (FUNC_0(VAR_0->field_ddc_cmd))
  return FUNC_1(VAR_0->field_ddc_cmd);

 VAR_0->field_ddc_sda_en =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_sda_en);
 if (FUNC_0(VAR_0->field_ddc_sda_en))
  return FUNC_1(VAR_0->field_ddc_sda_en);

 VAR_0->field_ddc_sck_en =
  FUNC_2(VAR_0->dev, VAR_0->regmap,
     VAR_0->variant->field_ddc_sck_en);
 if (FUNC_0(VAR_0->field_ddc_sck_en))
  return FUNC_1(VAR_0->field_ddc_sck_en);

 return 0;
}
