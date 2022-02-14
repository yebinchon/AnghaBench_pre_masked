
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvmem_cell {int dummy; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct nvmem_cell*) ;
 int FUNC_1 (struct device*,int*,int) ;
 struct nvmem_cell* FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct nvmem_cell*) ;
 scalar_t__ FUNC_4 (struct nvmem_cell*,int *) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct nvmem_cell *VAR_1;
 u32 VAR_2, VAR_3;

 VAR_1 = FUNC_2(VAR_0, "speed_bin");


 if (FUNC_0(VAR_1))
  return;

 VAR_2 = *((u32 *) FUNC_4(VAR_1, ((void*)0)));
 FUNC_3(VAR_1);

 VAR_3 = (1 << VAR_2);

 FUNC_1(VAR_0, &VAR_3, 1);
}
