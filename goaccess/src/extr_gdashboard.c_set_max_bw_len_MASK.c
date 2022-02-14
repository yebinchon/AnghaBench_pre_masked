
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* metrics; } ;
struct TYPE_9__ {int bw_len; } ;
struct TYPE_7__ {int sbw; } ;
struct TYPE_8__ {TYPE_1__ bw; } ;
typedef TYPE_3__ GDashMeta ;
typedef TYPE_4__ GDashData ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1 (GDashMeta * VAR_1, GDashData * VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_2->metrics->bw.sbw);
  int VAR_4 = FUNC_0 (VAR_0);

  if (VAR_3 > VAR_1->bw_len)
    VAR_1->bw_len = VAR_3;



  if (VAR_4 > VAR_1->bw_len)
    VAR_1->bw_len = VAR_4;
}
