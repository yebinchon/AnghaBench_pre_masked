
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ WRes ;
struct TYPE_4__ {int startEvent; int thread; int stop; } ;
typedef int SRes ;
typedef TYPE_1__ CMtCoderThread ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static SRes FUNC_5(CMtCoderThread *VAR_3)
{
  WRes VAR_4 = FUNC_0(&VAR_3->startEvent);
  if (VAR_4 == 0)
  {
    VAR_3->stop = VAR_0;
    if (!FUNC_4(&VAR_3->thread))
      VAR_4 = FUNC_3(&VAR_3->thread, VAR_2, VAR_3);
    if (VAR_4 == 0)
      VAR_4 = FUNC_1(&VAR_3->startEvent);
  }
  if (VAR_4 == 0)
    return VAR_1;
  return FUNC_2(VAR_4);
}
