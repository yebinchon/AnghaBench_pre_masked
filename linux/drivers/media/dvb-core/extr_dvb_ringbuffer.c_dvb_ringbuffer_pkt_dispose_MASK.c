
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {size_t* data; size_t size; } ;


 size_t FUNC_0 (struct dvb_ringbuffer*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct dvb_ringbuffer*,scalar_t__) ;
 size_t VAR_1 ;
 scalar_t__ FUNC_2 (struct dvb_ringbuffer*) ;

void FUNC_3(struct dvb_ringbuffer *VAR_2, size_t VAR_3)
{
 size_t VAR_4;

 VAR_2->data[(VAR_3 + 2) % VAR_2->size] = VAR_1;


 while(FUNC_2(VAR_2) > VAR_0) {
  if (FUNC_0(VAR_2, 2) == VAR_1) {
   VAR_4 = FUNC_0(VAR_2, 0) << 8;
   VAR_4 |= FUNC_0(VAR_2, 1);
   FUNC_1(VAR_2, VAR_4 + VAR_0);
  } else {

   break;
  }
 }
}
