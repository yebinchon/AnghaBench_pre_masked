
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_ringbuffer {unsigned long size; void* data; } ;
struct dmxdev_filter {scalar_t__ state; TYPE_1__* dev; struct dvb_ringbuffer buffer; } ;
struct TYPE_2__ {int lock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_ringbuffer*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (unsigned long) ;

__attribute__((used)) static int FUNC_5(struct dmxdev_filter *VAR_4,
          unsigned long VAR_5)
{
 struct dvb_ringbuffer *VAR_6 = &VAR_4->buffer;
 void *VAR_7;
 void *VAR_8;

 if (VAR_6->size == VAR_5)
  return 0;
 if (!VAR_5)
  return -VAR_2;
 if (VAR_4->state >= VAR_0)
  return -VAR_1;

 VAR_7 = FUNC_4(VAR_5);
 if (!VAR_7)
  return -VAR_3;

 VAR_8 = VAR_6->data;

 FUNC_1(&VAR_4->dev->lock);
 VAR_6->data = VAR_7;
 VAR_6->size = VAR_5;


 FUNC_0(VAR_6);
 FUNC_2(&VAR_4->dev->lock);

 FUNC_3(VAR_8);

 return 0;
}
