
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_tcon {int id; TYPE_1__* dev; } ;
struct platform_device {int dev; } ;
struct drm_encoder {scalar_t__ encoder_type; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 struct platform_device* FUNC_1 (struct device_node*) ;
 struct device_node* FUNC_2 (int ,int ) ;
 struct device_node* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (struct device_node*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static int FUNC_8(struct sun4i_tcon *VAR_3,
         const struct drm_encoder *VAR_4)
{
 struct device_node *VAR_5, *VAR_6;
 struct platform_device *VAR_7;
 int VAR_8, VAR_9;



 VAR_5 = FUNC_2(VAR_3->dev->of_node, 0);
 if (!VAR_5)
  return -VAR_2;

 VAR_8 = FUNC_5(VAR_5);
 FUNC_4(VAR_5);

 VAR_6 = FUNC_3(VAR_3->dev->of_node, 0, -1);
 if (!VAR_6)
  return -VAR_2;

 VAR_7 = FUNC_1(VAR_6);
 FUNC_4(VAR_6);
 if (!VAR_7)
  return -VAR_2;

 if (FUNC_0(VAR_0) &&
     VAR_4->encoder_type == VAR_1) {
  VAR_9 = FUNC_7(&VAR_7->dev, VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 if (FUNC_0(VAR_0)) {
  VAR_9 = FUNC_6(&VAR_7->dev, VAR_3->id, VAR_8);
  if (VAR_9)
   return VAR_9;
 }

 return 0;
}
