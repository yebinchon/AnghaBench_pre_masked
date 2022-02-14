
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct cyapa_pip_report_data {unsigned int* report_head; int * touch_records; } ;
struct cyapa {struct input_dev* input; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cyapa*,int *) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*) ;

__attribute__((used)) static void FUNC_3(struct cyapa *VAR_2,
  const struct cyapa_pip_report_data *VAR_3)
{
 struct input_dev *VAR_4 = VAR_2->input;
 unsigned int VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->report_head[VAR_1] &
   VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
  FUNC_0(VAR_2,
   &VAR_3->touch_records[VAR_6]);

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);
}
