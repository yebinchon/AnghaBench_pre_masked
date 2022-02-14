
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sysc {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct clk_lookup {char const* con_id; struct clk* clk; int dev_id; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk_lookup*) ;
 int FUNC_4 (TYPE_1__*) ;
 struct clk* FUNC_5 (TYPE_1__*,struct device_node*,char const*) ;
 struct clk_lookup* FUNC_6 (int,int,int ) ;
 struct clk* FUNC_7 (struct device_node*,char const*) ;
 struct device_node* FUNC_8 (struct device_node*,int *) ;

__attribute__((used)) static int FUNC_9(struct sysc *VAR_3,
        const char *VAR_4,
        const char *VAR_5)
{
 struct device_node *VAR_6 = VAR_3->dev->of_node;
 struct device_node *VAR_7;
 struct clk_lookup *VAR_8;
 struct clk *VAR_9;
 const char *VAR_10;

 if (VAR_4)
  VAR_10 = VAR_4;
 else
  VAR_10 = VAR_5;


 VAR_9 = FUNC_7(VAR_6, VAR_10);
 if (!FUNC_0(VAR_9)) {
  FUNC_2(VAR_9);

  return 0;
 }

 VAR_7 = FUNC_8(VAR_6, ((void*)0));
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_3->dev, VAR_7, VAR_4);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);






 VAR_8 = FUNC_6(1, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->con_id = VAR_10;
 VAR_8->dev_id = FUNC_4(VAR_3->dev);
 VAR_8->clk = VAR_9;
 FUNC_3(VAR_8);

 FUNC_2(VAR_9);

 return 0;
}
