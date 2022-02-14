
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct master {TYPE_2__* match; } ;
struct component {int dummy; } ;
struct TYPE_4__ {size_t num; TYPE_1__* compare; } ;
struct TYPE_3__ {struct component* component; } ;



__attribute__((used)) static void FUNC_0(struct master *VAR_0, struct component *VAR_1)
{
 size_t VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->match->num; VAR_2++)
  if (VAR_0->match->compare[VAR_2].component == VAR_1)
   VAR_0->match->compare[VAR_2].component = ((void*)0);
}
