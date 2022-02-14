
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ json_pretty_print; } ;
typedef int GModule ;
typedef int GJSON ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int*,int*) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *,char*,int,int,int) ;
 int FUNC_5 (int *,char*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_6 (GJSON * VAR_1, GModule VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  int VAR_5 = 0, VAR_6 = 0;

  FUNC_1 (VAR_2, &VAR_6, &VAR_5);


  if (VAR_0.json_pretty_print)
    VAR_4 = VAR_3 + 1;

  FUNC_3 (VAR_1, "visitors", VAR_3);
  FUNC_5 (VAR_1, "count", FUNC_0 (VAR_2, "visitors"), VAR_4, 0);
  FUNC_4 (VAR_1, "max", VAR_5, VAR_4, 0);
  FUNC_4 (VAR_1, "min", VAR_6, VAR_4, 1);
  FUNC_2 (VAR_1, VAR_3, 0);
}
