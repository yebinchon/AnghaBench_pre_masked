
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoetgt {int maxout; int ssthresh; int nframes; int next_cwnd; } ;



void
FUNC_0(struct aoetgt *VAR_0)
{
 VAR_0->maxout = 1;
 VAR_0->ssthresh = VAR_0->nframes / 2;
 VAR_0->next_cwnd = VAR_0->nframes;
}
