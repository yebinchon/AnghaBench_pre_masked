
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {size_t size; int lock; int queue; scalar_t__ error; void* data; scalar_t__ pwrite; scalar_t__ pread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct dvb_ringbuffer *VAR_0, void *VAR_1, size_t VAR_2)
{
 VAR_0->pread=VAR_0->pwrite=0;
 VAR_0->data=VAR_1;
 VAR_0->size=VAR_2;
 VAR_0->error=0;

 FUNC_0(&VAR_0->queue);

 FUNC_1(&(VAR_0->lock));
}
