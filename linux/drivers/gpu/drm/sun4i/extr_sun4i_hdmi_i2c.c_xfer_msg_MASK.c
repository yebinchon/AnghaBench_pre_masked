
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_hdmi {int field_ddc_int_status; int field_ddc_start; int field_ddc_cmd; int field_ddc_byte_count; int field_ddc_fifo_clear; int field_ddc_fifo_rx_thres; TYPE_1__* variant; int field_ddc_fifo_tx_thres; int field_ddc_slave_addr; int field_ddc_addr_reg; scalar_t__ base; } ;
struct i2c_msg {int flags; int addr; int len; scalar_t__ buf; } ;
struct TYPE_2__ {scalar_t__ ddc_fifo_thres_incl; scalar_t__ ddc_fifo_has_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct sun4i_hdmi*,scalar_t__,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int*) ;
 scalar_t__ FUNC_4 (int ,int,int,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct sun4i_hdmi *VAR_12, struct i2c_msg *VAR_13)
{
 int VAR_14, VAR_15;
 u32 VAR_16;


 if (VAR_12->variant->ddc_fifo_has_dir) {
  VAR_16 = FUNC_1(VAR_12->base + VAR_8);
  VAR_16 &= ~VAR_5;
  VAR_16 |= (VAR_13->flags & VAR_1) ?
         VAR_6 :
         VAR_7;
  FUNC_6(VAR_16, VAR_12->base + VAR_8);
 }


 FUNC_5(VAR_12->field_ddc_addr_reg, 0);


 FUNC_5(VAR_12->field_ddc_slave_addr, VAR_13->addr);







 FUNC_5(VAR_12->field_ddc_fifo_tx_thres,
      VAR_12->variant->ddc_fifo_thres_incl ? 0 : 1);
 FUNC_5(VAR_12->field_ddc_fifo_rx_thres, VAR_2);
 FUNC_5(VAR_12->field_ddc_fifo_clear, 1);
 if (FUNC_4(VAR_12->field_ddc_fifo_clear,
        VAR_16, !VAR_16, 100, 2000))
  return -VAR_0;


 FUNC_5(VAR_12->field_ddc_byte_count, VAR_13->len);


 FUNC_5(VAR_12->field_ddc_cmd,
      VAR_13->flags & VAR_1 ?
      VAR_3 :
      VAR_4);


 FUNC_2(VAR_12->field_ddc_int_status,
     VAR_9 |
     VAR_10 |
     VAR_11);


 FUNC_5(VAR_12->field_ddc_start, 1);


 for (VAR_14 = 0; VAR_14 < VAR_13->len; VAR_14 += VAR_15) {
  VAR_15 = FUNC_0(VAR_12, VAR_13->buf + VAR_14, VAR_13->len - VAR_14,
        VAR_13->flags & VAR_1);
  if (VAR_15 <= 0)
   return VAR_15;
 }


 if (FUNC_4(VAR_12->field_ddc_start,
        VAR_16, !VAR_16, 100, 100000))
  return -VAR_0;


 FUNC_3(VAR_12->field_ddc_int_status, &VAR_16);
 if ((VAR_16 & VAR_9) ||
     !(VAR_16 & VAR_11)) {
  return -VAR_0;
 }

 return 0;
}
