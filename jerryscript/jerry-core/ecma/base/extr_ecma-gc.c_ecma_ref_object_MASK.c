
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_3__ {scalar_t__ type_flags_refs; } ;
typedef TYPE_1__ ecma_object_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

void
FUNC_2 (ecma_object_t *VAR_3)
{
  if (FUNC_0 (VAR_3->type_flags_refs < VAR_0))
  {
    VAR_3->type_flags_refs = (uint16_t) (VAR_3->type_flags_refs + VAR_1);
  }
  else
  {
    FUNC_1 (VAR_2);
  }
}
