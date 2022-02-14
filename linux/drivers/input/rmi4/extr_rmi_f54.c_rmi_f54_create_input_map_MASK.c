
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f54_data {int* inputs; } ;
typedef enum rmi_f54_report_type { ____Placeholder_rmi_f54_report_type } rmi_f54_report_type ;


 int VAR_0 ;
 int FUNC_0 (struct f54_data*,int) ;

__attribute__((used)) static void FUNC_1(struct f54_data *VAR_1)
{
 int VAR_2 = 0;
 enum rmi_f54_report_type VAR_3;

 for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++) {
  if (!FUNC_0(VAR_1, VAR_3))
   continue;

  VAR_1->inputs[VAR_2++] = VAR_3;
 }


}
