
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ecx; int edx; } ;
typedef TYPE_1__ vk_cpuid_t ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static int FUNC_1 (void) {
  vk_cpuid_t *VAR_0 = FUNC_0 ();
  return (VAR_0->ecx & (1 << 25)) && ((VAR_0->edx & 0x06000000) == 0x06000000);
}
