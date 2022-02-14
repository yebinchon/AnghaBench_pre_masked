
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ json_pretty_print; } ;
struct TYPE_7__ {int (* plot ) (int *,TYPE_2__,int) ;} ;
struct TYPE_6__ {TYPE_2__* chart; } ;
typedef TYPE_1__ GHTML ;
typedef int FILE ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_2__,int) ;

__attribute__((used)) static void
FUNC_6 (FILE * VAR_1, const GHTML * VAR_2, int VAR_3)
{
  int VAR_4, VAR_5 = 0, VAR_6 = FUNC_0 (VAR_2);

  if (VAR_0.json_pretty_print)
    VAR_5 = VAR_3 + 1;

  FUNC_3 (VAR_1, "plot", VAR_3);

  for (VAR_4 = 0; VAR_4 < VAR_6; ++VAR_4) {
    FUNC_4 (VAR_1, VAR_5);
    VAR_2->chart[VAR_4].plot (VAR_1, VAR_2->chart[VAR_4], VAR_5);
    FUNC_2 (VAR_1, VAR_5, (VAR_4 == VAR_6 - 1));
  }

  FUNC_1 (VAR_1, VAR_3, 0);
}
