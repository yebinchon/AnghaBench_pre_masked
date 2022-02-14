
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_18__ {int OctetsPerSecond; } ;
struct TYPE_17__ {int OctetsPerSecond; } ;
struct pppThroughput {int SamplePeriod; scalar_t__ downtime; TYPE_13__ out; TYPE_12__ in; } ;
struct TYPE_25__ {unsigned long long bandwidth; } ;
struct datalink {unsigned long long name; scalar_t__ state; TYPE_14__* physical; TYPE_6__ mp; struct datalink* next; } ;
struct cmdargs {int prompt; TYPE_11__* bundle; } ;
struct TYPE_26__ {struct pppThroughput total; } ;
struct TYPE_27__ {TYPE_7__ stats; } ;
struct TYPE_28__ {TYPE_8__ link; } ;
struct TYPE_21__ {int OctetsPerSecond; } ;
struct TYPE_20__ {int OctetsPerSecond; } ;
struct TYPE_22__ {scalar_t__ rolling; TYPE_2__ out; TYPE_1__ in; } ;
struct TYPE_23__ {TYPE_3__ total; } ;
struct TYPE_24__ {TYPE_4__ stats; } ;
struct TYPE_19__ {TYPE_5__ link; int type; } ;
struct TYPE_15__ {TYPE_9__ mp; } ;
struct TYPE_16__ {TYPE_10__ ncp; struct datalink* links; } ;


 scalar_t__ VAR_0 ;
 unsigned long long FUNC_0 (int ,int ) ;
 int FUNC_1 (struct datalink*) ;
 unsigned long long FUNC_2 (int ) ;
 unsigned long long FUNC_3 (TYPE_14__*) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct pppThroughput*) ;

int
FUNC_6(struct cmdargs const *VAR_1)
{
  struct datalink *VAR_2;
  struct pppThroughput *VAR_3;
  unsigned long long VAR_4;
  int VAR_5;

  for (VAR_2 = VAR_1->bundle->links; VAR_2; VAR_2 = VAR_2->next) {
    VAR_4 = FUNC_0(VAR_2->physical->link.stats.total.in.OctetsPerSecond,
                 VAR_2->physical->link.stats.total.out.OctetsPerSecond);

    FUNC_4(VAR_1->prompt, "Name: %s [%s, %s]",
                  VAR_2->name, FUNC_2(VAR_2->physical->type), FUNC_1(VAR_2));
    if (VAR_2->physical->link.stats.total.rolling && VAR_2->state == VAR_0)
      FUNC_4(VAR_1->prompt, " bandwidth %d, %llu bps (%llu bytes/sec)",
                    VAR_2->mp.bandwidth ? VAR_2->mp.bandwidth :
                                       FUNC_3(VAR_2->physical),
                    VAR_4 * 8, VAR_4);
    FUNC_4(VAR_1->prompt, "\n");
  }

  VAR_3 = &VAR_1->bundle->ncp.mp.link.stats.total;
  VAR_4 = FUNC_0(VAR_3->in.OctetsPerSecond, VAR_3->out.OctetsPerSecond);
  VAR_5 = VAR_3->downtime ? 0 : FUNC_5(VAR_3);
  if (VAR_5 > VAR_3->SamplePeriod)
    VAR_5 = VAR_3->SamplePeriod;
  if (VAR_5)
    FUNC_4(VAR_1->prompt, "Currently averaging %llu bps (%llu bytes/sec)"
                  " over the last %d secs\n", VAR_4 * 8, VAR_4, VAR_5);

  return 0;
}
