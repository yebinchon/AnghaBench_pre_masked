
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int lock; int map; int items; } ;
typedef TYPE_1__ git_sortedcache ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(git_sortedcache *VAR_0)
{

 if (FUNC_2(VAR_0) < 0)
  return;

 FUNC_6(VAR_0);
 FUNC_5(&VAR_0->items);
 FUNC_4(VAR_0->map);

 FUNC_3(VAR_0);

 FUNC_1(&VAR_0->lock);
 FUNC_0(VAR_0);
}
