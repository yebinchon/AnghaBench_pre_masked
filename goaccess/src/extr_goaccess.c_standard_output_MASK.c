
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ output_format_idx; } ;


 TYPE_1__ VAR_0 ;
 scalar_t__ FUNC_0 (char**,char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (void)
{
  char *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);


  if (FUNC_0 (&VAR_3, "csv", 1) == 0)
    FUNC_2 (VAR_1, VAR_2, VAR_3);

  if (FUNC_0 (&VAR_4, "json", 1) == 0)
    FUNC_3 (VAR_1, VAR_2, VAR_4);

  if (FUNC_0 (&VAR_5, "html", 1) == 0 || VAR_0.output_format_idx == 0)
    FUNC_4 (VAR_5);

  FUNC_1 (VAR_3);
  FUNC_1 (VAR_5);
  FUNC_1 (VAR_4);
}
