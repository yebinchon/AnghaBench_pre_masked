
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mapped_device {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mapped_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

int FUNC_4(struct mapped_device *VAR_3)
{
 FUNC_1(&VAR_2);
 if (FUNC_3(VAR_0, &VAR_3->flags)) {
  FUNC_2(&VAR_2);
  return -VAR_1;
 }
 FUNC_0(VAR_3);
 FUNC_2(&VAR_2);
 return 0;
}
