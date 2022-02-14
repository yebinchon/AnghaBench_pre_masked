
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_devdata {int user_device; int user_cdev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_3)
{
 if (FUNC_0(&VAR_0) == 0)
  FUNC_1(&VAR_1, &VAR_2);

 FUNC_1(&VAR_3->user_cdev, &VAR_3->user_device);
}
