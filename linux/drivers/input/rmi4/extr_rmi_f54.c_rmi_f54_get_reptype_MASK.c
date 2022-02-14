
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f54_data {int* inputs; } ;
typedef enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;


 unsigned int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static enum rmi_f54_report_type FUNC_0(struct f54_data *VAR_2,
      unsigned int VAR_3)
{
 if (VAR_3 >= VAR_0)
  return VAR_1;

 return VAR_2->inputs[VAR_3];
}
