
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ key_id; } ;
typedef TYPE_1__ lmo_entry_t ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 uint32_t VAR_2 = ((const lmo_entry_t *)VAR_0)->key_id;
 uint32_t VAR_3 = ((const lmo_entry_t *)VAR_1)->key_id;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;

 return 0;
}
