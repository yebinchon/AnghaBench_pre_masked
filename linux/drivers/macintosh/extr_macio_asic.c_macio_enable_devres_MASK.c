
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_devres {int dummy; } ;
struct TYPE_2__ {int dev; } ;
struct macio_dev {TYPE_1__ ofdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct macio_devres* FUNC_0 (int ,int,int ) ;
 struct macio_devres* FUNC_1 (int *,int ,int *,int *) ;
 int * FUNC_2 (int *,struct macio_devres*,int *,int *) ;
 int VAR_2 ;

int FUNC_3(struct macio_dev *VAR_3)
{
 struct macio_devres *VAR_4;

 VAR_4 = FUNC_1(&VAR_3->ofdev.dev, VAR_2, ((void*)0), ((void*)0));
 if (!VAR_4) {
  VAR_4 = FUNC_0(VAR_2, sizeof(*VAR_4), VAR_1);
  if (!VAR_4)
   return -VAR_0;
 }
 return FUNC_2(&VAR_3->ofdev.dev, VAR_4, ((void*)0), ((void*)0)) != ((void*)0);
}
