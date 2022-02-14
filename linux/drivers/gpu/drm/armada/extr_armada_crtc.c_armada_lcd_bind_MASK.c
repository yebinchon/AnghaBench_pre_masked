
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct platform_device_id {scalar_t__ driver_data; } ;
struct platform_device {int dummy; } ;
struct of_device_id {struct armada_variant* data; } ;
struct drm_device {int dummy; } ;
struct device_node {int dummy; } ;
struct device {TYPE_1__* driver; struct device_node* of_node; } ;
struct armada_variant {int dummy; } ;
struct TYPE_2__ {int of_match_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_device*,struct device*,struct resource*,int,struct armada_variant const*,struct device_node*) ;
 int FUNC_1 (struct device*,char*,struct device_node*) ;
 struct device_node* FUNC_2 (struct device_node*,char*) ;
 struct of_device_id* FUNC_3 (int ,struct device*) ;
 int FUNC_4 (struct device_node*) ;
 struct platform_device_id* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 struct platform_device* FUNC_8 (struct device*) ;

__attribute__((used)) static int
FUNC_9(struct device *VAR_2, struct device *VAR_3, void *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_8(VAR_2);
 struct drm_device *VAR_6 = VAR_4;
 struct resource *VAR_7 = FUNC_7(VAR_5, VAR_1, 0);
 int VAR_8 = FUNC_6(VAR_5, 0);
 const struct armada_variant *VAR_9;
 struct device_node *VAR_10 = ((void*)0);

 if (VAR_8 < 0)
  return VAR_8;

 if (!VAR_2->of_node) {
  const struct platform_device_id *VAR_11;

  VAR_11 = FUNC_5(VAR_5);
  if (!VAR_11)
   return -VAR_0;

  VAR_9 = (const struct armada_variant *)VAR_11->driver_data;
 } else {
  const struct of_device_id *VAR_12;
  struct device_node *VAR_13, *VAR_14 = VAR_2->of_node;

  VAR_12 = FUNC_3(VAR_2->driver->of_match_table, VAR_2);
  if (!VAR_12)
   return -VAR_0;

  VAR_13 = FUNC_2(VAR_14, "ports");
  if (VAR_13)
   VAR_14 = VAR_13;
  VAR_10 = FUNC_2(VAR_14, "port");
  FUNC_4(VAR_13);
  if (!VAR_10) {
   FUNC_1(VAR_2, "no port node found in %pOF\n", VAR_14);
   return -VAR_0;
  }

  VAR_9 = VAR_12->data;
 }

 return FUNC_0(VAR_6, VAR_2, VAR_7, VAR_8, VAR_9, VAR_10);
}
