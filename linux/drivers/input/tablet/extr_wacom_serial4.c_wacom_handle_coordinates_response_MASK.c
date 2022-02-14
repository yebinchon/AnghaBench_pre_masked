
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom {TYPE_1__* dev; int max_y; int max_x; int data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct wacom *VAR_0)
{
 int VAR_1;

 FUNC_0(&VAR_0->dev->dev, "Coordinates string: %s\n", VAR_0->data);
 VAR_1 = FUNC_2(VAR_0->data, "~C%u,%u", &VAR_0->max_x, &VAR_0->max_y);
 if (VAR_1 != 2)
  FUNC_1(&VAR_0->dev->dev, "could not get max coordinates\n");
}
