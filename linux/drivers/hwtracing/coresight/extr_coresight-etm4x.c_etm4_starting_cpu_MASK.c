
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int spinlock; int mode; int os_unlock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_1)
{
 if (!VAR_0[VAR_1])
  return 0;

 FUNC_3(&VAR_0[VAR_1]->spinlock);
 if (!VAR_0[VAR_1]->os_unlock)
  FUNC_1(VAR_0[VAR_1]);

 if (FUNC_2(&VAR_0[VAR_1]->mode))
  FUNC_0(VAR_0[VAR_1]);
 FUNC_4(&VAR_0[VAR_1]->spinlock);
 return 0;
}
