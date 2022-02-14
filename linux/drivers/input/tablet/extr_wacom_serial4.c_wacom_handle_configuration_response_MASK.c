
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wacom {TYPE_1__* dev; int res_y; int res_x; int data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,char*,int*,int*,int*,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct wacom *VAR_0)
{
 int VAR_1, VAR_2;

 FUNC_0(&VAR_0->dev->dev, "Configuration string: %s\n", VAR_0->data);
 VAR_1 = FUNC_2(VAR_0->data, "~R%x,%u,%u,%u,%u", &VAR_2, &VAR_2, &VAR_2,
     &VAR_0->res_x, &VAR_0->res_y);
 if (VAR_1 != 5)
  FUNC_1(&VAR_0->dev->dev, "could not get resolution\n");
}
