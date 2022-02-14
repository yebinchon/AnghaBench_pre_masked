
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int serve_usecs; } ;
struct TYPE_11__ {TYPE_1__* metrics; } ;
struct TYPE_10__ {int avgts_len; } ;
struct TYPE_9__ {int sts; } ;
struct TYPE_8__ {TYPE_2__ avgts; } ;
typedef TYPE_3__ GDashMeta ;
typedef TYPE_4__ GDashData ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (GDashMeta * VAR_2, GDashData * VAR_3)
{
  int VAR_4 = 0, VAR_5 = 0;

  if (!VAR_1.serve_usecs || !VAR_3->metrics->avgts.sts)
    return;

  VAR_4 = FUNC_0 (VAR_3->metrics->avgts.sts);
  VAR_5 = FUNC_0 (VAR_0);

  if (VAR_4 > VAR_2->avgts_len)
    VAR_2->avgts_len = VAR_4;



  if (VAR_5 > VAR_2->avgts_len)
    VAR_2->avgts_len = VAR_5;
}
