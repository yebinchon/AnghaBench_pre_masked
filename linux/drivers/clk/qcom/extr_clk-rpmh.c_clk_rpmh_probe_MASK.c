
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct platform_device {int dev; } ;
struct clk_rpmh_desc {int num_clks; struct clk_hw** clks; } ;
struct clk_rpmh {unsigned long long unit; int * dev; int res_addr; int res_name; } ;
struct clk_hw {TYPE_1__* init; } ;
struct bcm_db {int unit; } ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bcm_db const*) ;
 int FUNC_1 (struct bcm_db const*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct bcm_db* FUNC_3 (int ,size_t*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,struct clk_hw*) ;
 int FUNC_7 (int *,int ,void*) ;
 unsigned long long FUNC_8 (int ) ;
 int VAR_1 ;
 struct clk_rpmh_desc* FUNC_9 (int *) ;
 struct clk_rpmh* FUNC_10 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_2)
{
 struct clk_hw **VAR_3;
 struct clk_rpmh *VAR_4;
 const struct clk_rpmh_desc *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_9(&VAR_2->dev);
 if (!VAR_5)
  return -VAR_0;

 VAR_3 = VAR_5->clks;

 for (VAR_7 = 0; VAR_7 < VAR_5->num_clks; VAR_7++) {
  const char *VAR_8 = VAR_3[VAR_7]->init->name;
  u32 VAR_9;
  size_t VAR_10;
  const struct bcm_db *VAR_11;

  VAR_4 = FUNC_10(VAR_3[VAR_7]);
  VAR_9 = FUNC_2(VAR_4->res_name);
  if (!VAR_9) {
   FUNC_5(&VAR_2->dev, "missing RPMh resource address for %s\n",
    VAR_4->res_name);
   return -VAR_0;
  }

  VAR_11 = FUNC_3(VAR_4->res_name, &VAR_10);
  if (FUNC_0(VAR_11)) {
   VAR_6 = FUNC_1(VAR_11);
   FUNC_5(&VAR_2->dev,
    "error reading RPMh aux data for %s (%d)\n",
    VAR_4->res_name, VAR_6);
   return VAR_6;
  }


  if (VAR_10 == sizeof(*VAR_11))
   VAR_4->unit = FUNC_8(VAR_11->unit) * 1000ULL;

  VAR_4->res_addr += VAR_9;
  VAR_4->dev = &VAR_2->dev;

  VAR_6 = FUNC_6(&VAR_2->dev, VAR_3[VAR_7]);
  if (VAR_6) {
   FUNC_5(&VAR_2->dev, "failed to register %s\n", VAR_8);
   return VAR_6;
  }
 }


 VAR_6 = FUNC_7(&VAR_2->dev, VAR_1,
       (void *)VAR_5);
 if (VAR_6) {
  FUNC_5(&VAR_2->dev, "Failed to add clock provider\n");
  return VAR_6;
 }

 FUNC_4(&VAR_2->dev, "Registered RPMh clocks\n");

 return 0;
}
