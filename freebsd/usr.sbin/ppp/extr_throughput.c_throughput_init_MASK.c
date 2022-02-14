
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int * fn; int * data; } ;
struct TYPE_8__ {char* name; } ;
struct TYPE_6__ {long long* SampleOctets; scalar_t__ OctetsPerSecond; } ;
struct TYPE_5__ {long long* SampleOctets; scalar_t__ OctetsPerSecond; } ;
struct pppThroughput {int SamplePeriod; TYPE_3__ callback; scalar_t__ rolling; scalar_t__ downtime; scalar_t__ uptime; TYPE_4__ Timer; int BestOctetsPerSecondTime; scalar_t__ nSample; scalar_t__ BestOctetsPerSecond; TYPE_2__ out; TYPE_1__ in; scalar_t__ PacketsOut; scalar_t__ PacketsIn; scalar_t__ OctetsOut; scalar_t__ OctetsIn; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_4__*,char,int) ;
 int FUNC_2 (struct pppThroughput*) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct pppThroughput *VAR_0, int VAR_1)
{
  VAR_0->OctetsIn = VAR_0->OctetsOut = VAR_0->PacketsIn = VAR_0->PacketsOut = 0;
  VAR_0->SamplePeriod = VAR_1;
  VAR_0->in.SampleOctets = (long long *)
    FUNC_0(VAR_1, sizeof *VAR_0->in.SampleOctets);
  VAR_0->in.OctetsPerSecond = 0;
  VAR_0->out.SampleOctets = (long long *)
    FUNC_0(VAR_1, sizeof *VAR_0->out.SampleOctets);
  VAR_0->out.OctetsPerSecond = 0;
  VAR_0->BestOctetsPerSecond = 0;
  VAR_0->nSample = 0;
  FUNC_3(&VAR_0->BestOctetsPerSecondTime);
  FUNC_1(&VAR_0->Timer, '\0', sizeof VAR_0->Timer);
  VAR_0->Timer.name = "throughput";
  VAR_0->uptime = 0;
  VAR_0->downtime = 0;
  VAR_0->rolling = 0;
  VAR_0->callback.data = ((void*)0);
  VAR_0->callback.fn = ((void*)0);
  FUNC_2(VAR_0);
}
