
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sun4i_hdmi {int ddc_clk; int field_ddc_sda_en; int field_ddc_sck_en; int field_ddc_reset; int field_ddc_en; } ;
struct i2c_msg {scalar_t__ len; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 struct sun4i_hdmi* FUNC_3 (struct i2c_adapter*) ;
 scalar_t__ FUNC_4 (int ,int ,int,int,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct sun4i_hdmi*,struct i2c_msg*) ;

__attribute__((used)) static int FUNC_7(struct i2c_adapter *VAR_3,
          struct i2c_msg *VAR_4, int VAR_5)
{
 struct sun4i_hdmi *VAR_6 = FUNC_3(VAR_3);
 u32 VAR_7;
 int VAR_8, VAR_9, VAR_10 = VAR_5;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  if (!VAR_4[VAR_9].len)
   return -VAR_0;
  if (VAR_4[VAR_9].len > VAR_2)
   return -VAR_0;
 }


 FUNC_1(VAR_6->ddc_clk);
 FUNC_2(VAR_6->ddc_clk, 100000);


 FUNC_5(VAR_6->field_ddc_en, 1);
 FUNC_5(VAR_6->field_ddc_reset, 1);
 if (FUNC_4(VAR_6->field_ddc_reset,
        VAR_7, !VAR_7, 100, 2000)) {
  FUNC_0(VAR_6->ddc_clk);
  return -VAR_1;
 }

 FUNC_5(VAR_6->field_ddc_sck_en, 1);
 FUNC_5(VAR_6->field_ddc_sda_en, 1);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = FUNC_6(VAR_6, &VAR_4[VAR_9]);
  if (VAR_8) {
   VAR_10 = VAR_8;
   break;
  }
 }

 FUNC_0(VAR_6->ddc_clk);
 return VAR_10;
}
