
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_dvfs_info {int latency; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct scpi_dvfs_info*) ;
 int FUNC_1 (struct scpi_dvfs_info*) ;
 struct scpi_dvfs_info* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct scpi_dvfs_info *VAR_1 = FUNC_2(VAR_0);

 if (FUNC_0(VAR_1))
  return FUNC_1(VAR_1);

 return VAR_1->latency;
}
