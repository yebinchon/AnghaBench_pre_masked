
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct input_dev {scalar_t__ users; } ;
struct cyapa_pip_report_data {int dummy; } ;
struct cyapa_pip_cmd_states {scalar_t__ empty_buf; } ;
struct TYPE_2__ {struct cyapa_pip_cmd_states pip; } ;
struct cyapa {scalar_t__ operational; TYPE_1__ cmd_states; struct input_dev* input; } ;
typedef enum cyapa_pm_stage { ____Placeholder_cyapa_pm_stage } cyapa_pm_stage ;
typedef scalar_t__ (* cb_sort ) (struct cyapa*,scalar_t__,int) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cyapa*) ;
 int FUNC_1 (struct cyapa*,scalar_t__,int) ;
 int FUNC_2 (struct cyapa*,struct cyapa_pip_report_data*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (int,int) ;

int FUNC_6(struct cyapa *VAR_5,
  u8 *VAR_6, int *VAR_7, cb_sort VAR_8)
{
 struct input_dev *VAR_9 = VAR_5->input;
 struct cyapa_pip_cmd_states *VAR_10 = &VAR_5->cmd_states.pip;
 enum cyapa_pm_stage VAR_11 = FUNC_0(VAR_5);
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_15 = 0;
 if (VAR_7) {
  VAR_15 = (*VAR_7 < VAR_2) ?
    *VAR_7 : VAR_2;
  *VAR_7 = 0;
 }

 VAR_13 = 8;
 VAR_14 = 0;
 do {
  if (VAR_14 > 5)
   return 0;

  VAR_16 = FUNC_1(VAR_5, VAR_10->empty_buf,
    VAR_4);
  if (VAR_16 < 0)
   return VAR_16;

  VAR_12 = FUNC_3(VAR_10->empty_buf);
  if (VAR_12 == VAR_4) {
   VAR_14++;
   continue;
  } else if (VAR_12 > VAR_2) {

   return -VAR_3;
  } else if (VAR_12 == 0) {

   VAR_12 = VAR_4;
   if (VAR_6 && VAR_15 && VAR_8 &&
    VAR_8(VAR_5, VAR_10->empty_buf, VAR_12)) {
    VAR_12 = FUNC_5(VAR_15, VAR_12);
    FUNC_4(VAR_6, VAR_10->empty_buf, VAR_12);
    *VAR_7 = VAR_12;

    return 0;
   }
   continue;
  }

  VAR_16 = FUNC_1(VAR_5, VAR_10->empty_buf, VAR_12);
  if (VAR_16 < 0)
   return VAR_16;

  VAR_13--;
  VAR_14 = 0;
  VAR_12 = FUNC_3(VAR_10->empty_buf);
  if (VAR_12 <= VAR_4) {
   VAR_14++;
  } else if (VAR_6 && VAR_15 && VAR_8 &&
   VAR_8(VAR_5, VAR_10->empty_buf, VAR_12)) {
   VAR_12 = FUNC_5(VAR_15, VAR_12);
   FUNC_4(VAR_6, VAR_10->empty_buf, VAR_12);
   *VAR_7 = VAR_12;

   return 0;
  } else if (VAR_5->operational && VAR_9 && VAR_9->users &&
      (VAR_11 == VAR_0 ||
       VAR_11 == VAR_1)) {

   FUNC_2(VAR_5,
          (struct cyapa_pip_report_data *)VAR_10->empty_buf);
  }

  VAR_16 = -VAR_3;
 } while (VAR_13);

 return VAR_16;
}
