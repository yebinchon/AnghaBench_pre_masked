
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_devres {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct macio_dev {TYPE_1__ ofdev; } ;


 struct macio_devres* FUNC_0 (int *,int ,int *,int *) ;
 int VAR_0 ;

__attribute__((used)) static struct macio_devres * FUNC_1(struct macio_dev *VAR_1)
{
 return FUNC_0(&VAR_1->ofdev.dev, VAR_0, ((void*)0), ((void*)0));
}
