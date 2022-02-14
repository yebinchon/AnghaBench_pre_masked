
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ringbuffer {int pwrite; } ;
typedef int ssize_t ;


 int FUNC_0 (struct dvb_ringbuffer*,size_t) ;
 size_t VAR_0 ;
 int FUNC_1 (struct dvb_ringbuffer*,int *,size_t) ;

ssize_t FUNC_2(struct dvb_ringbuffer *VAR_1, u8* VAR_2, size_t VAR_3)
{
 int VAR_4;
 ssize_t VAR_5 = VAR_1->pwrite;

 FUNC_0(VAR_1, VAR_3 >> 8);
 FUNC_0(VAR_1, VAR_3 & 0xff);
 FUNC_0(VAR_1, VAR_0);
 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);

 if (VAR_4 < 0) VAR_1->pwrite = VAR_5;
 return VAR_4;
}
