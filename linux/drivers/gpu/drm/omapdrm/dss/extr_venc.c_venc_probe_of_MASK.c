
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct venc_device {TYPE_1__* pdev; int type; int invert_polarity; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,char*,int) ;
 struct device_node* FUNC_1 (struct device_node*,int ,int ) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,int*) ;

__attribute__((used)) static int FUNC_5(struct venc_device *VAR_3)
{
 struct device_node *VAR_4 = VAR_3->pdev->dev.of_node;
 struct device_node *VAR_5;
 u32 VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_4, 0, 0);
 if (!VAR_5)
  return 0;

 VAR_3->invert_polarity = FUNC_3(VAR_5, "ti,invert-polarity");

 VAR_7 = FUNC_4(VAR_5, "ti,channels", &VAR_6);
 if (VAR_7) {
  FUNC_0(&VAR_3->pdev->dev,
   "failed to read property 'ti,channels': %d\n", VAR_7);
  goto err;
 }

 switch (VAR_6) {
 case 1:
  VAR_3->type = VAR_1;
  break;
 case 2:
  VAR_3->type = VAR_2;
  break;
 default:
  FUNC_0(&VAR_3->pdev->dev, "bad channel propert '%d'\n",
   VAR_6);
  VAR_7 = -VAR_0;
  goto err;
 }

 FUNC_2(VAR_5);

 return 0;

err:
 FUNC_2(VAR_5);
 return VAR_7;
}
