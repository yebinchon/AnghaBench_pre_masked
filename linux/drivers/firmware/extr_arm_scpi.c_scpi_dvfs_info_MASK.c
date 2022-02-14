
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scpi_dvfs_info {int dummy; } ;
struct device {int dummy; } ;


 struct scpi_dvfs_info* FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 struct scpi_dvfs_info* FUNC_2 (int) ;

__attribute__((used)) static struct scpi_dvfs_info *FUNC_3(struct device *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0);

 if (VAR_1 < 0)
  return FUNC_0(VAR_1);

 return FUNC_2(VAR_1);
}
