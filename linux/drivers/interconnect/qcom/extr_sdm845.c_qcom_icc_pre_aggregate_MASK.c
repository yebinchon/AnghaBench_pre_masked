
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_icc_node {scalar_t__* max_peak; scalar_t__* sum_avg; } ;
struct icc_node {struct qcom_icc_node* data; } ;


 size_t VAR_0 ;

__attribute__((used)) static void FUNC_0(struct icc_node *VAR_1)
{
 size_t VAR_2;
 struct qcom_icc_node *VAR_3;

 VAR_3 = VAR_1->data;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3->sum_avg[VAR_2] = 0;
  VAR_3->max_peak[VAR_2] = 0;
 }
}
