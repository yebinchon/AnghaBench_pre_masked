
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {scalar_t__ pwrite; scalar_t__ size; int pread; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int ) ;

ssize_t FUNC_1(struct dvb_ringbuffer *VAR_0)
{
 ssize_t VAR_1;






 VAR_1 = FUNC_0(VAR_0->pread) - VAR_0->pwrite;
 if (VAR_1 <= 0)
  VAR_1 += VAR_0->size;
 return VAR_1-1;
}
