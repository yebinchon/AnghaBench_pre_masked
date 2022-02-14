
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* filters; } ;
struct TYPE_5__ {scalar_t__ id; int propsSize; int* props; } ;
typedef TYPE_1__ CXzFilter ;
typedef TYPE_2__ CXzBlock ;
typedef int BoolInt ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static BoolInt FUNC_1(const CXzBlock *VAR_5)
{
  unsigned VAR_6 = FUNC_0(VAR_5) - 1;
  unsigned VAR_7;
  {
    const CXzFilter *VAR_8 = &VAR_5->filters[VAR_6];
    if (VAR_8->id != VAR_3 || VAR_8->propsSize != 1 || VAR_8->props[0] > 40)
      return VAR_0;
  }

  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  {
    const CXzFilter *VAR_9 = &VAR_5->filters[VAR_7];
    if (VAR_9->id == VAR_2)
    {
      if (VAR_9->propsSize != 1)
        return VAR_0;
    }
    else if (VAR_9->id < VAR_2
        || VAR_9->id > VAR_4
        || (VAR_9->propsSize != 0 && VAR_9->propsSize != 4))
      return VAR_0;
  }
  return VAR_1;
}
