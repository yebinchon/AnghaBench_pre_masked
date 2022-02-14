
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int resource_size_t ;
struct TYPE_2__ {int (* pcibios_default_alignment ) () ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;

resource_size_t FUNC_1(void)
{
 if (VAR_0.pcibios_default_alignment)
  return VAR_0.pcibios_default_alignment();

 return 0;
}
