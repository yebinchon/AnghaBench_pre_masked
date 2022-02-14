
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_type_subtype {int subtype; int type; } ;
struct spu_hw {int num_spu; int ** reg_vbase; int spu_subtype; int spu_type; int num_chan; } ;
struct resource {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct spu_hw spu; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 int * FUNC_4 (struct device*,struct resource*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (struct device_node*,char*,char*) ;
 struct spu_type_subtype* FUNC_6 (struct device*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct spu_hw *VAR_6 = &VAR_3.spu;
 struct resource *VAR_7;
 const struct spu_type_subtype *VAR_8;
 struct device_node *VAR_9 = VAR_4->dev.of_node;
 int VAR_10, VAR_11;


 VAR_6->num_chan = FUNC_5(VAR_9, "mboxes", "#mbox-cells");

 VAR_8 = FUNC_6(VAR_5);
 if (!VAR_8) {
  FUNC_3(&VAR_4->dev, "Failed to match device\n");
  return -VAR_0;
 }

 VAR_6->spu_type = VAR_8->type;
 VAR_6->spu_subtype = VAR_8->subtype;

 VAR_11 = 0;
 for (VAR_11 = 0; (VAR_11 < VAR_2) && ((VAR_7 =
  FUNC_7(VAR_4, VAR_1, VAR_11)) != ((void*)0)); VAR_11++) {

  VAR_6->reg_vbase[VAR_11] = FUNC_4(VAR_5, VAR_7);
  if (FUNC_0(VAR_6->reg_vbase[VAR_11])) {
   VAR_10 = FUNC_1(VAR_6->reg_vbase[VAR_11]);
   FUNC_3(&VAR_4->dev, "Failed to map registers: %d\n",
    VAR_10);
   VAR_6->reg_vbase[VAR_11] = ((void*)0);
   return VAR_10;
  }
 }
 VAR_6->num_spu = VAR_11;
 FUNC_2(VAR_5, "Device has %d SPUs", VAR_6->num_spu);

 return 0;
}
