
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dev; } ;
struct ar8327_led {scalar_t__ mode; TYPE_1__ cdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_3(struct ar8327_led *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(((void*)0), &VAR_2->cdev);
 if (VAR_3 < 0)
  return VAR_3;

 if (VAR_2->mode == VAR_0) {
  VAR_3 = FUNC_0(VAR_2->cdev.dev,
      &VAR_1);
  if (VAR_3)
   goto err_unregister;
 }

 return 0;

err_unregister:
 FUNC_2(&VAR_2->cdev);
 return VAR_3;
}
