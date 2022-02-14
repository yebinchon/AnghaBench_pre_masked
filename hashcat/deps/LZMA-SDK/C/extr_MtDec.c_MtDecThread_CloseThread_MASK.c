
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int canWrite; int canRead; int thread; } ;
typedef TYPE_1__ CMtDecThread ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(CMtDecThread *VAR_0)
{
  if (FUNC_4(&VAR_0->thread))
  {
    FUNC_1(&VAR_0->canWrite);
    FUNC_1(&VAR_0->canRead);
    FUNC_3(&VAR_0->thread);
    FUNC_2(&VAR_0->thread);
  }

  FUNC_0(&VAR_0->canRead);
  FUNC_0(&VAR_0->canWrite);
}
