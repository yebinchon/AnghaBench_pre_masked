
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ json_pretty_print; } ;
typedef int GJSON ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int,int,int) ;

__attribute__((used)) static void
FUNC_3 (GJSON * VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = 0;


  if (VAR_0.json_pretty_print)
    VAR_4 = VAR_3 + 1;

  FUNC_1 (VAR_1, "data", VAR_3);
  FUNC_2 (VAR_1, "unique", VAR_2, VAR_4, 1);
  FUNC_0 (VAR_1, VAR_3, 1);
}
