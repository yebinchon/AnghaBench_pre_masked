
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ serve_usecs; } ;
struct TYPE_12__ {TYPE_7__* sts; } ;
struct TYPE_11__ {TYPE_7__* sts; } ;
struct TYPE_10__ {TYPE_7__* sts; } ;
struct TYPE_9__ {TYPE_7__* sbw; } ;
struct TYPE_14__ {TYPE_4__ maxts; TYPE_3__ cumts; TYPE_2__ avgts; TYPE_1__ bw; struct TYPE_14__* data; } ;
struct TYPE_13__ {TYPE_7__* metrics; } ;
typedef TYPE_5__ GDashData ;


 TYPE_8__ VAR_0 ;
 int FUNC_0 (TYPE_7__*) ;

__attribute__((used)) static void
FUNC_1 (GDashData VAR_1)
{
  if (VAR_1.metrics == ((void*)0))
    return;

  if (VAR_1.metrics->data)
    FUNC_0 (VAR_1.metrics->data);
  if (VAR_1.metrics->bw.sbw)
    FUNC_0 (VAR_1.metrics->bw.sbw);
  if (VAR_0.serve_usecs && VAR_1.metrics->avgts.sts)
    FUNC_0 (VAR_1.metrics->avgts.sts);
  if (VAR_0.serve_usecs && VAR_1.metrics->cumts.sts)
    FUNC_0 (VAR_1.metrics->cumts.sts);
  if (VAR_0.serve_usecs && VAR_1.metrics->maxts.sts)
    FUNC_0 (VAR_1.metrics->maxts.sts);
  FUNC_0 (VAR_1.metrics);
}
