
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct qcom_cpufreq_drv {int versions; } ;
struct nvmem_cell {int dummy; } ;
struct device {int dummy; } ;
typedef enum _msm8996_version { ____Placeholder__msm8996_version } _msm8996_version ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__*) ;


 int VAR_1 ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__* FUNC_5 (struct nvmem_cell*,size_t*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct device *VAR_2,
       struct nvmem_cell *VAR_3,
       struct qcom_cpufreq_drv *VAR_4)
{
 size_t VAR_5;
 u8 *VAR_6;
 enum _msm8996_version VAR_7;

 VAR_7 = FUNC_6();
 if (VAR_1 == VAR_7) {
  FUNC_3(VAR_2, "Not Snapdragon 820/821!");
  return -VAR_0;
 }

 VAR_6 = FUNC_5(VAR_3, &VAR_5);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 switch (VAR_7) {
 case 128:
  VAR_4->versions = 1 << (unsigned int)(*VAR_6);
  break;
 case 129:
  VAR_4->versions = 1 << ((unsigned int)(*VAR_6) + 4);
  break;
 default:
  FUNC_0();
  break;
 }

 FUNC_4(VAR_6);
 return 0;
}
