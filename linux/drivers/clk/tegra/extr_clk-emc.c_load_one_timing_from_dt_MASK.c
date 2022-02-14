
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct tegra_clk_emc {int dummy; } ;
struct emc_timing {int parent_index; int parent; void* parent_rate; void* rate; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * VAR_1 ;
 int FUNC_5 (struct device_node*,char*) ;
 int FUNC_6 (struct device_node*,char*,void**) ;
 int FUNC_7 (char*,struct device_node*,...) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct tegra_clk_emc *VAR_2,
       struct emc_timing *VAR_3,
       struct device_node *VAR_4)
{
 int VAR_5, VAR_6;
 u32 VAR_7;

 VAR_5 = FUNC_6(VAR_4, "clock-frequency", &VAR_7);
 if (VAR_5) {
  FUNC_7("timing %pOF: failed to read rate\n", VAR_4);
  return VAR_5;
 }

 VAR_3->rate = VAR_7;

 VAR_5 = FUNC_6(VAR_4, "nvidia,parent-clock-frequency", &VAR_7);
 if (VAR_5) {
  FUNC_7("timing %pOF: failed to read parent rate\n", VAR_4);
  return VAR_5;
 }

 VAR_3->parent_rate = VAR_7;

 VAR_3->parent = FUNC_5(VAR_4, "emc-parent");
 if (FUNC_1(VAR_3->parent)) {
  FUNC_7("timing %pOF: failed to get parent clock\n", VAR_4);
  return FUNC_2(VAR_3->parent);
 }

 VAR_3->parent_index = 0xff;
 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (!FUNC_8(VAR_1[VAR_6],
       FUNC_3(VAR_3->parent))) {
   VAR_3->parent_index = VAR_6;
   break;
  }
 }
 if (VAR_3->parent_index == 0xff) {
  FUNC_7("timing %pOF: %s is not a valid parent\n",
         VAR_4, FUNC_3(VAR_3->parent));
  FUNC_4(VAR_3->parent);
  return -VAR_0;
 }

 return 0;
}
