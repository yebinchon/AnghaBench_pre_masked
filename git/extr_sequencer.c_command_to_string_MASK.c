
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum todo_command { ____Placeholder_todo_command } todo_command ;
struct TYPE_2__ {char const* str; } ;


 int const VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int const) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static const char *FUNC_2(const enum todo_command VAR_2)
{
 if (VAR_2 < VAR_0)
  return VAR_1[VAR_2].str;
 FUNC_1(FUNC_0("unknown command: %d"), VAR_2);
}
