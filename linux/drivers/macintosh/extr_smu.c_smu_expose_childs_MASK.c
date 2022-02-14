
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_4__ {TYPE_1__* of_dev; int of_node; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 struct device_node* FUNC_1 (int ,struct device_node*) ;
 int FUNC_2 (struct device_node*,char*,int *) ;
 TYPE_2__* VAR_0 ;

__attribute__((used)) static void FUNC_3(struct work_struct *VAR_1)
{
 struct device_node *VAR_2;

 for (VAR_2 = ((void*)0); (VAR_2 = FUNC_1(VAR_0->of_node, VAR_2)) != ((void*)0);)
  if (FUNC_0(VAR_2, "smu-sensors"))
   FUNC_2(VAR_2, "smu-sensors",
        &VAR_0->of_dev->dev);
}
