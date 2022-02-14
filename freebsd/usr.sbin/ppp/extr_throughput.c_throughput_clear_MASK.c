
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prompt {int dummy; } ;
struct TYPE_4__ {char* OctetsPerSecond; scalar_t__* SampleOctets; } ;
struct TYPE_3__ {char* OctetsPerSecond; scalar_t__* SampleOctets; } ;
struct pppThroughput {int SamplePeriod; int OctetsIn; int OctetsOut; int PacketsIn; int PacketsOut; char* BestOctetsPerSecond; int BestOctetsPerSecondTime; TYPE_2__ out; TYPE_1__ in; int uptime; scalar_t__ downtime; scalar_t__ nSample; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (struct prompt*,char*,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct pppThroughput*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct pppThroughput *VAR_3, int VAR_4, struct prompt *VAR_5)
{
  if (VAR_4 & (VAR_1|VAR_0)) {
    int VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_3->SamplePeriod; VAR_6++)
      VAR_3->in.SampleOctets[VAR_6] = VAR_3->out.SampleOctets[VAR_6] = 0;
    VAR_3->nSample = 0;
  }

  if (VAR_4 & VAR_1) {
    int VAR_7;

    if ((VAR_7 = FUNC_3(VAR_3)) == 0)
      VAR_7 = 1;
    FUNC_1(VAR_5, "overall cleared (was %6llu bytes/sec)\n",
                  (VAR_3->OctetsIn + VAR_3->OctetsOut) / VAR_7);
    VAR_3->OctetsIn = VAR_3->OctetsOut = VAR_3->PacketsIn = VAR_3->PacketsOut = 0;
    VAR_3->downtime = 0;
    FUNC_4(&VAR_3->uptime);
  }

  if (VAR_4 & VAR_0) {
    FUNC_1(VAR_5, "current cleared (was %6llu bytes/sec in,"
                  " %6llu bytes/sec out)\n",
                  VAR_3->in.OctetsPerSecond, VAR_3->out.OctetsPerSecond);
    VAR_3->in.OctetsPerSecond = VAR_3->out.OctetsPerSecond = 0;
  }

  if (VAR_4 & VAR_2) {
    char *VAR_8, *VAR_9;

    VAR_8 = FUNC_0(&VAR_3->BestOctetsPerSecondTime);
    VAR_9 = VAR_8 + FUNC_2(VAR_8);
    if (VAR_9 > VAR_8 && *--VAR_9 == '\n')
      *VAR_9 = '\0';
    FUNC_1(VAR_5, "peak    cleared (was %6llu bytes/sec on %s)\n",
                  VAR_3->BestOctetsPerSecond, VAR_8);
    VAR_3->BestOctetsPerSecond = 0;
    FUNC_4(&VAR_3->BestOctetsPerSecondTime);
  }
}
