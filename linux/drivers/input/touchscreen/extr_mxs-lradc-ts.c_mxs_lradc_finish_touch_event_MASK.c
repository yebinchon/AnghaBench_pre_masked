
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_ts {int ts_valid; scalar_t__ base; int cur_plate; int ts_input; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct mxs_lradc_ts*) ;
 int FUNC_6 (struct mxs_lradc_ts*) ;
 int FUNC_7 (struct mxs_lradc_ts*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct mxs_lradc_ts *VAR_8, bool VAR_9)
{

 if (VAR_9 && FUNC_5(VAR_8)) {
  VAR_8->ts_valid = 1;
  FUNC_7(VAR_8);
 }


 if (FUNC_5(VAR_8)) {
  FUNC_6(VAR_8);
  return;
 }

 if (VAR_8->ts_valid) {

  VAR_8->ts_valid = 0;
  FUNC_3(VAR_8->ts_input, VAR_0, 0);
  FUNC_4(VAR_8->ts_input);
 }


 VAR_8->cur_plate = VAR_4;
 FUNC_8(0, VAR_8->base + FUNC_2(2));
 FUNC_8(0, VAR_8->base + FUNC_2(3));
 FUNC_8(VAR_2 |
        FUNC_1(VAR_7) |
        FUNC_0(VAR_7),
        VAR_8->base + VAR_1 + VAR_5);
 FUNC_8(VAR_3,
        VAR_8->base + VAR_1 + VAR_6);
}
