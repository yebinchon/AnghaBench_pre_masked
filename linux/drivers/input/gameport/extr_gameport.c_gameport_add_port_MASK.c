
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gameport {int name; int phys; int dev; int speed; scalar_t__ io; int node; TYPE_1__* parent; } ;
struct TYPE_2__ {struct gameport* child; } ;


 int FUNC_0 (int *,char*,int ,int ,int) ;
 int FUNC_1 (int *,char*,int ,int ,int ,...) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct gameport*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct gameport*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_6(struct gameport *VAR_2)
{
 int VAR_3;

 if (VAR_2->parent)
  VAR_2->parent->child = VAR_2;

 VAR_2->speed = VAR_1 ?
  FUNC_3(VAR_2) :
  FUNC_5(VAR_2);

 FUNC_4(&VAR_2->node, &VAR_0);

 if (VAR_2->io)
  FUNC_1(&VAR_2->dev, "%s is %s, io %#x, speed %dkHz\n",
    VAR_2->name, VAR_2->phys, VAR_2->io, VAR_2->speed);
 else
  FUNC_1(&VAR_2->dev, "%s is %s, speed %dkHz\n",
   VAR_2->name, VAR_2->phys, VAR_2->speed);

 VAR_3 = FUNC_2(&VAR_2->dev);
 if (VAR_3)
  FUNC_0(&VAR_2->dev,
   "device_add() failed for %s (%s), error: %d\n",
   VAR_2->phys, VAR_2->name, VAR_3);
}
