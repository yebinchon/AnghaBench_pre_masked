
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int spinlock; int mode; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(unsigned int VAR_1)
{
 if (!VAR_0[VAR_1])
  return 0;

 FUNC_2(&VAR_0[VAR_1]->spinlock);
 if (FUNC_1(&VAR_0[VAR_1]->mode))
  FUNC_0(VAR_0[VAR_1]);
 FUNC_3(&VAR_0[VAR_1]->spinlock);
 return 0;
}
