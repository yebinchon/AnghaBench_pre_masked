
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_lradc_ts {int ts_input; int ts_pressure; int ts_y_pos; int ts_x_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mxs_lradc_ts *VAR_4)
{
 FUNC_0(VAR_4->ts_input, VAR_1, VAR_4->ts_x_pos);
 FUNC_0(VAR_4->ts_input, VAR_2, VAR_4->ts_y_pos);
 FUNC_0(VAR_4->ts_input, VAR_0, VAR_4->ts_pressure);
 FUNC_1(VAR_4->ts_input, VAR_3, 1);
 FUNC_2(VAR_4->ts_input);
}
