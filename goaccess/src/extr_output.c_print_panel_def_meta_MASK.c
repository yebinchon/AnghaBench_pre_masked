
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ json_pretty_print; } ;
struct TYPE_7__ {int table; int module; } ;
typedef TYPE_1__ GHTML ;
typedef int FILE ;


 TYPE_6__ VAR_0 ;
 int FUNC_0 (int *,char*,int ,int,int ) ;
 int FUNC_1 (int *,char*,char const*,int,int ) ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*,char const*,int) ;
 int FUNC_6 (int *,TYPE_1__ const*,int) ;
 int FUNC_7 (int *,TYPE_1__ const*,int) ;
 int FUNC_8 (int *,TYPE_1__ const*,int) ;

__attribute__((used)) static void
FUNC_9 (FILE * VAR_1, const GHTML * VAR_2, int VAR_3)
{
  const char *VAR_4 = FUNC_2 (VAR_2->module);
  const char *VAR_5 = FUNC_3 (VAR_2->module);
  const char *VAR_6 = FUNC_4 (VAR_2->module);

  int VAR_7 = 0;

  if (VAR_0.json_pretty_print)
    VAR_7 = VAR_3 + 1;

  FUNC_5 (VAR_1, VAR_5, VAR_4, VAR_3);

  FUNC_1 (VAR_1, "id", VAR_6, VAR_7, 0);
  FUNC_0 (VAR_1, "table", VAR_2->table, VAR_7, 0);

  FUNC_8 (VAR_1, VAR_2, VAR_7);
  FUNC_7 (VAR_1, VAR_2, VAR_7);
  FUNC_6 (VAR_1, VAR_2, VAR_7);
}
