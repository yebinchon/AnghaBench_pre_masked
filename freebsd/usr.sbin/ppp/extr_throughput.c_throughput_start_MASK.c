
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ OctetsPerSecond; scalar_t__* SampleOctets; } ;
struct TYPE_3__ {scalar_t__ OctetsPerSecond; scalar_t__* SampleOctets; } ;
struct pppThroughput {int SamplePeriod; int uptime; scalar_t__ downtime; int BestOctetsPerSecondTime; scalar_t__ BestOctetsPerSecond; TYPE_2__ out; TYPE_1__ in; scalar_t__ PacketsOut; scalar_t__ PacketsIn; scalar_t__ OctetsOut; scalar_t__ OctetsIn; scalar_t__ nSample; int Timer; } ;


 int FUNC_0 (struct pppThroughput*,char const*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct pppThroughput *VAR_0, const char *VAR_1, int VAR_2)
{
  int VAR_3;
  FUNC_2(&VAR_0->Timer);

  for (VAR_3 = 0; VAR_3 < VAR_0->SamplePeriod; VAR_3++)
    VAR_0->in.SampleOctets[VAR_3] = VAR_0->out.SampleOctets[VAR_3] = 0;
  VAR_0->nSample = 0;
  VAR_0->OctetsIn = VAR_0->OctetsOut = VAR_0->PacketsIn = VAR_0->PacketsOut = 0;
  VAR_0->in.OctetsPerSecond = VAR_0->out.OctetsPerSecond = VAR_0->BestOctetsPerSecond = 0;
  FUNC_1(&VAR_0->BestOctetsPerSecondTime);
  VAR_0->downtime = 0;
  FUNC_1(&VAR_0->uptime);
  FUNC_0(VAR_0, VAR_1, VAR_2);
}
