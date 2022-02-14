
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct master {TYPE_2__* match; } ;
struct device {int dummy; } ;
struct component {int dummy; } ;
struct TYPE_4__ {size_t num; TYPE_1__* compare; } ;
struct TYPE_3__ {struct component* component; int duplicate; } ;


 int FUNC_0 (int) ;
 struct master* FUNC_1 (struct device*,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct component*,struct master*,void*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct device *VAR_1, void *VAR_2)
{
 struct master *VAR_3;
 struct component *VAR_4;
 size_t VAR_5;

 FUNC_0(!FUNC_3(&VAR_0));

 VAR_3 = FUNC_1(VAR_1, ((void*)0));
 if (!VAR_3)
  return;


 for (VAR_5 = VAR_3->match->num; VAR_5--; )
  if (!VAR_3->match->compare[VAR_5].duplicate) {
   VAR_4 = VAR_3->match->compare[VAR_5].component;
   FUNC_2(VAR_4, VAR_3, VAR_2);
  }
}
