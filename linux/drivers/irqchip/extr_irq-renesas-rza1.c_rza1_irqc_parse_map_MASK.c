
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u32 ;
struct rza1_irqc_priv {TYPE_1__* map; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;
typedef int __be32 ;
struct TYPE_2__ {unsigned int args_count; unsigned int* args; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int const*) ;
 struct device_node* FUNC_1 (unsigned int) ;
 int * FUNC_2 (int ,char*,unsigned int*) ;
 int FUNC_3 (struct device_node*) ;
 unsigned int FUNC_4 (struct device_node*,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct rza1_irqc_priv *VAR_2,
          struct device_node *VAR_3)
{
 unsigned int VAR_4, VAR_5, VAR_6, VAR_7;
 struct device *VAR_8 = VAR_2->dev;
 struct device_node *VAR_9;
 const __be32 *VAR_10;
 u32 VAR_11;

 VAR_10 = FUNC_2(VAR_8->of_node, "interrupt-map", &VAR_4);
 if (!VAR_10)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_4 < 3)
   return -VAR_0;


  if (FUNC_0(VAR_10) != VAR_5)
   return -VAR_0;

  VAR_9 = FUNC_1(FUNC_0(VAR_10 + 2));
  if (VAR_9 != VAR_3) {
   FUNC_3(VAR_9);
   return -VAR_0;
  }

  VAR_10 += 3;
  VAR_4 -= 3;

  VAR_7 = FUNC_4(VAR_9, "#interrupt-cells", &VAR_11);
  FUNC_3(VAR_9);
  if (VAR_7)
   return VAR_7;

  if (VAR_4 < VAR_11)
   return -VAR_0;

  VAR_2->map[VAR_5].args_count = VAR_11;
  for (VAR_6 = 0; VAR_6 < VAR_11; VAR_6++)
   VAR_2->map[VAR_5].args[VAR_6] = FUNC_0(VAR_10++);

  VAR_4 -= VAR_11;
 }

 return 0;
}
