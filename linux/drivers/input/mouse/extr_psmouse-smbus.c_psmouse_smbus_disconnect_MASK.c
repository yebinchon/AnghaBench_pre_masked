
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psmouse_smbus_dev {int dead; TYPE_1__* client; int psmouse; int node; } ;
struct psmouse {struct psmouse_smbus_dev* private; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct psmouse_smbus_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,int ) ;
 int VAR_0 ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct psmouse *VAR_1)
{
 struct psmouse_smbus_dev *VAR_2 = VAR_1->private;

 FUNC_3(&VAR_0);

 if (VAR_2->dead) {
  FUNC_2(&VAR_2->node);
  FUNC_1(VAR_2);
 } else {
  VAR_2->dead = 1;
  FUNC_5(VAR_2->psmouse,
       "posting removal request for SMBus companion %s\n",
       FUNC_0(&VAR_2->client->dev));
  FUNC_6(VAR_2->client);
 }

 FUNC_4(&VAR_0);

 VAR_1->private = ((void*)0);
}
