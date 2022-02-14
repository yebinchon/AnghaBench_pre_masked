
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ json_pretty_print; } ;
struct TYPE_7__ {size_t module; } ;
struct TYPE_6__ {int sort; int field; } ;
typedef TYPE_1__ GSort ;
typedef TYPE_2__ GHTML ;
typedef int FILE ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int ,int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void
FUNC_5 (FILE * VAR_2, const GHTML * VAR_3, int VAR_4)
{
  GSort VAR_5 = VAR_1[VAR_3->module];
  int VAR_6 = 0;

  if (VAR_0.json_pretty_print)
    VAR_6 = VAR_4 + 1;


  FUNC_1 (VAR_2, "sort", VAR_4);
  FUNC_2 (VAR_2, "field", FUNC_3 (VAR_5.field), VAR_6, 0);
  FUNC_2 (VAR_2, "order", FUNC_4 (VAR_5.sort), VAR_6, 1);

  FUNC_0 (VAR_2, VAR_4, 0);
}
