
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ json_pretty_print; } ;
struct TYPE_4__ {int visitors_perc; int visitors; } ;
typedef TYPE_1__ GMetrics ;
typedef int GJSON ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ,int,int) ;
 int FUNC_3 (int *,char*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_4 (GJSON * VAR_1, GMetrics * VAR_2, int VAR_3)
{
  int VAR_4 = 0;


  if (VAR_0.json_pretty_print)
    VAR_4 = VAR_3 + 1;

  FUNC_1 (VAR_1, "visitors", VAR_3);

  FUNC_3 (VAR_1, "count", VAR_2->visitors, VAR_4, 0);

  FUNC_2 (VAR_1, "percent", VAR_2->visitors_perc, VAR_4, 1);
  FUNC_0 (VAR_1, VAR_3, 0);
}
