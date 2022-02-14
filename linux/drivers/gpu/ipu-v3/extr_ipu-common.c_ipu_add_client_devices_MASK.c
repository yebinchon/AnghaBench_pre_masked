
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct device* parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ipu_soc {struct device* dev; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct ipu_platform_reg {TYPE_2__ pdata; int name; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 unsigned int FUNC_0 (struct ipu_platform_reg*) ;
 int VAR_0 ;
 struct ipu_platform_reg* VAR_1 ;
 int FUNC_1 (struct device*,char*,unsigned int,int ,char*,unsigned int) ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct device_node* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,TYPE_2__*,int) ;
 struct platform_device* FUNC_7 (int ,int ) ;
 int FUNC_8 (struct platform_device*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct ipu_soc *VAR_4, unsigned long VAR_5)
{
 struct device *VAR_6 = VAR_4->dev;
 unsigned VAR_7;
 int VAR_8, VAR_9;

 FUNC_2(&VAR_3);
 VAR_8 = VAR_2;
 VAR_2 += FUNC_0(VAR_1);
 FUNC_3(&VAR_3);

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  struct ipu_platform_reg *VAR_10 = &VAR_1[VAR_7];
  struct platform_device *VAR_11;
  struct device_node *VAR_12;


  VAR_12 = FUNC_4(VAR_6->of_node, VAR_7);
  if (!VAR_12) {
   FUNC_1(VAR_6,
     "no port@%d node in %pOF, not using %s%d\n",
     VAR_7, VAR_6->of_node,
     (VAR_7 / 2) ? "DI" : "CSI", VAR_7 % 2);
   continue;
  }

  VAR_11 = FUNC_7(VAR_10->name, VAR_8++);
  if (!VAR_11) {
   VAR_9 = -VAR_0;
   goto err_register;
  }

  VAR_11->dev.parent = VAR_6;

  VAR_10->pdata.of_node = VAR_12;
  VAR_9 = FUNC_6(VAR_11, &VAR_10->pdata,
            sizeof(VAR_10->pdata));
  if (!VAR_9)
   VAR_9 = FUNC_5(VAR_11);
  if (VAR_9) {
   FUNC_8(VAR_11);
   goto err_register;
  }
 }

 return 0;

err_register:
 FUNC_9(FUNC_10(VAR_6));

 return VAR_9;
}
