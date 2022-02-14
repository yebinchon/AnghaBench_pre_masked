
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ WRes ;
struct TYPE_3__ {int canRead; int canWrite; } ;
typedef TYPE_1__ CMtDecThread ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static WRes FUNC_1(CMtDecThread *VAR_1)
{
  WRes VAR_2 = FUNC_0(&VAR_1->canWrite);
  if (VAR_2 == 0)
  {
    VAR_2 = FUNC_0(&VAR_1->canRead);
    if (VAR_2 == 0)
      return VAR_0;
  }
  return VAR_2;
}
