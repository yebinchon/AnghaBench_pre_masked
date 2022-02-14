
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_4__ {scalar_t__* SampleOctets; } ;
struct TYPE_3__ {scalar_t__* SampleOctets; } ;
struct pppThroughput {scalar_t__ downtime; scalar_t__ uptime; int SamplePeriod; scalar_t__ nSample; TYPE_2__ out; TYPE_1__ in; } ;


 scalar_t__ FUNC_0 (int *) ;

int
FUNC_1(struct pppThroughput *VAR_0)
{
  time_t VAR_1;

  VAR_1 = VAR_0->downtime ? VAR_0->downtime : FUNC_0(((void*)0));
  if (VAR_0->uptime && VAR_1 < VAR_0->uptime) {

    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->SamplePeriod; VAR_2++)
      VAR_0->in.SampleOctets[VAR_2] = VAR_0->out.SampleOctets[VAR_2] = 0;
    VAR_0->nSample = 0;
    VAR_0->uptime = VAR_1;
  }
  return VAR_0->uptime ? VAR_1 - VAR_0->uptime : 0;
}
