
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; } ;
struct drm_buf {TYPE_3__* dev_private; } ;
struct TYPE_5__ {TYPE_2__* head; TYPE_2__* tail; } ;
typedef TYPE_1__ drm_mga_private_t ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; struct drm_buf* buf; int age; } ;
typedef TYPE_2__ drm_mga_freelist_t ;
struct TYPE_7__ {scalar_t__ dispatched; scalar_t__ discard; TYPE_2__* list_entry; } ;
typedef TYPE_3__ drm_mga_buf_priv_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,int ) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_4, drm_mga_private_t *VAR_5)
{
 struct drm_device_dma *VAR_6 = VAR_4->dma;
 struct drm_buf *VAR_7;
 drm_mga_buf_priv_t *VAR_8;
 drm_mga_freelist_t *VAR_9;
 int VAR_10;
 FUNC_0("count=%d\n", VAR_6->buf_count);

 VAR_5->head = FUNC_2(sizeof(drm_mga_freelist_t), VAR_1);
 if (VAR_5->head == ((void*)0))
  return -VAR_0;

 FUNC_1(&VAR_5->head->age, VAR_3, 0);

 for (VAR_10 = 0; VAR_10 < VAR_6->buf_count; VAR_10++) {
  VAR_7 = VAR_6->buflist[VAR_10];
  VAR_8 = VAR_7->dev_private;

  VAR_9 = FUNC_2(sizeof(drm_mga_freelist_t), VAR_1);
  if (VAR_9 == ((void*)0))
   return -VAR_0;

  VAR_9->next = VAR_5->head->next;
  VAR_9->prev = VAR_5->head;
  FUNC_1(&VAR_9->age, VAR_2, 0);
  VAR_9->buf = VAR_7;

  if (VAR_5->head->next != ((void*)0))
   VAR_5->head->next->prev = VAR_9;
  if (VAR_9->next == ((void*)0))
   VAR_5->tail = VAR_9;

  VAR_8->list_entry = VAR_9;
  VAR_8->discard = 0;
  VAR_8->dispatched = 0;

  VAR_5->head->next = VAR_9;
 }

 return 0;
}
