
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ WRes ;
struct TYPE_5__ {int thread; } ;
typedef int SRes ;
typedef TYPE_1__ CMtDecThread ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static SRes FUNC_4(CMtDecThread *VAR_2)
{
  WRes VAR_3 = FUNC_1(VAR_2);

  if (VAR_3 == 0)
  {
    if (FUNC_3(&VAR_2->thread))
      return VAR_0;
    VAR_3 = FUNC_2(&VAR_2->thread, VAR_1, VAR_2);
    if (VAR_3 == 0)
      return VAR_0;
  }
  return FUNC_0(VAR_3);
}
