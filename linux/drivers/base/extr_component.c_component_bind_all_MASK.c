
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


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct master* FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct component*,struct master*,void*) ;
 int VAR_1 ;
 int FUNC_3 (struct component*,struct master*,void*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct device *VAR_2, void *VAR_3)
{
 struct master *VAR_4;
 struct component *VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 FUNC_0(!FUNC_4(&VAR_1));

 VAR_4 = FUNC_1(VAR_2, ((void*)0));
 if (!VAR_4)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_4->match->num; VAR_6++)
  if (!VAR_4->match->compare[VAR_6].duplicate) {
   VAR_5 = VAR_4->match->compare[VAR_6].component;
   VAR_7 = FUNC_2(VAR_5, VAR_4, VAR_3);
   if (VAR_7)
    break;
  }

 if (VAR_7 != 0) {
  for (; VAR_6 > 0; VAR_6--)
   if (!VAR_4->match->compare[VAR_6 - 1].duplicate) {
    VAR_5 = VAR_4->match->compare[VAR_6 - 1].component;
    FUNC_3(VAR_5, VAR_4, VAR_3);
   }
 }

 return VAR_7;
}
