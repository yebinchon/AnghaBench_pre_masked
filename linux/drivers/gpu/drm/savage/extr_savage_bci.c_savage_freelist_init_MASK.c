
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device_dma {int buf_count; struct drm_buf** buflist; } ;
struct drm_device {struct drm_device_dma* dma; TYPE_1__* dev_private; } ;
struct drm_buf {TYPE_2__* dev_private; } ;
struct TYPE_4__ {struct TYPE_4__* next; struct TYPE_4__* prev; struct drm_buf* buf; int age; } ;
struct TYPE_3__ {TYPE_2__ head; TYPE_2__ tail; } ;
typedef TYPE_1__ drm_savage_private_t ;
typedef TYPE_2__ drm_savage_buf_priv_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device * VAR_0)
{
 drm_savage_private_t *VAR_1 = VAR_0->dev_private;
 struct drm_device_dma *VAR_2 = VAR_0->dma;
 struct drm_buf *VAR_3;
 drm_savage_buf_priv_t *VAR_4;
 int VAR_5;
 FUNC_0("count=%d\n", VAR_2->buf_count);

 VAR_1->head.next = &VAR_1->tail;
 VAR_1->head.prev = ((void*)0);
 VAR_1->head.buf = ((void*)0);

 VAR_1->tail.next = ((void*)0);
 VAR_1->tail.prev = &VAR_1->head;
 VAR_1->tail.buf = ((void*)0);

 for (VAR_5 = 0; VAR_5 < VAR_2->buf_count; VAR_5++) {
  VAR_3 = VAR_2->buflist[VAR_5];
  VAR_4 = VAR_3->dev_private;

  FUNC_1(&VAR_4->age, 0, 0);
  VAR_4->buf = VAR_3;

  VAR_4->next = VAR_1->head.next;
  VAR_4->prev = &VAR_1->head;
  VAR_1->head.next->prev = VAR_4;
  VAR_1->head.next = VAR_4;
 }

 return 0;
}
