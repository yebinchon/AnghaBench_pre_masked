
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic_string_id; } ;
typedef TYPE_1__ ecma_builtin_property_descriptor_t ;
typedef size_t ecma_builtin_id_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__** VAR_2 ;

__attribute__((used)) static size_t
FUNC_1 (ecma_builtin_id_t VAR_3)
{
  FUNC_0 (VAR_3 < VAR_0);
  const ecma_builtin_property_descriptor_t *VAR_4 = VAR_2[VAR_3];

  const ecma_builtin_property_descriptor_t *VAR_5 = VAR_4;

  while (VAR_5->magic_string_id != VAR_1)
  {
    VAR_5++;
  }

  return (size_t) (VAR_5 - VAR_4);
}
