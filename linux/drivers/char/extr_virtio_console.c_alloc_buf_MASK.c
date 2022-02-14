
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* parent; } ;
struct virtio_device {TYPE_2__ dev; } ;
struct port_buffer {int sgpages; size_t size; scalar_t__ offset; scalar_t__ len; int * buf; int * dev; int dma; } ;
struct TYPE_3__ {int * parent; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,size_t,int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct virtio_device*) ;
 int FUNC_3 (struct port_buffer*) ;
 void* FUNC_4 (size_t,int ) ;
 int FUNC_5 () ;
 int VAR_1 ;
 size_t FUNC_6 (struct port_buffer*,int ,int) ;

__attribute__((used)) static struct port_buffer *FUNC_7(struct virtio_device *VAR_2, size_t VAR_3,
         int VAR_4)
{
 struct port_buffer *VAR_5;

 FUNC_5();





 VAR_5 = FUNC_4(FUNC_6(VAR_5, VAR_1, VAR_4), VAR_0);
 if (!VAR_5)
  goto fail;

 VAR_5->sgpages = VAR_4;
 if (VAR_4 > 0) {
  VAR_5->dev = ((void*)0);
  VAR_5->buf = ((void*)0);
  return VAR_5;
 }

 if (FUNC_2(VAR_2)) {






  if (!VAR_2->dev.parent || !VAR_2->dev.parent->parent)
   goto free_buf;
  VAR_5->dev = VAR_2->dev.parent->parent;


  FUNC_1(VAR_5->dev);
  VAR_5->buf = FUNC_0(VAR_5->dev, VAR_3, &VAR_5->dma,
           VAR_0);
 } else {
  VAR_5->dev = ((void*)0);
  VAR_5->buf = FUNC_4(VAR_3, VAR_0);
 }

 if (!VAR_5->buf)
  goto free_buf;
 VAR_5->len = 0;
 VAR_5->offset = 0;
 VAR_5->size = VAR_3;
 return VAR_5;

free_buf:
 FUNC_3(VAR_5);
fail:
 return ((void*)0);
}
