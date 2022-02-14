
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {int queue; int lock; } ;


 int FUNC_0 (struct dvb_ringbuffer*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dvb_ringbuffer *VAR_0)
{
 unsigned long VAR_1;

 FUNC_1(&VAR_0->lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_2(&VAR_0->lock, VAR_1);

 FUNC_3(&VAR_0->queue);
}
