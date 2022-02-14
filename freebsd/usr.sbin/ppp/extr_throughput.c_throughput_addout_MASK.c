
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pppThroughput {long long OctetsOut; int PacketsOut; } ;



void
FUNC_0(struct pppThroughput *VAR_0, long long VAR_1)
{
  VAR_0->OctetsOut += VAR_1;
  VAR_0->PacketsOut++;
}
