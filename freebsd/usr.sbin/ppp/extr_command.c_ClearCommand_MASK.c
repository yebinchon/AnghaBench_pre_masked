
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct pppThroughput {int dummy; } ;
struct datalink {TYPE_3__* physical; } ;
struct cmdargs {int argc; int argn; int prompt; int * argv; TYPE_7__* bundle; struct datalink* cx; } ;
struct TYPE_12__ {struct pppThroughput throughput; } ;
struct TYPE_11__ {struct pppThroughput throughput; } ;
struct TYPE_13__ {TYPE_5__ ipv6cp; TYPE_4__ ipcp; } ;
struct TYPE_14__ {TYPE_6__ ncp; } ;
struct TYPE_8__ {struct pppThroughput total; } ;
struct TYPE_9__ {TYPE_1__ stats; } ;
struct TYPE_10__ {TYPE_2__ link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct datalink* FUNC_0 (TYPE_7__*,int *) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int ,char*) ;
 int FUNC_3 (struct pppThroughput*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct cmdargs const *VAR_5)
{
  struct pppThroughput *VAR_6;
  struct datalink *VAR_7;
  int VAR_8, VAR_9;

  if (VAR_5->argc < VAR_5->argn + 1)
    return -1;

  if (FUNC_2(VAR_5->argv[VAR_5->argn], "physical") == 0) {
    VAR_7 = VAR_5->cx;
    if (!VAR_7)
      VAR_7 = FUNC_0(VAR_5->bundle, ((void*)0));
    if (!VAR_7) {
      FUNC_1(VAR_0, "A link must be specified for ``clear physical''\n");
      return 1;
    }
    VAR_6 = &VAR_7->physical->link.stats.total;
  } else if (FUNC_2(VAR_5->argv[VAR_5->argn], "ipcp") == 0)
    VAR_6 = &VAR_5->bundle->ncp.ipcp.throughput;

  else if (FUNC_2(VAR_5->argv[VAR_5->argn], "ipv6cp") == 0)
    VAR_6 = &VAR_5->bundle->ncp.ipv6cp.throughput;

  else
    return -1;

  if (VAR_5->argc > VAR_5->argn + 1) {
    VAR_9 = 0;
    for (VAR_8 = VAR_5->argn + 1; VAR_8 < VAR_5->argc; VAR_8++)
      if (FUNC_2(VAR_5->argv[VAR_8], "overall") == 0)
        VAR_9 |= VAR_3;
      else if (FUNC_2(VAR_5->argv[VAR_8], "current") == 0)
        VAR_9 |= VAR_2;
      else if (FUNC_2(VAR_5->argv[VAR_8], "peak") == 0)
        VAR_9 |= VAR_4;
      else
        return -1;
  } else
    VAR_9 = VAR_1;

  FUNC_3(VAR_6, VAR_9, VAR_5->prompt);
  return 0;
}
