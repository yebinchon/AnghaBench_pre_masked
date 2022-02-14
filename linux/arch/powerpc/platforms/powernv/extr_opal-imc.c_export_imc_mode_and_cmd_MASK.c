
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct imc_pmu {struct imc_mem_info* mem_info; } ;
struct imc_mem_info {scalar_t__ id; int * vbase; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int ,int*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (struct device_node*,char*,int*) ;
 int VAR_4 ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(struct device_node *VAR_5,
        struct imc_pmu *VAR_6)
{
 static u64 VAR_7, *VAR_8, *VAR_9;
 char VAR_10[16], VAR_11[16];
 u32 VAR_12;
 struct imc_mem_info *VAR_13 = VAR_6->mem_info;

 VAR_3 = FUNC_0("imc", VAR_4);





 if (!VAR_3)
  return;

 if (FUNC_3(VAR_5, "cb_offset", &VAR_12))
  VAR_12 = VAR_2;

 while (VAR_13->vbase != ((void*)0)) {
  VAR_7 = (u64)(VAR_13->vbase) + VAR_12;
  VAR_8 = (u64 *)(VAR_7 + VAR_1);
  FUNC_4(VAR_10, "imc_mode_%d", (u32)(VAR_13->id));
  if (!FUNC_2(VAR_10, 0600, VAR_3,
         VAR_8))
   goto err;

  VAR_9 = (u64 *)(VAR_7 + VAR_0);
  FUNC_4(VAR_11, "imc_cmd_%d", (u32)(VAR_13->id));
  if (!FUNC_2(VAR_11, 0600, VAR_3,
         VAR_9))
   goto err;
  VAR_13++;
 }
 return;

err:
 FUNC_1(VAR_3);
}
