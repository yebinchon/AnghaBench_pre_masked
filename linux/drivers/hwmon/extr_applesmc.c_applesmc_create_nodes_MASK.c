
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct attribute {int mode; int * name; } ;
struct applesmc_node_group {int option; scalar_t__ store; int show; scalar_t__ format; struct applesmc_dev_attr* nodes; } ;
struct TYPE_5__ {struct attribute attr; scalar_t__ store; int show; } ;
struct TYPE_6__ {int index; TYPE_1__ dev_attr; } ;
struct applesmc_dev_attr {int * name; TYPE_2__ sda; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct applesmc_node_group*) ;
 struct applesmc_dev_attr* FUNC_1 (int,int,int ) ;
 TYPE_4__* VAR_2 ;
 int FUNC_2 (int *,int,scalar_t__,int) ;
 int FUNC_3 (struct attribute*) ;
 int FUNC_4 (int *,struct attribute*) ;

__attribute__((used)) static int FUNC_5(struct applesmc_node_group *VAR_3, int VAR_4)
{
 struct applesmc_node_group *VAR_5;
 struct applesmc_dev_attr *VAR_6;
 struct attribute *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_5 = VAR_3; VAR_5->format; VAR_5++) {
  VAR_5->nodes = FUNC_1(VAR_4 + 1, sizeof(*VAR_6), VAR_1);
  if (!VAR_5->nodes) {
   VAR_8 = -VAR_0;
   goto out;
  }
  for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
   VAR_6 = &VAR_5->nodes[VAR_9];
   FUNC_2(VAR_6->name, sizeof(VAR_6->name), VAR_5->format,
      VAR_9 + 1);
   VAR_6->sda.index = (VAR_5->option << 16) | (VAR_9 & 0xffff);
   VAR_6->sda.dev_attr.show = VAR_5->show;
   VAR_6->sda.dev_attr.store = VAR_5->store;
   VAR_7 = &VAR_6->sda.dev_attr.attr;
   FUNC_3(VAR_7);
   VAR_7->name = VAR_6->name;
   VAR_7->mode = 0444 | (VAR_5->store ? 0200 : 0);
   VAR_8 = FUNC_4(&VAR_2->dev.kobj, VAR_7);
   if (VAR_8) {
    VAR_7->name = ((void*)0);
    goto out;
   }
  }
 }

 return 0;
out:
 FUNC_0(VAR_3);
 return VAR_8;
}
