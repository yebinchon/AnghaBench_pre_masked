
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ json_pretty_print; } ;
struct TYPE_5__ {int (* metrics ) (int *,TYPE_1__ const*,int) ;} ;
typedef TYPE_1__ GHTML ;
typedef int FILE ;


 TYPE_4__ VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,TYPE_1__ const*,int) ;

__attribute__((used)) static void
FUNC_3 (FILE * VAR_1, const GHTML * VAR_2, int VAR_3)
{
  int VAR_4 = 0;

  if (VAR_0.json_pretty_print)
    VAR_4 = VAR_3 + 1;


  FUNC_1 (VAR_1, "items", VAR_3);

  VAR_2->metrics (VAR_1, VAR_2, VAR_4);

  FUNC_0 (VAR_1, VAR_3, 1);
}
