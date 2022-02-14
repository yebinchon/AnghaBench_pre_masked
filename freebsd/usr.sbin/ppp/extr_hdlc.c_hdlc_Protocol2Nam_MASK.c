
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u_short ;
struct TYPE_2__ {scalar_t__ from; scalar_t__ to; char const* name; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;

const char *
FUNC_0(u_short VAR_2)
{
  unsigned VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    if (VAR_2 >= VAR_1[VAR_3].from && VAR_2 <= VAR_1[VAR_3].to)
      return VAR_1[VAR_3].name;
    else if (VAR_2 < VAR_1[VAR_3].from)
      break;
  return "unrecognised protocol";
}
