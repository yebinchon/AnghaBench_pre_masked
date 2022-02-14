
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ringbuffer {scalar_t__ pread; int pwrite; } ;


 scalar_t__ FUNC_0 (int *) ;

int FUNC_1(struct dvb_ringbuffer *VAR_0)
{






 return (VAR_0->pread == FUNC_0(&VAR_0->pwrite));
}
