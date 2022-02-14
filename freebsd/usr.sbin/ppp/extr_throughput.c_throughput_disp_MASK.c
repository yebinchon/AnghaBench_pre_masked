
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct prompt {int dummy; } ;
struct TYPE_4__ {int OctetsPerSecond; } ;
struct TYPE_3__ {int OctetsPerSecond; } ;
struct pppThroughput {int OctetsIn; int OctetsOut; int SamplePeriod; scalar_t__ BestOctetsPerSecondTime; int BestOctetsPerSecond; TYPE_2__ out; TYPE_1__ in; scalar_t__ downtime; scalar_t__ rolling; int PacketsOut; int PacketsIn; } ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (struct prompt*,char*,...) ;
 int FUNC_2 (struct pppThroughput*) ;

void
FUNC_3(struct pppThroughput *VAR_0, struct prompt *VAR_1)
{
  int VAR_2, VAR_3;

  VAR_2 = FUNC_2(VAR_0);
  FUNC_1(VAR_1, "Connect time: %d:%02d:%02d", VAR_2 / 3600,
                (VAR_2 / 60) % 60, VAR_2 % 60);
  if (VAR_0->downtime)
    FUNC_1(VAR_1, " - down at %s", FUNC_0(&VAR_0->downtime));
  else
    FUNC_1(VAR_1, "\n");

  VAR_3 = VAR_2 ? VAR_2 : 1;
  FUNC_1(VAR_1, "%llu octets in, %llu octets out\n",
                VAR_0->OctetsIn, VAR_0->OctetsOut);
  FUNC_1(VAR_1, "%llu packets in, %llu packets out\n",
                VAR_0->PacketsIn, VAR_0->PacketsOut);
  if (VAR_0->rolling) {
    FUNC_1(VAR_1, "  overall   %6llu bytes/sec\n",
                  (VAR_0->OctetsIn + VAR_0->OctetsOut) / VAR_3);
    FUNC_1(VAR_1, "  %s %6llu bytes/sec in, %6llu bytes/sec out "
                  "(over the last %d secs)\n",
                  VAR_0->downtime ? "average  " : "currently",
                  VAR_0->in.OctetsPerSecond, VAR_0->out.OctetsPerSecond,
                  VAR_2 > VAR_0->SamplePeriod ? VAR_0->SamplePeriod : VAR_2);
    FUNC_1(VAR_1, "  peak      %6llu bytes/sec on %s",
                  VAR_0->BestOctetsPerSecond, FUNC_0(&VAR_0->BestOctetsPerSecondTime));
  } else
    FUNC_1(VAR_1, "Overall %llu bytes/sec\n",
                  (VAR_0->OctetsIn + VAR_0->OctetsOut) / VAR_3);
}
