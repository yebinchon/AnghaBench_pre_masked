
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_ts {int cur_plate; int ts_pressure; void* ts_x_pos; void* ts_y_pos; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;





 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mxs_lradc_ts*) ;
 int FUNC_1 (struct mxs_lradc_ts*) ;
 int FUNC_2 (struct mxs_lradc_ts*,int) ;
 int FUNC_3 (struct mxs_lradc_ts*) ;
 int FUNC_4 (struct mxs_lradc_ts*) ;
 int FUNC_5 (struct mxs_lradc_ts*,int ,int ) ;
 int FUNC_6 (struct mxs_lradc_ts*) ;
 void* FUNC_7 (struct mxs_lradc_ts*,int ) ;
 int FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct mxs_lradc_ts *VAR_5)
{
 switch (VAR_5->cur_plate) {
 case 128:
  if (FUNC_0(VAR_5))
   FUNC_6(VAR_5);
  FUNC_8(VAR_1,
         VAR_5->base + VAR_0 + VAR_2);
  return;

 case 129:
  VAR_5->ts_y_pos =
      FUNC_7(VAR_5, VAR_3);
  FUNC_4(VAR_5);
  return;

 case 130:
  VAR_5->ts_x_pos =
      FUNC_7(VAR_5, VAR_3);
  FUNC_3(VAR_5);
  return;

 case 132:
  VAR_5->ts_pressure =
      FUNC_5(VAR_5,
            VAR_4,
            VAR_3);
  FUNC_1(VAR_5);
  return;

 case 131:
  FUNC_2(VAR_5, 1);
  break;
 }
}
