
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int name; int type; int index; } ;
struct file {int dummy; } ;
struct f54_data {int dummy; } ;
typedef enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct f54_data*,int ) ;
 int * VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 struct f54_data* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
         struct v4l2_input *VAR_6)
{
 struct f54_data *VAR_7 = FUNC_2(VAR_4);
 enum rmi_f54_report_type VAR_8;

 VAR_8 = FUNC_0(VAR_7, VAR_6->index);
 if (VAR_8 == VAR_1)
  return -VAR_0;

 VAR_6->type = VAR_2;

 FUNC_1(VAR_6->name, VAR_3[VAR_8], sizeof(VAR_6->name));
 return 0;
}
