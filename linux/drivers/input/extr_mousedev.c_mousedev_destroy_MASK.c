
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int devt; } ;
struct mousedev {TYPE_1__ dev; int handle; int cdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mousedev*) ;
 struct mousedev* VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(struct mousedev *VAR_1)
{
 FUNC_1(&VAR_1->cdev, &VAR_1->dev);
 FUNC_4(VAR_1);
 FUNC_2(FUNC_0(VAR_1->dev.devt));
 if (VAR_1 != VAR_0)
  FUNC_3(&VAR_1->handle);
 FUNC_5(&VAR_1->dev);
}
