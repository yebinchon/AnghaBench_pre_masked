
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aoetgt {scalar_t__ maxout; scalar_t__ nframes; scalar_t__ ssthresh; scalar_t__ nout; scalar_t__ next_cwnd; } ;
struct aoedev {long rttavg; long rttdev; } ;


 long VAR_0 ;
 long VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct aoedev *VAR_2, struct aoetgt *VAR_3, int VAR_4)
{
 register long VAR_5;

 VAR_5 = VAR_4;


 VAR_5 -= VAR_2->rttavg >> VAR_1;
 VAR_2->rttavg += VAR_5;
 if (VAR_5 < 0)
  VAR_5 = -VAR_5;
 VAR_5 -= VAR_2->rttdev >> VAR_0;
 VAR_2->rttdev += VAR_5;

 if (!VAR_3 || VAR_3->maxout >= VAR_3->nframes)
  return;
 if (VAR_3->maxout < VAR_3->ssthresh)
  VAR_3->maxout += 1;
 else if (VAR_3->nout == VAR_3->maxout && VAR_3->next_cwnd-- == 0) {
  VAR_3->maxout += 1;
  VAR_3->next_cwnd = VAR_3->maxout;
 }
}
