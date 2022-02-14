
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ json_pretty_print; } ;
struct TYPE_5__ {int module; } ;
typedef TYPE_1__ GHTML ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_1__ const*,int) ;

__attribute__((used)) static void
FUNC_5 (FILE * VAR_4, const GHTML * VAR_5)
{
  int VAR_6 = 0;

  if (VAR_2.json_pretty_print)
    VAR_6 = 1;


  FUNC_2 (VAR_4, FUNC_3 (VAR_5->module), VAR_6);

  FUNC_4 (VAR_4, VAR_5, VAR_6);

  FUNC_0 (VAR_4, VAR_6, 1);

  FUNC_1 (VAR_4, (VAR_5->module != VAR_1 - 1) ? ",%.*s" : "%.*s", VAR_3,
          VAR_0);
}
