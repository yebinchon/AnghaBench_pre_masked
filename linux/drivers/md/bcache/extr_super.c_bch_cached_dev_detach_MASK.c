
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cl; int flags; } ;
struct cached_dev {TYPE_1__ disk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cached_dev*) ;
 int FUNC_1 (struct cached_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

void FUNC_6(struct cached_dev *VAR_3)
{
 FUNC_3(&VAR_2);

 if (FUNC_5(VAR_0, &VAR_3->disk.flags))
  return;

 if (FUNC_4(VAR_1, &VAR_3->disk.flags))
  return;





 FUNC_2(&VAR_3->disk.cl);

 FUNC_0(VAR_3);

 FUNC_1(VAR_3);
}
