
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_4__ {int type_flags_refs; } ;
typedef TYPE_1__ ecma_object_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_3 (ecma_object_t *VAR_3)
{
  if (VAR_3->type_flags_refs >= VAR_0)
  {
    VAR_3->type_flags_refs = (uint16_t) (VAR_3->type_flags_refs & (VAR_1 - 1));

  }
}
