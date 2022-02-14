
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct surface3_ts_data_pen {int dummy; } ;
struct surface3_ts_data {int pen_input_dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct surface3_ts_data*,struct surface3_ts_data_pen*) ;

__attribute__((used)) static void FUNC_2(struct surface3_ts_data *VAR_0, u8 *VAR_1)
{
 struct surface3_ts_data_pen *VAR_2;

 VAR_2 = (struct surface3_ts_data_pen *)&VAR_1[15];

 FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_0->pen_input_dev);
}
