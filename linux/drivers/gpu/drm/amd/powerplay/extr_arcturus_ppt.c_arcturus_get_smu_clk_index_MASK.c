
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct smu_context {int dummy; } ;
struct smu_11_0_cmn2aisc_mapping {int map_to; int valid_mapping; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct smu_11_0_cmn2aisc_mapping* VAR_2 ;
 int FUNC_0 (char*,size_t) ;

__attribute__((used)) static int FUNC_1(struct smu_context *VAR_3, uint32_t VAR_4)
{
 struct smu_11_0_cmn2aisc_mapping VAR_5;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_5 = VAR_2[VAR_4];
 if (!(VAR_5.valid_mapping)) {
  FUNC_0("Unsupported SMU clk: %d\n", VAR_4);
  return -VAR_0;
 }

 return VAR_5.map_to;
}
