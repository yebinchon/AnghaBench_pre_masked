
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * colorkey; } ;
struct rcar_du_device {TYPE_1__ props; int ddev; } ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct rcar_du_device *VAR_1)
{





 VAR_1->props.colorkey =
  FUNC_0(VAR_1->ddev, 0, "colorkey",
       0, 0x01ffffff);
 if (VAR_1->props.colorkey == ((void*)0))
  return -VAR_0;

 return 0;
}
