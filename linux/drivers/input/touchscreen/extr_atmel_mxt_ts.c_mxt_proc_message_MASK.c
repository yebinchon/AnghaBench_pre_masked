
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct mxt_data {scalar_t__ T6_reportid; scalar_t__ T9_reportid_min; scalar_t__ T9_reportid_max; scalar_t__ T100_reportid_min; scalar_t__ T100_reportid_max; scalar_t__ T19_reportid; int update_input; int input_dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mxt_data*,scalar_t__*) ;
 int FUNC_1 (struct mxt_data*,scalar_t__*) ;
 int FUNC_2 (struct mxt_data*,scalar_t__*) ;
 int FUNC_3 (struct mxt_data*,scalar_t__*) ;
 int FUNC_4 (struct mxt_data*,scalar_t__*) ;

__attribute__((used)) static int FUNC_5(struct mxt_data *VAR_1, u8 *VAR_2)
{
 u8 VAR_3 = VAR_2[0];

 if (VAR_3 == VAR_0)
  return 0;

 if (VAR_3 == VAR_1->T6_reportid) {
  FUNC_3(VAR_1, VAR_2);
 } else if (!VAR_1->input_dev) {




  FUNC_0(VAR_1, VAR_2);
 } else if (VAR_3 >= VAR_1->T9_reportid_min &&
     VAR_3 <= VAR_1->T9_reportid_max) {
  FUNC_4(VAR_1, VAR_2);
 } else if (VAR_3 >= VAR_1->T100_reportid_min &&
     VAR_3 <= VAR_1->T100_reportid_max) {
  FUNC_2(VAR_1, VAR_2);
 } else if (VAR_3 == VAR_1->T19_reportid) {
  FUNC_1(VAR_1, VAR_2);
  VAR_1->update_input = 1;
 } else {
  FUNC_0(VAR_1, VAR_2);
 }

 return 1;
}
