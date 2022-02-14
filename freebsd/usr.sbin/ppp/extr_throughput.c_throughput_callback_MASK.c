
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void (* fn ) (void*) ;void* data; } ;
struct pppThroughput {TYPE_1__ callback; } ;



void
FUNC_0(struct pppThroughput *VAR_0, void (*VAR_1)(void *), void *VAR_2)
{
  VAR_0->callback.fn = VAR_1;
  VAR_0->callback.data = VAR_2;
}
