
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int data; int (* fn ) (int ) ;} ;
struct TYPE_5__ {unsigned long long* SampleOctets; unsigned long long OctetsPerSecond; } ;
struct TYPE_4__ {unsigned long long* SampleOctets; unsigned long long OctetsPerSecond; } ;
struct pppThroughput {int SamplePeriod; size_t nSample; unsigned long long OctetsIn; unsigned long long OctetsOut; unsigned long long BestOctetsPerSecond; int Timer; TYPE_3__ callback; int BestOctetsPerSecondTime; TYPE_2__ out; TYPE_1__ in; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pppThroughput*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(void *VAR_0)
{
  struct pppThroughput *VAR_1 = (struct pppThroughput *)VAR_0;
  unsigned long long VAR_2;
  int VAR_3, VAR_4;
  unsigned long long VAR_5;

  FUNC_4(&VAR_1->Timer);

  VAR_3 = FUNC_1(VAR_1);
  VAR_4 = VAR_3 < VAR_1->SamplePeriod ? VAR_3 + 1 : VAR_1->SamplePeriod;

  VAR_2 = VAR_1->in.SampleOctets[VAR_1->nSample];
  VAR_1->in.SampleOctets[VAR_1->nSample] = VAR_1->OctetsIn;
  VAR_1->in.OctetsPerSecond = (VAR_1->in.SampleOctets[VAR_1->nSample] - VAR_2) / VAR_4;

  VAR_2 = VAR_1->out.SampleOctets[VAR_1->nSample];
  VAR_1->out.SampleOctets[VAR_1->nSample] = VAR_1->OctetsOut;
  VAR_1->out.OctetsPerSecond = (VAR_1->out.SampleOctets[VAR_1->nSample] - VAR_2) / VAR_4;

  VAR_5 = VAR_1->in.OctetsPerSecond + VAR_1->out.OctetsPerSecond;
  if (VAR_1->BestOctetsPerSecond < VAR_5) {
    VAR_1->BestOctetsPerSecond = VAR_5;
    FUNC_2(&VAR_1->BestOctetsPerSecondTime);
  }

  if (++VAR_1->nSample == VAR_1->SamplePeriod)
    VAR_1->nSample = 0;

  if (VAR_1->callback.fn != ((void*)0) && VAR_3 >= VAR_1->SamplePeriod)
    (*VAR_1->callback.fn)(VAR_1->callback.data);

  FUNC_3(&VAR_1->Timer);
}
