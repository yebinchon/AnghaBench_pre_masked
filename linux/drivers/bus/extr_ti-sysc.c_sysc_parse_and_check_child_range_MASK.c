
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sysc {int module_size; int module_pa; TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
typedef int __be32 ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*,char*,struct device_node*) ;
 int * FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (struct device_node*,char*,int*) ;
 int FUNC_4 (struct device_node*,int ) ;

__attribute__((used)) static int FUNC_5(struct sysc *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->dev->of_node;
 const __be32 *VAR_4;
 u32 VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_4 = FUNC_2(VAR_3, "ranges", &VAR_7);
 if (!VAR_4) {
  FUNC_1(VAR_2->dev, "missing ranges for %pOF\n", VAR_3);

  return -VAR_1;
 }

 VAR_7 /= sizeof(*VAR_4);

 if (VAR_7 < 3) {
  FUNC_1(VAR_2->dev, "incomplete ranges for %pOF\n", VAR_3);

  return -VAR_0;
 }

 VAR_8 = FUNC_3(VAR_3, "#address-cells", &VAR_5);
 if (VAR_8)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_3, "#size-cells", &VAR_6);
 if (VAR_8)
  return -VAR_1;

 if (VAR_5 != 1 || VAR_6 != 1) {
  FUNC_1(VAR_2->dev, "invalid ranges for %pOF\n", VAR_3);

  return -VAR_0;
 }

 VAR_4++;
 VAR_2->module_pa = FUNC_4(VAR_3, VAR_4++);
 VAR_2->module_size = FUNC_0(VAR_4);

 return 0;
}
