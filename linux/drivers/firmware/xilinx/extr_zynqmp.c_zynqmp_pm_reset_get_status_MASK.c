
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum zynqmp_pm_reset { ____Placeholder_zynqmp_pm_reset } zynqmp_pm_reset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int const,int ,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(const enum zynqmp_pm_reset VAR_3,
          u32 *VAR_4)
{
 u32 VAR_5[VAR_1];
 int VAR_6;

 if (!VAR_4)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_2, VAR_3, 0,
      0, 0, VAR_5);
 *VAR_4 = VAR_5[1];

 return VAR_6;
}
