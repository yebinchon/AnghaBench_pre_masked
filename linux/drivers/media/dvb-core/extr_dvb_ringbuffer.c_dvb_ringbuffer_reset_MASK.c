
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {scalar_t__ error; int pwrite; int pread; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct dvb_ringbuffer *VAR_0)
{



 FUNC_0(&VAR_0->pread, 0);

 FUNC_0(&VAR_0->pwrite, 0);
 VAR_0->error = 0;
}
