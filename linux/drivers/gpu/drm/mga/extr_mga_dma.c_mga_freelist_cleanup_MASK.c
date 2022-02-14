
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {int * tail; TYPE_2__* head; } ;
typedef TYPE_1__ drm_mga_private_t ;
struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_2__ drm_mga_freelist_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_0)
{
 drm_mga_private_t *VAR_1 = VAR_0->dev_private;
 drm_mga_freelist_t *VAR_2;
 drm_mga_freelist_t *VAR_3;
 FUNC_0("\n");

 VAR_2 = VAR_1->head;
 while (VAR_2) {
  VAR_3 = VAR_2->next;
  FUNC_1(VAR_2);
  VAR_2 = VAR_3;
 }

 VAR_1->head = VAR_1->tail = ((void*)0);
}
