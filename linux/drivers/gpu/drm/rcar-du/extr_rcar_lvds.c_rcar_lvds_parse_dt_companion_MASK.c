
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rcar_lvds {int companion; struct device* dev; } ;
struct of_device_id {int compatible; } ;
struct device_node {int dummy; } ;
struct device {TYPE_1__* driver; int of_node; } ;
struct TYPE_2__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,struct device_node*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device_node*,int ) ;
 int FUNC_3 (struct device_node*) ;
 struct of_device_id* FUNC_4 (int ,struct device*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_7(struct rcar_lvds *VAR_2)
{
 const struct of_device_id *VAR_3;
 struct device_node *VAR_4;
 struct device *VAR_5 = VAR_2->dev;
 int VAR_6 = 0;


 VAR_4 = FUNC_6(VAR_5->of_node, "renesas,companion", 0);
 if (!VAR_4)
  return 0;





 VAR_3 = FUNC_4(VAR_5->driver->of_match_table, VAR_5);
 if (!FUNC_2(VAR_4, VAR_3->compatible)) {
  FUNC_1(VAR_5, "Companion LVDS encoder is invalid\n");
  VAR_6 = -VAR_0;
  goto done;
 }

 VAR_2->companion = FUNC_3(VAR_4);
 if (!VAR_2->companion) {
  VAR_6 = -VAR_1;
  goto done;
 }

 FUNC_0(VAR_5, "Found companion encoder %pOF\n", VAR_4);

done:
 FUNC_5(VAR_4);

 return VAR_6;
}
