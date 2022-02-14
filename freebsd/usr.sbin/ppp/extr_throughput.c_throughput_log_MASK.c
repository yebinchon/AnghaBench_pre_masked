
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppThroughput {int OctetsIn; int OctetsOut; int BestOctetsPerSecondTime; int BestOctetsPerSecond; scalar_t__ rolling; int PacketsOut; int PacketsIn; scalar_t__ uptime; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (struct pppThroughput*) ;

void
FUNC_3(struct pppThroughput *VAR_0, int VAR_1, const char *VAR_2)
{
  if (VAR_0->uptime) {
    int VAR_3;

    VAR_3 = FUNC_2(VAR_0);
    if (VAR_2 == ((void*)0))
      VAR_2 = "";
    FUNC_1(VAR_1, "%s%sConnect time: %d secs: %llu octets in, %llu octets"
               " out\n", VAR_2, *VAR_2 ? ": " : "", VAR_3, VAR_0->OctetsIn,
               VAR_0->OctetsOut);
    FUNC_1(VAR_1, "%s%s%llu packets in, %llu packets out\n",
               VAR_2, *VAR_2 ? ": " : "", VAR_0->PacketsIn, VAR_0->PacketsOut);
    if (VAR_3 == 0)
      VAR_3 = 1;
    if (VAR_0->rolling)
      FUNC_1(VAR_1, " total %llu bytes/sec, peak %llu bytes/sec on %s",
                 (VAR_0->OctetsIn + VAR_0->OctetsOut) / VAR_3, VAR_0->BestOctetsPerSecond,
                 FUNC_0(&VAR_0->BestOctetsPerSecondTime));
    else
      FUNC_1(VAR_1, " total %llu bytes/sec\n",
                 (VAR_0->OctetsIn + VAR_0->OctetsOut) / VAR_3);
  }
}
