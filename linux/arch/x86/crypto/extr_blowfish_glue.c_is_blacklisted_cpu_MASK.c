
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ x86_vendor; int x86; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static bool FUNC_0(void)
{
 if (VAR_1.x86_vendor != VAR_0)
  return 0;

 if (VAR_1.x86 == 0x0f) {





  return 1;
 }

 return 0;
}
