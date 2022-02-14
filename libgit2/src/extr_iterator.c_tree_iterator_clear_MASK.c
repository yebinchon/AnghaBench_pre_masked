
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ size; } ;
struct TYPE_5__ {int base; int entry_path; int entry_pool; TYPE_4__ frames; } ;
typedef TYPE_1__ tree_iterator ;


 int FUNC_0 (TYPE_4__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(tree_iterator *VAR_0)
{
 while (VAR_0->frames.size)
  FUNC_4(VAR_0);

 FUNC_0(VAR_0->frames);

 FUNC_2(&VAR_0->entry_pool);
 FUNC_1(&VAR_0->entry_path);

 FUNC_3(&VAR_0->base);
}
