
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct cyapa_pip_report_data {int* report_head; } ;
struct cyapa {int btn_capability; struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct cyapa *VAR_9,
  const struct cyapa_pip_report_data *VAR_10)
{
 struct input_dev *VAR_11 = VAR_9->input;
 u8 VAR_12 = VAR_10->report_head[VAR_8];

 VAR_12 = (VAR_12 << VAR_4) & VAR_3;

 if (VAR_9->btn_capability & VAR_5) {
  FUNC_0(VAR_11, VAR_0,
   !!(VAR_12 & VAR_5));
 }
 if (VAR_9->btn_capability & VAR_6) {
  FUNC_0(VAR_11, VAR_1,
   !!(VAR_12 & VAR_6));
 }
 if (VAR_9->btn_capability & VAR_7) {
  FUNC_0(VAR_11, VAR_2,
   !!(VAR_12 & VAR_7));
 }

 FUNC_1(VAR_11);
}
