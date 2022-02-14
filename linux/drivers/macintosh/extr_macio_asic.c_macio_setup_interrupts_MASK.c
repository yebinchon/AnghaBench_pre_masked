
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct resource {unsigned int start; int name; int flags; } ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; } ;
struct macio_dev {int n_interrupts; TYPE_1__ ofdev; struct resource* interrupt; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 unsigned int FUNC_1 (struct device_node*,int ) ;
 scalar_t__ FUNC_2 (struct device_node*,struct resource*,int) ;
 int FUNC_3 (struct resource*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct macio_dev *VAR_2)
{
 struct device_node *VAR_3 = VAR_2->ofdev.dev.of_node;
 unsigned int VAR_4;
 int VAR_5 = 0, VAR_6 = 0;

 for (;;) {
  struct resource *VAR_7;

  if (VAR_6 >= VAR_1)
   break;
  VAR_7 = &VAR_2->interrupt[VAR_6];
  VAR_4 = FUNC_1(VAR_3, VAR_5++);
  if (!VAR_4)
   break;
  VAR_7->start = VAR_4;
  VAR_7->flags = VAR_0;
  VAR_7->name = FUNC_0(&VAR_2->ofdev.dev);
  if (FUNC_2(VAR_3, VAR_7, VAR_5 - 1)) {
   FUNC_3(VAR_7, 0, sizeof(struct resource));
   continue;
  } else
   VAR_6++;
 }
 VAR_2->n_interrupts = VAR_6;
}
