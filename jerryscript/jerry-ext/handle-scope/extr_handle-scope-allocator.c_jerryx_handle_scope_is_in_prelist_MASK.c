
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int jerryx_handle_scope_t ;
struct TYPE_2__ {int * prelist; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool
FUNC_0 (jerryx_handle_scope_t *VAR_2)
{
  return (VAR_1.prelist <= VAR_2)
  && (VAR_2 <= (VAR_1.prelist + VAR_0 - 1));
}
