
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* metrics; } ;
struct TYPE_7__ {int visitors_len; } ;
struct TYPE_6__ {int visitors; } ;
typedef TYPE_2__ GDashMeta ;
typedef TYPE_3__ GDashData ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (GDashMeta * VAR_1, GDashData * VAR_2)
{
  int VAR_3 = FUNC_0 (VAR_2->metrics->visitors);
  int VAR_4 = FUNC_1 (VAR_0);

  if (VAR_3 > VAR_1->visitors_len)
    VAR_1->visitors_len = VAR_3;



  if (VAR_4 > VAR_1->visitors_len)
    VAR_1->visitors_len = VAR_4;
}
