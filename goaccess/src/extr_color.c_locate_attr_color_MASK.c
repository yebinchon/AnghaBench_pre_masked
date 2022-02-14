
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int attr; } ;
typedef TYPE_1__ GColors ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static void
FUNC_1 (GColors * VAR_5, const char *VAR_6)
{
  if (FUNC_0 (VAR_6, "bold"))
    VAR_5->attr |= VAR_1;
  if (FUNC_0 (VAR_6, "underline"))
    VAR_5->attr |= VAR_4;
  if (FUNC_0 (VAR_6, "normal"))
    VAR_5->attr |= VAR_2;
  if (FUNC_0 (VAR_6, "reverse"))
    VAR_5->attr |= VAR_3;
  if (FUNC_0 (VAR_6, "standout"))
    VAR_5->attr |= VAR_3;
  if (FUNC_0 (VAR_6, "blink"))
    VAR_5->attr |= VAR_0;
}
