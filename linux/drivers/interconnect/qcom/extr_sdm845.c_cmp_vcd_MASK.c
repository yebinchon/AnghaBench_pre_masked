
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vcd; } ;
struct qcom_icc_bcm {TYPE_1__ aux_data; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct qcom_icc_bcm **VAR_2 = (const struct qcom_icc_bcm **)VAR_0;
 const struct qcom_icc_bcm **VAR_3 = (const struct qcom_icc_bcm **)VAR_1;

 if (VAR_2[0]->aux_data.vcd < VAR_3[0]->aux_data.vcd)
  return -1;
 else if (VAR_2[0]->aux_data.vcd == VAR_3[0]->aux_data.vcd)
  return 0;
 else
  return 1;
}
