
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ cpuid_level; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static uint32_t FUNC_2(void)
{
 if (VAR_1.cpuid_level < 0 ||
     !FUNC_0(VAR_0))
  return 0;

 return FUNC_1("Jailhouse\0\0\0", 0);
}
