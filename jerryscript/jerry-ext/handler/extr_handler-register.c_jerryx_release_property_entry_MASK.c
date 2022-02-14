
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int registered; } ;
typedef TYPE_1__ jerryx_register_result ;
struct TYPE_6__ {int value; int * name; } ;
typedef TYPE_2__ jerryx_property_entry ;


 int FUNC_0 (int ) ;

void
FUNC_1 (const jerryx_property_entry VAR_0[],
                               const jerryx_register_result VAR_1)
{
  for (uint32_t VAR_2 = VAR_1.registered;
       ((VAR_0 + VAR_2) != ((void*)0)) && (VAR_0[VAR_2].name != ((void*)0));
       VAR_2++)
  {
    FUNC_0 (VAR_0[VAR_2].value);
  }
}
