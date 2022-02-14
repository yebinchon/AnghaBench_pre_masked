
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ parent; } ;
struct pca9532_data {TYPE_2__ gpio; int * idev; int work; TYPE_1__* leds; } ;
struct TYPE_3__ {int type; int ldev; } ;


 int VAR_0 ;




 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct pca9532_data *VAR_1, int VAR_2)
{
 int VAR_3 = VAR_2;

 if (!VAR_1)
  return -VAR_0;

 while (--VAR_3 >= 0) {
  switch (VAR_1->leds[VAR_3].type) {
  case 128:
  case 131:
   break;
  case 130:
   FUNC_2(&VAR_1->leds[VAR_3].ldev);
   break;
  case 129:
   if (VAR_1->idev != ((void*)0)) {
    FUNC_0(&VAR_1->work);
    VAR_1->idev = ((void*)0);
   }
   break;
  }
 }






 return 0;
}
