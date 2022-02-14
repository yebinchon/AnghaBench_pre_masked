
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {scalar_t__ error; int pwrite; int pread; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct dvb_ringbuffer *VAR_0)
{






 FUNC_1(&VAR_0->pread, FUNC_0(&VAR_0->pwrite));
 VAR_0->error = 0;
}
