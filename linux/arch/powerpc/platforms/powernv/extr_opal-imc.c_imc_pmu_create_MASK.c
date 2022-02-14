
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct imc_pmu* name; } ;
struct imc_pmu {int domain; struct imc_pmu* mem_info; TYPE_1__ pmu; int counter_mem_size; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct device_node*,struct imc_pmu*,int ) ;
 int FUNC_1 (struct device_node*,struct imc_pmu*,int) ;
 int FUNC_2 (struct imc_pmu*) ;
 struct imc_pmu* FUNC_3 (int,int ) ;
 int FUNC_4 (struct device_node*,char*,int *) ;
 int FUNC_5 (char*,struct imc_pmu*) ;

__attribute__((used)) static int FUNC_6(struct device_node *VAR_4, int VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 struct imc_pmu *VAR_8;
 u32 VAR_9;


 if (VAR_6 < 0)
  return -VAR_0;


 VAR_8 = FUNC_3(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;


 VAR_8->domain = VAR_6;

 VAR_7 = FUNC_4(VAR_4, "size", &VAR_8->counter_mem_size);
 if (VAR_7) {
  VAR_7 = -VAR_0;
  goto free_pmu;
 }

 if (!FUNC_4(VAR_4, "offset", &VAR_9)) {
  if (FUNC_0(VAR_4, VAR_8, VAR_9)) {
   VAR_7 = -VAR_0;
   goto free_pmu;
  }
 }


 VAR_7 = FUNC_1(VAR_4, VAR_8, VAR_5);
 if (VAR_7) {
  FUNC_5("IMC PMU %s Register failed\n", VAR_8->pmu.name);
  FUNC_2(VAR_8->pmu.name);
  if (VAR_8->domain == VAR_3)
   FUNC_2(VAR_8->mem_info);
  FUNC_2(VAR_8);
  return VAR_7;
 }

 return 0;

free_pmu:
 FUNC_2(VAR_8);
 return VAR_7;
}
