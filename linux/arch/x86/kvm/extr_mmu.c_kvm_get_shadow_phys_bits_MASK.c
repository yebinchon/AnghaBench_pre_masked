
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int extended_cpuid_level; int x86_phys_bits; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u8 FUNC_3(void)
{






 if (!FUNC_1(VAR_0) ||
     FUNC_0(VAR_1.extended_cpuid_level < 0x80000008))
  return VAR_1.x86_phys_bits;

 return FUNC_2(0x80000008) & 0xff;
}
