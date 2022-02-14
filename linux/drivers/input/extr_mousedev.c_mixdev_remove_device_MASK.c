
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mousedev {int opened_by_mixdev; int dev; int mixdev_node; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct mousedev*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mousedev *VAR_1)
{
 FUNC_2(&VAR_0->mutex);

 if (VAR_1->opened_by_mixdev) {
  VAR_1->opened_by_mixdev = 0;
  FUNC_1(VAR_1);
 }

 FUNC_0(&VAR_1->mixdev_node);
 FUNC_3(&VAR_0->mutex);

 FUNC_4(&VAR_1->dev);
}
