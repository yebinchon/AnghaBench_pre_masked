
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filenames_idx; scalar_t__ json_pretty_print; } ;
typedef int GJSON ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static void
FUNC_3 (GJSON * VAR_2, int VAR_3)
{
  int VAR_4, VAR_5 = 0;


  if (VAR_1.json_pretty_print)
    VAR_5 = VAR_3 + 1;

  FUNC_1 (VAR_2, VAR_0, VAR_3);
  for (VAR_4 = 0; VAR_4 < VAR_1.filenames_idx; ++VAR_4)
    FUNC_2 (VAR_2, VAR_4, VAR_5);
  FUNC_0 (VAR_2, VAR_3, 1);
}
