
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; } ;
struct syncobj_wait_entry {TYPE_1__ node; } ;
struct drm_syncobj {int lock; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_syncobj *VAR_0,
        struct syncobj_wait_entry *VAR_1)
{
 if (!VAR_1->node.next)
  return;

 FUNC_1(&VAR_0->lock);
 FUNC_0(&VAR_1->node);
 FUNC_2(&VAR_0->lock);
}
