
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct input_dev {int dummy; } ;
struct cyapa_pip_report_data {int* report_head; } ;
struct cyapa {struct input_dev* input; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;

__attribute__((used)) static void FUNC_2(struct cyapa *VAR_3,
  const struct cyapa_pip_report_data *VAR_4)
{
 struct input_dev *VAR_5 = VAR_3->input;
 u8 VAR_6 = VAR_4->report_head[VAR_2] &
   VAR_1;

 FUNC_0(VAR_5, VAR_0, VAR_6);
 FUNC_1(VAR_5);
}
