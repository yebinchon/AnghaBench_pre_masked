
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int dummy; } ;
struct exynos_bus {int edev_count; struct opp_table* opp_table; int ratio; struct opp_table** edev; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct opp_table*) ;
 int FUNC_1 (struct opp_table*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct opp_table*) ;
 struct opp_table* FUNC_4 (struct device*,char const**,int) ;
 struct opp_table* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*) ;
 struct opp_table** FUNC_7 (struct device*,int,int ) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_9(struct device_node *VAR_4,
     struct exynos_bus *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct opp_table *VAR_7;
 const char *VAR_8 = "vdd";
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_7 = FUNC_4(VAR_6, &VAR_8, 1);
 if (FUNC_0(VAR_7)) {
  VAR_10 = FUNC_1(VAR_7);
  FUNC_2(VAR_6, "failed to set regulators %d\n", VAR_10);
  return VAR_10;
 }

 VAR_5->opp_table = VAR_7;





 VAR_11 = FUNC_6(VAR_6);
 if (VAR_11 < 0) {
  FUNC_2(VAR_6, "failed to get the count of devfreq-event dev\n");
  VAR_10 = VAR_11;
  goto err_regulator;
 }
 VAR_5->edev_count = VAR_11;

 VAR_12 = sizeof(*VAR_5->edev) * VAR_11;
 VAR_5->edev = FUNC_7(VAR_6, VAR_12, VAR_3);
 if (!VAR_5->edev) {
  VAR_10 = -VAR_1;
  goto err_regulator;
 }

 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++) {
  VAR_5->edev[VAR_9] = FUNC_5(VAR_6, VAR_9);
  if (FUNC_0(VAR_5->edev[VAR_9])) {
   VAR_10 = -VAR_2;
   goto err_regulator;
  }
 }
 if (FUNC_8(VAR_4, "exynos,saturation-ratio", &VAR_5->ratio))
  VAR_5->ratio = VAR_0;

 return 0;

err_regulator:
 FUNC_3(VAR_5->opp_table);
 VAR_5->opp_table = ((void*)0);

 return VAR_10;
}
