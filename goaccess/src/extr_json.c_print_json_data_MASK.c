
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct GPanel_ {int dummy; } ;
struct TYPE_7__ {scalar_t__ json_pretty_print; } ;
struct TYPE_6__ {int module; } ;
typedef int GPercTotals ;
typedef int GJSON ;
typedef TYPE_1__ GHolder ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,TYPE_1__*,int ,int,struct GPanel_ const*) ;
 int FUNC_4 (int *,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_5 (GJSON * VAR_1, GHolder * VAR_2, GPercTotals VAR_3,
                 const struct GPanel_ *VAR_4)
{
  int VAR_5 = 0;

  if (VAR_0.json_pretty_print)
    VAR_5 = 1;


  FUNC_2 (VAR_1, FUNC_0 (VAR_2->module), VAR_5);

  FUNC_4 (VAR_1, VAR_2, VAR_5);

  FUNC_3 (VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);

  FUNC_1 (VAR_1, VAR_5, 1);
}
