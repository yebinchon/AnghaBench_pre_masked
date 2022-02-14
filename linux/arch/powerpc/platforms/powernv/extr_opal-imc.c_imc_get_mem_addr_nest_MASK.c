
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct imc_pmu {int imc_counter_mmaped; TYPE_1__* mem_info; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int vbase; scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device_node*,struct imc_pmu*) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct device_node*,char*) ;
 scalar_t__ FUNC_4 (struct device_node*,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct device_node *VAR_3,
     struct imc_pmu *VAR_4,
     u32 VAR_5)
{
 int VAR_6 = 0, VAR_7;
 u64 *VAR_8, VAR_9;
 u32 *VAR_10;

 VAR_6 = FUNC_3(VAR_3, "chip-id");
 if (VAR_6 <= 0)
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_6, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_1(VAR_6, sizeof(*VAR_10), VAR_2);
 if (!VAR_10) {
  FUNC_2(VAR_8);
  return -VAR_1;
 }

 if (FUNC_4(VAR_3, "chip-id", VAR_10, VAR_6))
  goto error;

 if (FUNC_5(VAR_3, "base-addr", VAR_8,
        VAR_6))
  goto error;

 VAR_4->mem_info = FUNC_1(VAR_6 + 1, sizeof(*VAR_4->mem_info),
        VAR_2);
 if (!VAR_4->mem_info)
  goto error;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_4->mem_info[VAR_7].id = VAR_10[VAR_7];
  VAR_9 = VAR_8[VAR_7] + VAR_5;
  VAR_4->mem_info[VAR_7].vbase = FUNC_6(VAR_9);
 }

 VAR_4->imc_counter_mmaped = 1;
 FUNC_0(VAR_3, VAR_4);
 FUNC_2(VAR_8);
 FUNC_2(VAR_10);
 return 0;

error:
 FUNC_2(VAR_8);
 FUNC_2(VAR_10);
 return -1;
}
