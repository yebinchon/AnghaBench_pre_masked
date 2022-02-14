
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {struct bitmap* bitmap; } ;
struct bitmap {int behind_writes; int behind_wait; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct mddev*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct mddev *VAR_0)
{
 struct bitmap *VAR_1 = VAR_0->bitmap;


 if (VAR_1 && FUNC_0(&VAR_1->behind_writes) > 0) {
  FUNC_2("md:%s: behind writes in progress - waiting to stop.\n",
    FUNC_1(VAR_0));

  FUNC_3(VAR_1->behind_wait,
      FUNC_0(&VAR_1->behind_writes) == 0);
 }
}
