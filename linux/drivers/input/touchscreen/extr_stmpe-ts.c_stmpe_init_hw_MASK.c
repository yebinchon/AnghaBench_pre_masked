
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stmpe_touch {int ave_ctrl; int touch_det_delay; int settling; int fraction_z; int i_drive; struct device* dev; struct stmpe* stmpe; } ;
struct stmpe {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct stmpe*) ;
 int FUNC_8 (struct stmpe*,int) ;
 int FUNC_9 (struct stmpe*,int) ;
 int FUNC_10 (struct stmpe*,int ,int) ;
 int FUNC_11 (struct stmpe*,int ,int,int) ;

__attribute__((used)) static int FUNC_12(struct stmpe_touch *VAR_8)
{
 int VAR_9;
 u8 VAR_10, VAR_11;
 struct stmpe *VAR_12 = VAR_8->stmpe;
 struct device *VAR_13 = VAR_8->dev;

 VAR_9 = FUNC_9(VAR_12, VAR_2 | VAR_1);
 if (VAR_9) {
  FUNC_6(VAR_13, "Could not enable clock for ADC and TS\n");
  return VAR_9;
 }

 VAR_9 = FUNC_7(VAR_12);
 if (VAR_9) {
  FUNC_8(VAR_12, VAR_2 | VAR_1);
  return VAR_9;
 }

 VAR_10 = FUNC_0(VAR_8->ave_ctrl) |
    FUNC_1(VAR_8->touch_det_delay) |
    FUNC_5(VAR_8->settling);
 VAR_11 = FUNC_0(0xff) | FUNC_1(0xff) |
         FUNC_5(0xff);

 VAR_9 = FUNC_11(VAR_12, VAR_4, VAR_11, VAR_10);
 if (VAR_9) {
  FUNC_6(VAR_13, "Could not config touch\n");
  return VAR_9;
 }

 VAR_9 = FUNC_11(VAR_12, VAR_6,
   FUNC_2(0xff), FUNC_2(VAR_8->fraction_z));
 if (VAR_9) {
  FUNC_6(VAR_13, "Could not config touch\n");
  return VAR_9;
 }

 VAR_9 = FUNC_11(VAR_12, VAR_7,
   FUNC_3(0xff), FUNC_3(VAR_8->i_drive));
 if (VAR_9) {
  FUNC_6(VAR_13, "Could not config touch\n");
  return VAR_9;
 }


 VAR_9 = FUNC_10(VAR_12, VAR_3, 1);
 if (VAR_9) {
  FUNC_6(VAR_13, "Could not set FIFO\n");
  return VAR_9;
 }

 VAR_9 = FUNC_11(VAR_12, VAR_5,
   FUNC_4(0xff), FUNC_4(VAR_0));
 if (VAR_9) {
  FUNC_6(VAR_13, "Could not set mode\n");
  return VAR_9;
 }

 return 0;
}
