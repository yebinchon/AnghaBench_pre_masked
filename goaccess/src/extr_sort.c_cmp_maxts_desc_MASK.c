
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_6__ {TYPE_2__* metrics; } ;
struct TYPE_4__ {scalar_t__ nts; } ;
struct TYPE_5__ {TYPE_1__ maxts; } ;
typedef TYPE_3__ GHolderItem ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const GHolderItem *VAR_2 = VAR_0;
  const GHolderItem *VAR_3 = VAR_1;

  uint64_t VAR_4 = VAR_2->metrics->maxts.nts;
  uint64_t VAR_5 = VAR_3->metrics->maxts.nts;

  return (VAR_4 < VAR_5) - (VAR_4 > VAR_5);
}
