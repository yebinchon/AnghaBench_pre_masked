
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * SampleOctets; } ;
struct TYPE_3__ {int * SampleOctets; } ;
struct pppThroughput {TYPE_2__ out; TYPE_1__ in; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pppThroughput*) ;

void
FUNC_2(struct pppThroughput *VAR_0)
{
  if (VAR_0 && VAR_0->in.SampleOctets) {
    FUNC_1(VAR_0);
    FUNC_0(VAR_0->in.SampleOctets);
    FUNC_0(VAR_0->out.SampleOctets);
    VAR_0->in.SampleOctets = ((void*)0);
    VAR_0->out.SampleOctets = ((void*)0);
  }
}
