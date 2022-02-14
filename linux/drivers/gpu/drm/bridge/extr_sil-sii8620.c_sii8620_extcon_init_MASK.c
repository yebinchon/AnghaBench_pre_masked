
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int notifier_call; } ;
struct sii8620 {TYPE_2__* dev; TYPE_1__ extcon_nb; int extcon_wq; struct extcon_dev* extcon; } ;
struct extcon_dev {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct extcon_dev*) ;
 int FUNC_2 (struct extcon_dev*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 struct extcon_dev* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct extcon_dev*,int ,TYPE_1__*) ;
 struct device_node* FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (int ,int,int) ;
 int FUNC_9 (struct device_node*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_10(struct sii8620 *VAR_4)
{
 struct extcon_dev *VAR_5;
 struct device_node *VAR_6, *VAR_7;
 int VAR_8;


 VAR_6 = FUNC_8(VAR_4->dev->of_node, 1, -1);

 VAR_7 = FUNC_7(VAR_6);

 if (!VAR_7) {
  FUNC_4(VAR_4->dev, "no extcon found, switching to 'always on' mode\n");
  return 0;
 }

 VAR_5 = FUNC_5(VAR_7);
 FUNC_9(VAR_7);
 if (FUNC_1(VAR_5)) {
  if (FUNC_2(VAR_5) == -VAR_0)
   return -VAR_0;
  FUNC_3(VAR_4->dev, "Invalid or missing extcon\n");
  return FUNC_2(VAR_5);
 }

 VAR_4->extcon = VAR_5;
 VAR_4->extcon_nb.notifier_call = VAR_2;
 FUNC_0(&VAR_4->extcon_wq, VAR_3);
 VAR_8 = FUNC_6(VAR_5, VAR_1, &VAR_4->extcon_nb);
 if (VAR_8) {
  FUNC_3(VAR_4->dev, "failed to register notifier for MHL\n");
  return VAR_8;
 }

 return 0;
}
