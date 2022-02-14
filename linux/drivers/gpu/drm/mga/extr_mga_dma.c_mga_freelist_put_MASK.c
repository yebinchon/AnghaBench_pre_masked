
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {TYPE_4__* dev_private; } ;
struct TYPE_7__ {TYPE_3__* tail; TYPE_3__* head; TYPE_1__* primary; } ;
typedef TYPE_2__ drm_mga_private_t ;
struct TYPE_10__ {int head; int wrap; } ;
struct TYPE_8__ {struct TYPE_8__* next; struct TYPE_8__* prev; TYPE_5__ age; } ;
typedef TYPE_3__ drm_mga_freelist_t ;
struct TYPE_9__ {TYPE_3__* list_entry; } ;
typedef TYPE_4__ drm_mga_buf_priv_t ;
struct TYPE_6__ {int offset; } ;


 int FUNC_0 (char*,unsigned long,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*,int ,int ) ;

int FUNC_2(struct drm_device *VAR_2, struct drm_buf *VAR_3)
{
 drm_mga_private_t *VAR_4 = VAR_2->dev_private;
 drm_mga_buf_priv_t *VAR_5 = VAR_3->dev_private;
 drm_mga_freelist_t *VAR_6, *VAR_7, *VAR_8;

 FUNC_0("age=0x%06lx wrap=%d\n",
    (unsigned long)(VAR_5->list_entry->age.head -
      VAR_4->primary->offset),
    VAR_5->list_entry->age.wrap);

 VAR_7 = VAR_5->list_entry;
 VAR_6 = VAR_4->head;

 if (VAR_5->list_entry->age.head == VAR_1) {
  FUNC_1(&VAR_7->age, VAR_0, 0);
  VAR_8 = VAR_4->tail;
  VAR_8->next = VAR_7;
  VAR_7->prev = VAR_8;
  VAR_7->next = ((void*)0);
 } else {
  VAR_8 = VAR_6->next;
  VAR_6->next = VAR_7;
  VAR_8->prev = VAR_7;
  VAR_7->prev = VAR_6;
  VAR_7->next = VAR_8;
 }

 return 0;
}
